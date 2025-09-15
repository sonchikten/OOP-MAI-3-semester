FROM ubuntu:24.04

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt-get install -y \
    software-properties-common \
    wget \
    build-essential \
    gcc-14 \
    g++-14 \
    cmake \
    python3 \
    python3-pip \
    git \
    libgtest-dev \
    python3-venv \
    python3-numpy && \
    rm -rf /var/lib/apt/lists/*

RUN update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-14 100 && \
    update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-14 100

RUN pip3 install numpy --break-system-packages

WORKDIR /workspace

COPY . .

CMD ["/bin/bash"]