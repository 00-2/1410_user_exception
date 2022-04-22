#include <iostream>
#include "InvalidPoint.h"
#include "Point_In_Cube.h"

int main() {
    std::cout << "POINT 1 1 0.3" << std::endl;
    auto eq_ok = Point_In_Cube(1,1,0.3);
    eq_ok.print();
    std::cout << "-------------------------------" << std::endl;
    std::cout << "POINT 1 2 0 " << std::endl;
    try {
        auto eq_nok = Point_In_Cube(1, 2, 3);
        eq_nok.print();
    }
    catch(InvalidPoint& ip) {
        std::cout << "We catch exception Invalid Point Exception" << std::endl;
    }
    return 0;
}
