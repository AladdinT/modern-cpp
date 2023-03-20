#include <iostream>

class myClass
{
private:
    int i;
public:
    int x;
    myClass(int z) : i(5) , x(7)
    {
        z=5;
        std::cout << "z="<<z<<'\n';
    }
    friend void myFriend();

    void operator() (int zo) //functor
    {
        zo = 10;
        std::cout << "zo="<<zo<<'\n';

    }
};

void myFriend ()
{
    myClass obj(2);
    std::cout << obj.i << '\n';
    obj(2);
     
}

int main (void)
{

    myFriend();
    return 0;
}