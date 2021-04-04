# nspace

BULD QT6
========

Prerequisities
1. Install Git: sudo apt-get install git
2. Install CMake: sudo apt-get install cmake (this will install 3.16.3)
3. Install Ninja: sudo apt-get install ninja-build (this will install 1.10.0)
4. Install Perl: sudo apt-get install perl (this will install 5.30.0)
5. Install Python: sudo apt-get install python (this will install 2.7.17)

Repository Preparation
1. Clone submodules source code: perl init-repository

Configuration
1. Make Build directory: mkdir qt6-build && cd qt6-build
2. Configure: ../qt5/configure -prefix /path/to/install

Build
1. cmake --build . --parallel 4
2. cmake --install .

