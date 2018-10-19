# A C++ docker base project
This docker image will serve as your base c++ project structure.
It uses cmake with the conan package manager, all your compilation and test will be run inside a docker image base on GCC7.3.0  

## Included Packages
Below is the list of the current conan package included in this start project, you can and or throw away some depending on your need.

- Poco (1.8.0.1)
- boost (1.68.0)
- fmt (5.2.0)
- sqlite3 (3.21.0)
- catch2 (2.4.0)
- jsonformoderncpp (3.3.0)
- FakeIt (2.0.5)
- Args (5.0.1.4) 

## How to run
Run using docker or docker-compose, also refer to `entrypoint.sh` for available script.
```bash
docker-compose up 
```



## Ref

https://bintray.com/conan/conan-center
