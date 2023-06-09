//
// Created by Andrey on 6/5/2023.
//

#ifndef UNTITLED_HELIX_H
#define UNTITLED_HELIX_H

#include "../Curve.h"
#include <cmath>

class Helix : public Curve {
private:
    double r, step;
public:
    Helix(double r, double step) : r(r), step(step) {}

    std::vector<double> point3D() override;

    std::vector<double> derivative() override;
};

#endif //UNTITLED_HELIX_H
