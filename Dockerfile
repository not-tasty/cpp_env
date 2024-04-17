FROM alpine:3

RUN apk add --no-cache cmake make g++ gcc

WORKDIR /project

COPY ["CMakeLists.txt","main.cpp","/project"]

RUN mkdir build && cd build && cmake .. && make

CMD tail -f /dev/null
