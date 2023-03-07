#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

struct student
{
    int id;
    int fees;
    int units;
    double gpa;

    bool operator==( const student& other ) 
    {
        return id == other.id &&
               fees    == other.fees    &&
               units  == other.units  &&
               gpa    == other.gpa;
    }

};

int main (void)
{
    /*task1: print binary representation of a number*/
    std::cout << "**********\nt1: decimal to binary\n";
    int deci; 
    std::cout << "Enter a decimal value : ";
    std::cin >> deci;
    
    std::bitset<8> mybin(deci);
    std::cout << deci << " :binary: " << mybin << std::endl;
    

    /*task2: search for a number in an array*/
    std::cout << "**********\nt2: search an array\n";
    int search_for;
    int myArr [] = {1,2,3,4,5,6,7,8,9,10};
    std::cout << "myArr = {1,2,3,4,5,6,7,8,9,10}\nsearch for: ";
    std::cin >> search_for;
    int * location = std::find(std::begin(myArr), std::end(myArr), search_for);
    if ( location != std::end(myArr) )
    {
        std::cout << "Element " << search_for << " was found at index [" << location - myArr << "]\n";
    }
    else
    {
        std::cout << "Element " << search_for << " was not found\n";
    }
    
    
    /*task3: string to number*/
    std::cout << "**********\nt3: string to number\n";
    std::cout << "Enter a number : ";
    string input;
    std::cin >> input;

    std::cout << "your string as an int :" << std::stoi(input) << std::endl;
    std::cout << "your string as a float :" << std::stof(input) << std::endl;
    std::cout << "your string as a double :" << std::stod(input) << std::endl;

    /*task4: struct elements comparison*/
    std::cout << "**********\nt4: compare struct instances\n";
    student ahmad = {32018043 , 3000 , 173, 3.38};
    student ali = {32018043 , 3000 , 173, 3.38};
    student mohammed = {32020122 , 3000 , 120, 2.97};

    //operator overloading
    std::cout << std::boolalpha << "ahmad equals mohammed ? -" <<(ahmad==mohammed) <<'\n' ;
    std::cout << "ahmad equals ali ? -" <<(ahmad==ali) <<'\n' ;
    
    /*task5: char isdigit*/
    std::cout << "**********\nt5: is char a digit\n";
    char inChar;
    std::cout << "Enter a char : ";
    std::cin >> inChar;
    std::cout << "Is " << inChar << " a digit ? -" << static_cast<bool>(std::isdigit(inChar) ) << std::endl;

    /*task5: all array elements are even ?*/
    std::cout << "**********\nt5: are the elements even\n";
           
    

    

    return 0;
}