# Plain CMake project template

## Overview

*Template content*

This is template repository for plain C/C++ development with CMake.
It contains:

- CMake support
- Unit testing (framework: [GoogleTest](https://github.com/google/googletest))

## Usage

### Build library

```sh
mkdir build && cd build
cmake ..
make # or your preferred build tool (e.g. ninja)...
```

Then the library `libplain_cmake_library.a` will be emitted to `build/src`.

### Unit testing

```sh
mkdir build && cd build
cmake .. -Dplain_cmake_template_BUILD_TESTS=ON
make
```

When unit testing is enabled, you'll see the following logs:

```
plain_cmake_template: unit testing enabled
```

To run test:

```sh
make test
```

### Build CLI

```sh
mkdir build && cd build
cmake .. -Dplain_cmake_template_BUILD_CLI=ON
make
```

Then the CLI application `plain_cmake_cli` will be emitted to `build/cli`.
This is factorial calculator :)

```
./cli/plain_cmake_cli 10
factorial(10) = 3628800
```

## License

This repository is published under [MIT License](LICENSE).
