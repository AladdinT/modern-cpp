class complex
{
private:

public:
    double real;
    double img;

    double magnitude;
    double angle;

    complex();
    complex (double real, double img);

    static complex fromPolar (double _magnitude, double _angle);

    complex operator+ (complex operand);

    complex operator= (complex operand);
    
    complex operator* (double constant);
    
    complex operator* (complex operand);

    complex operator/ (complex operand);

};