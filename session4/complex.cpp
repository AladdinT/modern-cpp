#include <cmath>
#include "complex.hpp"
#include <iostream>

complex::complex() : real(0), img(0), magnitude(0), angle(0)
{
    
}

complex::complex (double _real, double _img) : real(_real) , img(_img)
{
    magnitude = hypot(_real, _img);   //hypot(): returns the square root of sum of square of arguments passed.
    if(_real == 0)
        angle = 0;
        return;
    angle = atan( (_img/_real) );         //atan(): Returns Inverse tangent a Number
}

complex complex::fromPolar (double _magnitude, double _angle)
{
    return complex( _magnitude * cos(_angle)
                    , _magnitude * sin(_angle));
}


complex complex::operator+ (complex operand)
{
    complex ret( (real+operand.real) ,(img + operand.img) );
    return ret;
}


complex complex::operator= (complex operand)
{
    return complex(operand.real , operand.img);
}

complex complex::operator* (double constant)
{
    return complex(this->real * constant , this->img * constant);
}

complex complex::operator* (complex operand)
{
    return fromPolar( (this->magnitude*operand.magnitude) 
                , (this->angle+operand.angle) );
}

complex complex::operator/ (complex operand)
{
    return fromPolar( (this->magnitude/operand.magnitude) 
                , (this->angle)-operand.angle);
}
