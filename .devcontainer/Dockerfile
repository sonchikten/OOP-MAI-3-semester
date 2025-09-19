FROM ubuntu:24.04

# Устанавливаем необходимые зависимости
RUN apt-get update && apt-get install -y \
    cmake python3 python3-dev python3-pip wrk clangd\
    && rm -rf /var/lib/apt/lists/*

RUN update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-14 100 && \
    update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-14 100

RUN pip3 install numpy --break-system-packages

WORKDIR /workspace

COPY . .

CMD ["/bin/bash"]