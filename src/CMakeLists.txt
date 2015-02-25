rock_library(artoolkit
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_executable(artoolkit_bin Main.cpp
    DEPS artoolkit)

