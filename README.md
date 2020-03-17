# A C++ docker base project
This docker image will serve as your base c++ project structure.
It uses cmake with the conan package manager, all your compilation and test will be run inside a docker image base on GCC7.3.0  

## Registry

https://bintray.com/conan/conan-center

## Included Libraries

- boost: https://www.boost.org/
- poco: https://pocoproject.org
- crow: https://github.com/ipkn/crow
- args: https://github.com/jarro2783/cxxopts
- json: https://github.com/nlohmann/json
- fmt: https://github.com/fmtlib/fmt
- catch2: https://github.com/catchorg/Catch2
- sqlite3: https://www.sqlite.org
- cxxopts: https://github.com/jarro2783/cxxopts
- spdlog: https://github.com/gabime/spdlog


## How to run
Run using docker or docker-compose, also refer to `entrypoint.sh` for available script.
```bash
docker-compose up 
```

```bash
docker build -t cppimage .
docker run -v "$PWD":"/usr/project" cppimage build
conan install ..  -s build_type=Release --build
RUN cmake .. -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release
RUN cmake --build .
``` 


