# Building & Running the project

1. `git submodule update --init --recursive`
2. `cmake -S . -B build`
3. `cmake --build build --config RelWithDebInfo --target Game`
4. `./build/Game`

## With Docker
1. `git submodule update --init --recursive`
2. `docker build -t game:0.0.1 .`
3. `docker run --rm game:0.0.1 /app/build/Game`