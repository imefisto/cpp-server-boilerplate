# C++ server boilerplate

C++ server boilerplate for server apps serving api and static files. Currently is based on [POCO libraries](http://pocoproject.org).

### Prepare builds

1. Create config.make and put: set(USR_FOLDER "your-path-to-usr-folder"). You can use conditionals to separate linux and win32 dependencies.
2. Run ./build.sh

Tested on GNU/Linux and Win32 (cross-compiling). Check the toolchains at "cmake" folder.

### Build

ninja -C build/\<platform>

### Document root

Static web pages goes on "public" folder. You can use public/errors to define error pages.

### Pending tasks

- [ ] Websockets support
- [ ] Testing
- [ ] Test on OSX

### Personal useful references:

[https://cliutils.gitlab.io/modern-cmake/](https://cliutils.gitlab.io/modern-cmake/)

[https://pabloariasal.github.io/2018/02/19/its-time-to-do-cmake-right/](https://pabloariasal.github.io/2018/02/19/its-time-to-do-cmake-right/)

[https://metricpanda.com/rival-fortress-update-11-cross-compiling-for-three-platforms](https://metricpanda.com/rival-fortress-update-11-cross-compiling-for-three-platforms)

[https://github.com/pocoproject/poco/wiki/CMake-contribution-rules](https://github.com/pocoproject/poco/wiki/CMake-contribution-rules)
