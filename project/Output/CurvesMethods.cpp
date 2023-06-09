//
// Created by Andrey on 6/9/2023.
//
#include <algorithm>
#include "CurvesMethods.h"
#include "../Ellipse/Ellipse.h"

void CurvesMethods::showCurves(std::vector<Curve*> &curves) {
    for (auto curve: curves) {
        std::cout << "Curve points: {";
        for (int i = 0; i < curve->point3D().size(); ++i) {
                std::cout << curve->point3D()[i] << ',';
        }
        std::cout <<"}" << std::endl;

        std::cout << "Curve derivatives: {";
        for (int i = 0; i < curve->point3D().size(); ++i) {
            std::cout << curve->derivative()[i] << ",";
        }
        std::cout <<"}" << std::endl << std::endl;
    }
}

void CurvesMethods::showCircles(std::vector<Circle*> &circles) {
    for (auto circle: circles) {
        std::cout << "Circle points: {";
        for (int i = 0; i < circle->point3D().size(); ++i) {
            std::cout << circle->point3D()[i] << ',';
        }
        std::cout <<"}";
        std::cout << std::endl;
    }
}

void CurvesMethods::fillCirclesVector(std::vector<Curve*> &curves, std::vector<Circle*> &circles) {
    for (auto curve: curves) {
        // check the object to see if it is a circle
        if (typeid(*curve) == typeid(Circle)) {
            circles.push_back(dynamic_cast<Circle*>(curve));
        }
    }
}

void CurvesMethods::checkSharingContainer(std::vector<Curve*> &curves) {
    auto* circleToChange = dynamic_cast<Circle*>(curves[0]);
    std::cout << "Radius before change: " <<circleToChange->getR() << std::endl;
    circleToChange->setR(1000.0);
}

// function for sorting
bool circleCompare(Circle* c1, Circle* c2) {return c1->getR() < c2->getR();}

void CurvesMethods::sortContainer(std::vector<Circle*> &circles) {
    std::cout << "Circles before sort: " << std::endl;
    showCircles(circles);
    std::sort( circles.begin(), circles.end(), circleCompare );
    std::cout << "Circles after sort: " << std::endl;
    showCircles(circles);
}

void CurvesMethods::totalSum(std::vector<Circle*> &circles) {
    double totalSum = 0.0;

    for (auto circle: circles) {
        for (int i = 0; i < circle->point3D().size(); ++i) {
            totalSum += circle->getR();
        }
    }

    std::cout << "Total sum: " << totalSum << std::endl;
}









