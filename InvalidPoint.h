//
// Created by c0sta on 22.04.2022.
//

#ifndef INC_1486_SQUARE_INVALIDPOINT_H
#define INC_1486_SQUARE_INVALIDPOINT_H


#include <stdexcept>
class InvalidPoint
        : std::out_of_range {
    public:
    InvalidPoint(const char * what):std::out_of_range(what){}
};


#endif //INC_1486_SQUARE_INVALIDPOINT_H
