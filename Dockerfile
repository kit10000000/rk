FROM ubuntu:16.04

RUN apt update
RUN apt install -yy gcc g++ cmake 

COPY . demo/
WORKDIR demo

RUN cmake -H. -B_build 
RUN cmake --build _build
RUN cmake --build _build --target demo
RUN cmake --build _build --target test

ENV LOG_PATH /home/logs/log.txt

VOLUME /home/logs

WORKDIR _build

CMD ./demo
