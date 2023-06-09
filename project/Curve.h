//
// Created by Andrey on 6/5/2023.
//
#include "iostream"
#include "vector"
#ifndef UNTITLED_CURVE_H
#define UNTITLED_CURVE_H

class Curve {
private:
    double r, x, y, z;
public:
    virtual std::vector<double> point3D();
    virtual std::vector<double> derivative();
};

#endif //UNTITLED_CURVE_H
