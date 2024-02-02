# PalWorld-Server-Unofficial-Api

PalWorld-Server-Unofficial-Api is a third-party PalWorld API with the goal of becoming a server-side development API similar to Minecraft Bukkit. The aim is to ensure that plugins do not require updates when the game version is upgraded.

***The project is currently in very early development, and its code may undergo significant rewrites.***

Currently, I am eager to hear everyone's opinions to decide on what features need to be added. Please share your ideas in the Issues section!

## How to build

### Windows
#### Step 1 - Download Visual Studio

Click the following link to go to the [Visual Studio download page](https://visualstudio.microsoft.com/downloads/)

#### Step 2 - Install Visual Studio and choose workload

At least, you should choose **Desktop development with C++** and **Universal Windows Platform development**, If you don't know what the other options do, leave them as default.

Please wait for the installation process to complete before proceeding to the next step.

#### Step 3 - Install Rust

Click the following link to go to the [Rust download page](https://www.rust-lang.org/tools/install)

#### Step 4 - Install xmake

Click the following link to go to the [xmake release page](https://github.com/xmake-io/xmake/releases), you should download the file which named **xmake-master.win64.exe**

#### Step 3 - Install Git for Windows

Click the following link to go to the [Git download page](https://git-scm.com/download/win)

#### Step 5 - Clone this project

Choose an appropriate directory, such as D:\Codes

Open this directory in explorer

Hold Shift and right-click empty space in this folder and select "Open PowerShell Window Here" to open a PowerShell window.

Please execute the following commands step by step:

```
git clone https://github.com/VeroFess/PalWorld-Server-Unoffical-Api.git
```

```
cd PalWorld-Server-Unoffical-Api
```

```
git submodule update --init --recursive
```

There shouldn't be any errors in the above steps, the correct output should look like this:
<details>

<summary>Click to expand output details</summary>

```
PS D:\Codes> git clone https://github.com/VeroFess/PalWorld-Server-Unoffical-Api.git
Cloning into 'PalWorld-Server-Unoffical-Api'...
remote: Enumerating objects: 1098, done.
remote: Counting objects: 100% (1098/1098), done.
remote: Compressing objects: 100% (214/214), done.
remote: Total 1098 (delta 885), reused 1071 (delta 859), pack-reused 0
Receiving objects: 100% (1098/1098), 4.33 MiB | 4.57 MiB/s, done.
Resolving deltas: 100% (885/885), done.
PS D:\Codes> cd PalWorld-Server-Unoffical-Api
PS D:\Codes\PalWorld-Server-Unoffical-Api> git submodule update --init --recursive
Submodule '3rd/fmt' (https://github.com/fmtlib/fmt.git) registered for path '3rd/fmt'
Submodule '3rd/funchook' (https://github.com/kubo/funchook.git) registered for path '3rd/funchook'
Submodule '3rd/spdlog' (https://github.com/gabime/spdlog.git) registered for path '3rd/spdlog'
Submodule '3rd/wasmtime' (https://github.com/bytecodealliance/wasmtime.git) registered for path '3rd/wasmtime'
Submodule '3rd/zycore' (https://github.com/zyantific/zycore-c.git) registered for path '3rd/zycore'
Submodule '3rd/zydis' (https://github.com/zyantific/zydis.git) registered for path '3rd/zydis'
Cloning into 'D:/Codes/PalWorld-Server-Unoffical-Api/3rd/fmt'...
Cloning into 'D:/Codes/PalWorld-Server-Unoffical-Api/3rd/funchook'...
Cloning into 'D:/Codes/PalWorld-Server-Unoffical-Api/3rd/spdlog'...
Cloning into 'D:/Codes/PalWorld-Server-Unoffical-Api/3rd/wasmtime'...
Cloning into 'D:/Codes/PalWorld-Server-Unoffical-Api/3rd/zycore'...
Cloning into 'D:/Codes/PalWorld-Server-Unoffical-Api/3rd/zydis'...
Submodule path '3rd/fmt': checked out '8e62172ab6742c0e399d906456f54c927ebd4f3a'
Submodule path '3rd/funchook': checked out '0b6fdd10d543c80fbecb61ca515e6cb6622c080b'
Submodule path '3rd/spdlog': checked out '696db97f672e9082e50e50af315d0f4234c82397'
Submodule path '3rd/wasmtime': checked out '7c9547f905c04a2d7ab23fe20f26377997266a7b'
Submodule 'crates/c-api/wasm-c-api' (https://github.com/WebAssembly/wasm-c-api) registered for path '3rd/wasmtime/crates/c-api/wasm-c-api'
Submodule 'crates/wasi-common/WASI' (https://github.com/WebAssembly/WASI) registered for path '3rd/wasmtime/crates/wasi-common/WASI'
Submodule 'crates/wasi-nn/spec' (https://github.com/WebAssembly/wasi-nn) registered for path '3rd/wasmtime/crates/wasi-nn/spec'
Submodule 'tests/spec_testsuite' (https://github.com/WebAssembly/testsuite) registered for path '3rd/wasmtime/tests/spec_testsuite'
Submodule 'tests/wasi_testsuite/wasi-common' (https://github.com/WebAssembly/wasi-testsuite.git) registered for path '3rd/wasmtime/tests/wasi_testsuite/wasi-common'
Submodule 'tests/wasi_testsuite/wasi-threads' (https://github.com/WebAssembly/wasi-threads) registered for path '3rd/wasmtime/tests/wasi_testsuite/wasi-threads'
Cloning into 'D:/Codes/PalWorld-Server-Unoffical-Api/3rd/wasmtime/crates/c-api/wasm-c-api'...
Cloning into 'D:/Codes/PalWorld-Server-Unoffical-Api/3rd/wasmtime/crates/wasi-common/WASI'...
Cloning into 'D:/Codes/PalWorld-Server-Unoffical-Api/3rd/wasmtime/crates/wasi-nn/spec'...
Cloning into 'D:/Codes/PalWorld-Server-Unoffical-Api/3rd/wasmtime/tests/spec_testsuite'...
Cloning into 'D:/Codes/PalWorld-Server-Unoffical-Api/3rd/wasmtime/tests/wasi_testsuite/wasi-common'...
Cloning into 'D:/Codes/PalWorld-Server-Unoffical-Api/3rd/wasmtime/tests/wasi_testsuite/wasi-threads'...
Submodule path '3rd/wasmtime/crates/c-api/wasm-c-api': checked out 'c9d31284651b975f05ac27cee0bab1377560b87e'
Submodule path '3rd/wasmtime/crates/wasi-common/WASI': checked out '0ba0c5e2e37625ca5a6d3e4255a998dfaa3efc52'
Submodule path '3rd/wasmtime/crates/wasi-nn/spec': checked out 'e2310b860db2ff1719c9d69816099b87e85fabdb'
Submodule path '3rd/wasmtime/tests/spec_testsuite': checked out '7ef86ddeed81458f9031a49a40b3a3f99c1c6a8a'
Submodule path '3rd/wasmtime/tests/wasi_testsuite/wasi-common': checked out '09517e50cc47179208f9c681772a6eba617fbddd'
Submodule path '3rd/wasmtime/tests/wasi_testsuite/wasi-threads': checked out 'e1893c00458de3e846f02c9cd2a435992ea8b32c'
Submodule path '3rd/zycore': checked out 'a2fc93e46173e55d9e0596412e68b893228afdf1'
Submodule path '3rd/zydis': checked out '15e38ac36fa4a84dde0fc6ae973d33c22e9521e9'
Submodule 'dependencies/zycore' (https://github.com/zyantific/zycore-c) registered for path '3rd/zydis/dependencies/zycore'
Cloning into 'D:/Codes/PalWorld-Server-Unoffical-Api/3rd/zydis/dependencies/zycore'...
Submodule path '3rd/zydis/dependencies/zycore': checked out 'f98abdfa0d0f4acfdf7994e06ce3aeaf5ae060cd'
PS D:\Codes\PalWorld-Server-Unoffical-Api>
```

</details>

Depending on the version, the output may differ.

#### Step 6 - Build this project

Locate this project directory in explorer, In our case it is ```D:\Codes\PalWorld-Server-Unoffical-Api```

Hold Shift and right-click empty space in this folder and select "Open PowerShell Window Here" to open a PowerShell window.

Now just run ```xmake -y```, xmake should do it all for you!

### Linux

I assume that Linux users generally have more basic knowledge

You need **a compiler supports at least C++20**, **git**, **rust development environment**, and **xmake**.

please check ```https://xmake.io/#/guide/installation``` ```https://www.rust-lang.org/tools/install```

Please remember ```git submodule update --init --recursive```, otherwise the compilation will not be successful.

