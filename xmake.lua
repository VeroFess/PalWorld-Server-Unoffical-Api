add_rules("mode.debug", "mode.release")

set_kind("static")

package("Zycore")
    add_deps("cmake")

    set_sourcedir(path.join(os.scriptdir(), "3rd/zycore"))

    on_install(function (package)
        local configs = {}
        table.insert(configs, "-DCMAKE_BUILD_TYPE=" .. (package:debug() and "Debug" or "Release"))
        table.insert(configs, "-DBUILD_SHARED_LIBS=OFF")
        table.insert(configs, "-DZYCORE_BUILD_SHARED_LIB=OFF")
        import("package.tools.cmake").install(package, configs)
    end)

    on_test(function (package)
        assert(package:check_cxxsnippets({test = [[
            #include <Zycore/Comparison.h>
            #include <Zycore/Vector.h>
            void test() {
                ZyanVector vector;
                ZyanU16 buffer[32];
            }
        ]]}))
    end)
package_end()

package("Zydis")
    add_deps("cmake", "Zycore")

    set_sourcedir(path.join(os.scriptdir(), "3rd/zydis"))

    on_install(function (package)
        local configs = {}
        table.insert(configs, "-DCMAKE_BUILD_TYPE=" .. (package:debug() and "Debug" or "Release"))
        table.insert(configs, "-DBUILD_SHARED_LIBS=OFF")
        table.insert(configs, "-DZYDIS_BUILD_SHARED_LIB=OFF")
        table.insert(configs, "-DZYAN_ZYCORE_PATH=" .. path.join(os.scriptdir(), "3rd/zycore"))
        import("package.tools.cmake").install(package, configs)
    end)

    on_test(function (package)
        assert(package:check_cxxsnippets({test = [[
            #include <Zydis/Zydis.h>
            #include <Zycore/LibC.h>
            void test() {
                ZyanU8 encoded_instruction[ZYDIS_MAX_INSTRUCTION_LENGTH];
                ZyanUSize encoded_length = sizeof(encoded_instruction);
            }
        ]]}, {configs = {languages = "c++11"}}))
    end)
package_end()

package("funchook")
    add_deps("cmake", "Zydis")

    set_sourcedir(path.join(os.scriptdir(), "3rd/funchook"))

    if is_os("windows") then
        add_syslinks("psapi.lib")
    end

    on_install(function (package)
        local configs = {}
        table.insert(configs, "-DCMAKE_BUILD_TYPE=" .. (package:debug() and "Debug" or "Release"))
        table.insert(configs, "-DBUILD_SHARED_LIBS=OFF")
        table.insert(configs, "-DFUNCHOOK_DISASM=zydis")
        table.insert(configs, "-DFUNCHOOK_BUILD_SHARED=OFF")
        table.insert(configs, "-DFUNCHOOK_BUILD_STATIC=ON")
        import("package.tools.cmake").install(package, configs)
    end)
package_end()

package("fmt")
    add_deps("cmake")
    set_sourcedir(path.join(os.scriptdir(), "3rd/fmt"))

    on_install(function (package)
        local configs = {}
        table.insert(configs, "-DCMAKE_BUILD_TYPE=" .. (package:debug() and "Debug" or "Release"))
        table.insert(configs, "-DBUILD_SHARED_LIBS=OFF")
        import("package.tools.cmake").install(package, configs)
    end)
package_end()

package("spdlog")
    add_deps("cmake", "fmt")
    set_sourcedir(path.join(os.scriptdir(), "3rd/spdlog"))

    on_install(function (package)
        local configs = {}
        table.insert(configs, "-DCMAKE_BUILD_TYPE=" .. (package:debug() and "Debug" or "Release"))
        table.insert(configs, "-DBUILD_SHARED_LIBS=OFF")
        import("package.tools.cmake").install(package, configs)
    end)
package_end()

package("libisocline")
    add_deps("cmake")
    set_sourcedir(path.join(os.scriptdir(), "3rd/isocline"))

    on_install(function (package)
        local configs = {}
        table.insert(configs, "-DCMAKE_BUILD_TYPE=" .. (package:debug() and "Debug" or "Release"))
        table.insert(configs, "-DBUILD_SHARED_LIBS=OFF")
        table.insert(configs, "-DIC_USE_CXX=ON")
        table.insert(configs, "-DIC_DEBUG_MSG=OFF")
        table.insert(configs, "-DIC_BUILD_TESTS=OFF")
        import("package.tools.cmake").install(package, configs)
    end)
package_end()

