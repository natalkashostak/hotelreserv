cmake_minimum_required(VERSION 3.10)
project(hotelreserv)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(hotelreserv
        main.cpp
        HotelRoom.cpp
        SuiteRoom.cpp
        HotelBooking.cpp
        HotelManager.cpp
)
