# docker build -t psua-palworld-server-docker-builer -f build.palworld-server-docker.Dockerfile .
# docker run --rm -v `pwd`/out:/out -it psua-palworld-server-docker-builer

FROM debian:bullseye

RUN apt-get -y update && apt-get -y upgrade && apt-get -y install apt-utils curl wget git zip unzip tar build-essential software-properties-common gpg cmake linux-libc-dev libc6-dev pkg-config
RUN mkdir /psua-build && cd /psua-build && git clone --depth 1 https://github.com/VeroFess/PalWorld-Server-Unoffical-Api.git /psua-build/psua && git clone --depth 1 https://github.com/microsoft/vcpkg.git /psua-build/vcpkg
ENV VCPKG_ROOT /psua-build/vcpkg

WORKDIR /psua-build
RUN chmod a+x /psua-build/vcpkg/bootstrap-vcpkg.sh && /psua-build/vcpkg/bootstrap-vcpkg.sh
RUN add-apt-repository "deb http://apt.llvm.org/bullseye/ llvm-toolchain-bullseye-17 main" && wget -O llvm-snapshot.gpg.key https://apt.llvm.org/llvm-snapshot.gpg.key && apt-key add < llvm-snapshot.gpg.key && apt-get -y update && apt-get -y upgrade && apt-get -y install clang-17 lldb-17 lld-17 libc++-17-dev libc++abi-17-dev
RUN wget -O shget.text https://xmake.io/shget.text && bash shget.text

ENV XMAKE_ROOT y
ENV XMAKE_ROOTDIR /root/.local/bin
ENV XMAKE_PROGRAM_DIR /root/.local/share/xmake
ENV PATH "$XMAKE_ROOTDIR:$PATH"
ENV PATH "$VCPKG_ROOT:$PATH"

WORKDIR /psua-build/psua
RUN git submodule update --init --recursive
RUN vcpkg install folly

RUN xmake f --cc=clang-17 --cxx=clang++-17 --ld=clang-17 -c -y && xmake -y

VOLUME [ "/out" ]

CMD mkdir /tmp/out/ && cd /tmp/out/ && cp /psua-build/psua/build/linux/x86_64/release/libpal-plugin-loader.so /tmp/out/ && tar czvf /out/psua-x86_64-unknown-linux-gnu.tar.gz libpal-plugin-loader.so
