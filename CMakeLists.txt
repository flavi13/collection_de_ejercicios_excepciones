cmake_minimum_required(VERSION 3.10)
project(collection_de_ejercicios_excepciones)

set(CMAKE_CXX_STANDARD 14)

add_executable(collection_de_ejercicios_excepciones
        ejercicio1/bandera.cpp
        main.cpp
        main.h
        ejercicio3/funciones.cpp
        ejercicio4/mi_excepcion.cpp
        ejercicio5/excepcion.cpp
        ejercicio6/excepcion_no_capturada.cpp
        ejercicio7/archivo.cpp)

add_executable(main2
        ejercicio2/main2.cpp
        ejercicio2/error_valor.cpp)

add_executable(main3
        ejercicio2/main3.cpp
        ejercicio2/error_excepcion.cpp)
