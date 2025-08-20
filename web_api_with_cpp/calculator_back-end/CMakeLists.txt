cmake_minimum_required(VERSION 3.3)

project(CalculatorAPI)

include_directories(/opt/local/include/restbed)
include_directories(/opt/local/include/)

include_directories(/opt/local/include/nlohmann/)

add_executable(CalculatorAPI
    main.cpp
    CalcResourceFactory.cpp
    CalcService.cpp
    CalcServiceSettingsFactory.cpp)

target_link_libraries(CalculatorAPI restbed)
target_link_directories(CalculatorAPI PUBLIC /opt/local/lib/)

target_include_directories(CalculatorAPI PUBLIC ${CMAKE_SOURCE_DIR}/include)

set_property(TARGET CalculatorAPI PROPERTY CXX_STANDARD 17)