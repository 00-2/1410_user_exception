//
//

#ifndef INC_1486_SQUARE_INVALIDPOINT_H
#define INC_1486_SQUARE_INVALIDPOINT_H


#include <stdexcept>
#include <iostream>
#include "Point_In_Cube.h"

class InvalidPoint
        : std::out_of_range, Point_In_Cube {
    public:
    InvalidPoint(float x, float y, float z, const char *what)
        : Point_In_Cube(0, 0, 0), std::out_of_range(what)
        {
            std::cout << "Точка(x=" << x << ", y=" << y << ", z=" << z << ")не лежит внутри единичного куба" << std::endl
                << "WHAT:" << what << std::endl;
        }
};


#endif //INC_1486_SQUARE_INVALIDPOINT_H
