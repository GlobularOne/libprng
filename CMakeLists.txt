cmake_minimum_required(VERSION 3.9)
project(
  libprng
  VERSION "1.0.0"
  DESCRIPTION "Lightweight random number generator"
  HOMEPAGE_URL "https://github.com/GlobularOne/libprng"
  LANGUAGES C)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

###############################################################################
# Compiler/Linker configuration
###############################################################################

include(cmake/CompilerStandards.cmake)

set_c_standard()
set_cxx_standard()

###############################################################################
# Libraries
###############################################################################

include_directories(include)

include(cmake/Library.cmake)

generate_library(prng)

###############################################################################
# Tests
###############################################################################

include(cmake/Tests.cmake)

generate_build_tests()

generate_test(generate.c prng_static)

###############################################################################
# Documentation
###############################################################################

# TODO

###############################################################################
# Installation
###############################################################################

include(cmake/Installation.cmake)

install_library(prng)

###############################################################################
# Packaging
###############################################################################

include(CPack)
