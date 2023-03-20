#include <iostream>
#include <cmath>
#include "complex.hpp"

/*
terminal: 
g++ s4_tasks.cpp complex.cpp && ./a.out
cmd;
g++ s4_tasks.cpp complex.cpp ; ./a.exe
*/


int main (void)
{
   
    std::cout << "****test: complex();****\n";
    complex z;
    std::cout << "real: " << z.real <<"\nimg: "<< z.img <<'\n';
    std::cout << "Mag: " << z.magnitude <<"\nangle: "<< z.angle << '\n';

    std::cout << "****test: complex(real,img);****\n";
    complex z1 (4,-3);
    std::cout << "real: " << z1.real <<"\nimg: "<< z1.img <<'\n';
    std::cout << "Mag: " << z1.magnitude <<"\nangle: "<< z1.angle << '\n';


    std::cout << "****test: fromPolar (_magnitude,_angle);****\n";
    std::cout << "****test: operator= (complex operand);****\n";
    complex z2 = complex::fromPolar(5, -0.643501);
    std::cout << "real: " << z2.real <<"\nimg: "<< z2.img <<'\n';
    std::cout << "Mag: " << z2.magnitude <<"\nangle: "<< z2.angle << '\n';

    std::cout << "****test: operator+ (complex operand);****\n";
    std::cout << "real: " << (z1+z2).real <<"\nimg: "<< (z1+z2).img <<'\n';
    std::cout << "Mag: " << (z1+z2).magnitude <<"\nangle: "<< (z1+z2).angle << '\n';

    std::cout << "****test: operator* (double constant);****\n";
    std::cout << "real: " << (z1*2).real <<"\nimg: "<< (z1*2).img <<'\n';
    std::cout << "Mag: " << (z1*2).magnitude <<"\nangle: "<< (z1*2).angle << '\n';

    std::cout << "****test: operator* (complex operand);****\n";
    std::cout << "real: " << (z1*z2).real <<"\nimg: "<< (z1*z2).img <<'\n';
    std::cout << "Mag: " << (z1*z2).magnitude <<"\nangle: "<< (z1*z2).angle << '\n';

    std::cout << "****test: operator/ (complex operand);****\n";
    std::cout << "real: " << (z1/z2).real <<"\nimg: "<< (z1/z2).img <<'\n';
    std::cout << "Mag: " << (z1/z2).magnitude <<"\nangle: "<< (z1/z2).angle <<'\n';
    //for some reason the angle subtraction is (0.000000108) and not 0

    return 0;
}