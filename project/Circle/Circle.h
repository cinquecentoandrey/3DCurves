//
// Created by Andrey on 6/5/2023.
//

#ifndef UNTITLED_CIRCLE_H
#define UNTITLED_CIRCLE_H

#include "../Curve.h"

class Circle : public Curve {
private:
    double r, x, y, z;
public:
    Circle(double r) : r(r), x(r), y(r), z(0.0) {}

    std::vector<double> point3D() override;

    std::vector<double> derivative() override;

    double getR() const;

    void setR(double r);
};

#endif //UNTITLED_CIRCLE_H
