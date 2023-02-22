# A cpp project template

This is a cpp template to start a new cpp project with the following functionalities:

+ Google Test support: [gtest](https://github.com/google/googletest)
+ Log support: [spdlog](https://github.com/gabime/spdlog.git)
+ CLI support: [CLI11](https://github.com/CLIUtils/CLI11)
+ Docs support: [doxygen](https://www.doxygen.org/index.html).
+ `.clang-format` support: automatically format.
+ GitHub Action support:
  + Automatically build and test the unit tests using `ctest`.
  + Automatically check the syntax format by `.clang-format`.
  + Automatically build the docs into the `docs` branch and deploy it into the gh-pages

You could look at the `example` folder for the usage of unit tests of google test
which will make your life easier.

Hope this template can help you better enjoy coding with cpp.
