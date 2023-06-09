//
// Created by Andrey on 6/5/2023.
//
#include "Ellipse.h"
#include <cmath>

std::vector<double> Ellipse::point3D() {
    return {Ellipse::x, Ellipse::y, Ellipse::z};
}

std::vector<double> Ellipse::derivative() {
    double xDer = - x * std::sin(M_PI/4);
    double yDer = y * std::cos(M_PI/4);
    return {xDer, yDer, 0};
}

