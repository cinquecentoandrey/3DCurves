//
// Created by Andrey on 6/5/2023.
//

#include "Curve.h"


std::vector<double> Curve::point3D() {
    return {Curve::x, Curve::y, Curve::z};
}

std::vector<double> Curve::derivative() {
    return {Curve::x, Curve::y, Curve::z};
}
