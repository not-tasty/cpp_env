# cpp_env
我用的純c++環境(含cmake make g++ gcc)

## 開始

### 處理容器環境
```shell
# 編譯Dockerfile
docker build -t cpp_env:1.0
# 然後去run他的container
docker run -d --name my_cpp_env cpp_env:1.0
# 進入container
sudo docker exec -it my_cpp_env /bin/bash
```

### 開始準備編譯

```shell
cd build
# cmake產生make file
cmake ..
# make執行gcc g++
make
```
之所以要在build裡面 是因為cmake會產生 中間元件(cmake cache+makeFile...)

註：我把debug 或 release的選項寫在CMakeLists.txt裡面，預設是debug

### 執行程式

```shell
# 假設target file叫做 hello-world
cd build
./hello-world
```

就好了