Huginn
======
Huginn will be a GUI for source version control system.

Build
-----
Huginn build is based on `cmake` system. Here's how you can prepare the build:

    $ mkdir build
    $ cd build
    $ cmake ..

If you haven't your environment set properly, you will probably need to set the
`CMAKE_PREFIX_PATH`. See files `tools/Cmake-Windows.ps1.example` and
`tools/Copy-Libs.ps1.example` for build instructions on Windows because it
always causes a lot of troubles.

After that compile the program according to the `cmake` generator you have used.