package("eventpp")
    add_deps("cmake")
    set_sourcedir(path.join(os.scriptdir(), "3rd/eventpp"))

    on_install(function (package)
        local configs = {}
        table.insert(configs, "-DCMAKE_BUILD_TYPE=" .. (package:debug() and "Debug" or "Release"))
        table.insert(configs, "-DBUILD_SHARED_LIBS=OFF")
        import("package.tools.cmake").install(package, configs)
    end)
package_end()

-- just install every thing
add_requires("vcpkg::folly")
add_requires("vcpkg::hyperscan")
add_requires("spdlog")
add_requires("eventpp")
add_requires("funchook")
add_requires("libisocline")

target("pal-plugin-loader-static")
    set_policy("build.merge_archive", true)
    set_policy("build.optimization.lto", false)
    set_policy("build.ccache", false)

    set_kind("static")

    set_languages("c17", "cxx20")

    add_defines("ZYDIS_STATIC_BUILD")
    add_defines("ZYCORE_STATIC_BUILD")
    add_defines("NETHOST_USE_AS_STATIC")
    add_defines("GLOG_NO_ABBREVIATED_SEVERITIES")
    
    add_packages("folly")
    add_packages("spdlog")
    add_packages("eventpp")
    add_packages("funchook")
    add_packages("hyperscan")
    add_packages("libisocline")

    add_links("hs")
    add_links("fmt")
    add_links("glog")
    add_links("folly")
    add_links("spdlog")
    add_links("funchook")

    add_links("double-conversion")

    if is_os("windows") then
        add_links("gflags_static")
    else
        add_links("gflags")
    end

    if is_os("windows") then
        add_links(path.join(os.scriptdir(), "bin/windows-x86-64/libnethost.lib"))
    else
        add_links(path.join(os.scriptdir(), "bin/linux-x86_64/libnethost.a"))
    end

    if is_os("windows") then
        add_syslinks("ntdll.lib")
        add_syslinks("ole32.lib")
        add_syslinks("bcrypt.lib")
        add_syslinks("ws2_32.lib")
        add_syslinks("userenv.lib")
        add_syslinks("shell32.lib")
        add_syslinks("shlwapi.lib")
        add_syslinks("iphlpapi.lib")
        add_syslinks("advapi32.lib")
    else
        add_syslinks("dl")
        add_syslinks("pthread")
    end

    if is_os("linux") then
        add_cxflags("-fPIC", "-static", "-pie", "-Wl,--no-as-needed -ldl", "-Wno-elaborated-enum-class")
        add_shflags("-fPIC", "-static", "-pie", "-Wl,--no-as-needed -ldl")
        add_ldflags("-fPIC", "-static", "-pie", "-Wl,--no-as-needed -ldl")
    end

    add_includedirs(path.join(os.scriptdir(), "include/sdk/SDK"))
    add_includedirs(path.join(os.scriptdir(), "include/dotnet"))
    add_includedirs(path.join(os.scriptdir(), "include/sdk"))
    add_includedirs(path.join(os.scriptdir(), "include"))

    if is_os("windows") then
        add_includedirs(path.join(os.scriptdir(), "include/os/windows/sdk"))
        add_includedirs(path.join(os.scriptdir(), "include/os/windows"))

        add_files("src/os/windows/*.cpp")
    else 
        add_includedirs(path.join(os.scriptdir(), "include/os/linux/sdk"))
        add_includedirs(path.join(os.scriptdir(), "include/os/linux"))

        add_files("src/os/linux/*.cpp")
    end

    add_files("src/*.cpp")
    add_files("src/sdk/*.cpp")
    add_files("src/hooks/*.cpp")
    add_files("src/ev_test/*.cpp")
    add_files("src/commands/*.cpp")

target("pal-plugin-loader")
    set_policy("build.merge_archive", true)

    set_kind("shared")

    set_languages("c17", "cxx20")

    add_deps("pal-plugin-loader-static")

    add_links("pal-plugin-loader-static")

    add_includedirs(path.join(os.scriptdir(), "include/sdk/SDK"))
    add_includedirs(path.join(os.scriptdir(), "include/sdk"))
    add_includedirs(path.join(os.scriptdir(), "include"))

    if is_os("windows") then
        add_includedirs(path.join(os.scriptdir(), "include/os/windows/sdk"))
        add_includedirs(path.join(os.scriptdir(), "include/os/windows"))
        add_files("src/os/windows/libentry/*.cpp")
    else 
        add_includedirs(path.join(os.scriptdir(), "include/os/linux/sdk"))
        add_includedirs(path.join(os.scriptdir(), "include/os/linux"))
        add_files("src/os/linux/libentry/*.cpp")
    end



    

