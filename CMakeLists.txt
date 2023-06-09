cmake_minimum_required(VERSION 3.25)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp project/Curve.h project/Curve.cpp project/Circle/Circle.h project/Circle/Circle.cpp project/Ellipse/Ellipse.h project/Ellipse/Ellipse.cpp project/Helixe/Helix.h project/Helixe/Helix.cpp project/Output/CurvesMethods.h project/Output/CurvesMethods.cpp)
