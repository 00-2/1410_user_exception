//
//


#include <iostream>
#include "Point_In_Cube.h"
#include "InvalidPoint.h"

Point_In_Cube::Point_In_Cube(float X,float Y,float Z) : x(X), y(Y),z(Z) {
    if (!(X >= 0 && X<=1 && Y>=0 && Y<=1 && Z>=0 && Z<=1)){
        throw InvalidPoint("Bad point");
    }
}

void Point_In_Cube::print() {
    std::cout << "x:" <<  this->x << "\ny:" << this->y << "\nz:" << this->z << std::endl;
}