cmake_minimum_required(VERSION 3.30)
project(Object_oriented_programming_c__)

set(CMAKE_CXX_STANDARD 23)

add_executable(Object_oriented_programming_c__ main.cpp
        data/Controller.cpp
        data/Controller.h
        data/Container.h
        data/Containers.h
        data/Common.h
        data/records/Bills.cpp
        data/records/Bills.h
        data/records/AccountInfo.cpp
        data/records/AccountInfo.h
        data/records/AccountActivity.cpp
        data/records/AccountActivity.h
        data/records/Loans.cpp
        data/records/Loans.h
        data/records/CustomerInfo.cpp
        data/records/CustomerInfo.h
        data/records/CommonDataClass.cpp
        data/records/CommonDataClass.h
        data/records/CurrencyConversions.cpp
        data/records/CurrencyConversions.h
        data/records/Branch.cpp
        data/records/Branch.h)
