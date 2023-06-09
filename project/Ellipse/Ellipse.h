//
// Created by Andrey on 6/5/2023.
//

#ifndef UNTITLED_ELLIPSE_H
#define UNTITLED_ELLIPSE_H

#include <vector>
#include "../Curve.h"

class Ellipse : public Curve {
private:
    double x, y, z;
public:
    Ellipse(double x, double y) :  x(x), y(y), z(0.0) {}

    std::vector<double> point3D() override;

    std::vector<double> derivative() override;
};

#endif //UNTITLED_ELLIPSE_H
