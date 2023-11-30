# GlobularOne

libprng is a lightweight portable random number generator library written in c. The underlying algorithm is PCG-XSH-RR. A permuted congruential generator (PCG) is a full period generator. Down in the core, it is a LCG with output permutation added to it.

## Features

 - Lightweight. It can be embedded easily into applications.

 - Excellent performance in tests

 - Fast execution

 - Small state size

## Installation

To compile the project, a compiler and cmake is required. First clone the repository:

```sh
git clone https://github.com/GlobularOne/libprng.git
```

Configure the project:

```sh
cmake -B builddir .
```

Use make to build the project:

```sh
make -C builddir
```

You can build and run the tests using:

```sh
make -C builddir build_tests tests
```

## Contacting the author

You can always send an email to me. I am available as `GlobularOne@proton.me`.

## License

Apache Software License 2.0. See the [LICENSE](https://github.com/libprng/blob/main/LICENSE) file for more information.
