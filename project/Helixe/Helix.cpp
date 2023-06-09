//
// Created by Andrey on 6/5/2023.
//
#include "Helix.h"

std::vector<double> Helix::point3D() {
    return {Helix::r, Helix::step};
}

std::vector<double> Helix::derivative() {
    double xDer = - r * std::sin(M_PI/4);
    double yDer = r * std::cos(M_PI/4);
    return {xDer, yDer, step};
}

