cmake_minimum_required(VERSION 3.14)
project(lab03-uml-relationships-tango)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES Main.cpp Person.cpp Person.h Llanta.h Llanta.cpp
        Motor.h Motor.cpp Carro.h Carro.cpp Puerta.h Puerta.cpp Ventana.h Ventana.cpp Chofer.cpp Chofer.h)

add_executable(lab03-uml-relationships-tango ${SOURCE_FILES})