FROM ubuntu:20.04

WORKDIR /app

RUN apt-get update && \
    apt-get -y upgrade && \
    apt-get --no-install-recommends -y install tzdata && \
    echo 'Europe/London' > /etc/timezone && \
    dpkg-reconfigure -f noninteractive tzdata && \
    apt-get --no-install-recommends -y install git  \
    lsb-release build-essential clang binutils cmake

COPY third_party third_party
COPY CMakeLists.txt ./
COPY main.cpp ./

RUN cmake -S . -B build
RUN cmake --build build --config RelWithDebInfo --target Game