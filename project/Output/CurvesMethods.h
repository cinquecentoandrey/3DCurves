//
// Created by Andrey on 6/9/2023.
//

#ifndef UNTITLED_CURVESMETHODS_H
#define UNTITLED_CURVESMETHODS_H

#include <vector>
#include "../Curve.h"
#include "../Circle/Circle.h"

class CurvesMethods {
public:
    void showCurves(std::vector<Curve*> &curve);
    void showCircles(std::vector<Circle*> &circles);
    void fillCirclesVector(std::vector<Curve*> &curves, std::vector<Circle*> &circles);
    void checkSharingContainer(std::vector<Curve*> &curves);
    void sortContainer(std::vector<Circle*> &circles);
    void totalSum(std::vector<Circle*> &circles);
};

#endif //UNTITLED_CURVESMETHODS_H
