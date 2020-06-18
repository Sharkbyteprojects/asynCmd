# How to Compile the App:
## With g++
Commands:
- Install: Ubuntu/Debian based: `sudo apt-get update&&sudo apt-get install g++`; Alpine Linux: `apk add g++`
- Compile: `g++ --static -std=c++11 asyncMD.cpp -o asynCmd -pthread`

## With Clang++
Commands:
- Install: Ubuntu/Debian based: `sudo apt-get update&&sudo apt-get install clang g++`; Alpine Linux: `apk add clang g++`
- Compile: `clang++ -static -Wall -std=c++11 asyncMD.cpp -o asynCmd -pthread -lstdc++`