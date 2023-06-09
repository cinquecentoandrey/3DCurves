#include <iostream>
#include "project/Circle/Circle.h"
#include "project/Ellipse/Ellipse.h"
#include "project/Helixe/Helix.h"
#include "project/Output/CurvesMethods.h"

#include <vector>

int main() {
    std::vector<Curve*> curves;
    std::vector<Circle*> circles;

    Circle c(3.0);
    Circle c1(4.0);
    Circle c2(5.0);;

    Ellipse e(2.0, 4.0);
    Ellipse e1(4.0, 1.0);
    Ellipse e2(5.0, 3.0);

    Helix h(4.0, 2.0);
    Helix h1(3.0, 3.0);
    Helix h2(6.0, 5.0);

    curves.push_back(&c);
    curves.push_back(&c1);
    curves.push_back(&c2);

    curves.push_back(&e);
    curves.push_back(&e1);
    curves.push_back(&e2);

    curves.push_back(&h);
    curves.push_back(&h1);
    curves.push_back(&h2);

    CurvesMethods cm;

    std::cout << "PRINT ALL CURVES" << std::endl;
    cm.showCurves(curves);

    std::cout << "FILL A VECTOR CONTAINING CIRCLES" << std::endl;
    cm.fillCirclesVector(curves, circles);
    std::cout << std::endl;

    std::cout << "PRINTING CIRCLES" << std::endl;
    cm.showCircles(circles);
    std::cout << std::endl;

    std::cout << "CHECKING SHARING CONTAINER" << std::endl;
    cm.checkSharingContainer(curves);
    cm.showCircles(circles);
    std::cout << std::endl;

    std::cout << "CONTAINER SORTING" << std::endl;
    cm.sortContainer(circles);
    std::cout << std::endl;

    std::cout << "PRINTING THE TOTAL SUM OF RADII" << std::endl;
    cm.totalSum(circles);
    std::cout << std::endl;

    return 0;
}

