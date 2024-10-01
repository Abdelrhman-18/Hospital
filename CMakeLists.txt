cmake_minimum_required(VERSION 3.29)
project(oopproject)

set(CMAKE_CXX_STANDARD 20)

add_executable(oopproject main.cpp
        Preson.h
        Patient.h
        Doctor.h
        Appointment.h
        Hospital.h)
