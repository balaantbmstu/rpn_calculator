FROM ubuntu:22.04 AS builder
RUN apt-get update && \
apt-get install -y git cmake g++ && \
rm -rf /var/lib/apt/lists/*
WORKDIR /app
COPY . .
RUN cmake -B build -DCMAKE_BUILD_TYPE=Release && \
cmake --build build --target rpn_calculator --parallel 2