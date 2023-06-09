//
// Created by Andrey on 6/5/2023.
//
#include "Circle.h"
#include <cmath>

std::vector<double> Circle::point3D() {
    return {Circle::r, Circle::r, Circle::z};
}

double Circle::getR() const {
    return r;
}

void Circle::setR(double r) {
    Circle::r = r;
}

std::vector<double> Circle::derivative() {
    double xDer = std::sin(M_PI/4);
    double yDer = std::cos(M_PI/4);
    return {xDer, yDer, 0};
}



