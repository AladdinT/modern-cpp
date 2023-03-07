/*
Cpp
24 Feb 2023
Session 2:
    continue session 1, 
    this session mainly focuses on the differences 
    between C and Cpp

content:
    1-> Referencing

*/

#include <iostream>

/*4. Name Mangling Related*/
void func (int x , int y)
{

}
void func (int x , double y)
{

}






int main (void)
{

    /*1. Referencing*/
    std::cout << "***************\n"<<"1-REFERENCE\n" ;
    int x =10 ;
    int *ptr = &x;  //Pointer
    int &myRef = x; //Reference
    /*The reference has the same address as the variable*/
    std::cout <<"1.1 "<< "myRef address: " << &myRef << "\t| x address: " <<&x <<std::endl;
    /*If u changed the value of myRef , x value will change as well*/
    myRef = 88;
    std::cout <<"1.2 " << "myRef = " << myRef << "\t\t| x = " << x <<"\n";
    /*Notice that the reference has to be initialized*/
    /*
    int &myRef1; //ERROR: 'myRef1' declared as reference but not initialized
    */

    /*Once the reference is initialized you can not change it to reference another variable*/
    int x1 = 12;
    myRef = x1; //this translates to myRef=12 and stores (12) in x
    std::cout <<"1.3 "<< "myRef = " << myRef << "\t\t| x = " << x <<"\n";


    /*2. auto*/
    std::cout << "***************\n"<<"2-AUTO\n" ;
    auto var  = 10;      //decleared as int
    auto var1 = 10.5;    //decleared as double
    auto var2 = 10.4f;   //decleared as float
    auto var3 = "Hello"; //decleared as const char *
    /*Notice that*/
    const int z = 12; //const int
    auto var4   = z ; //int
    //in case you want to create a const 
    const auto var5 = z;

    auto &var6 = z;     //decleared as a reference
    auto *var7 = &z;    //decleared as a pointer
    auto var8 = {1, 2, 3, 4, 5, 6}; //decleared as std::initializer_list<int>

    /*3. const*/
    std::cout << "***************\n"<<"3-CONST\n" ;
    /*
    in C : const is an extrnal linkage
    if a const global variable is declared in file1.c
    file2.c can access it and overwrite it
    
    in C++ : const is an internal linkage
    if a const global variable is declared in file1.cpp
    file2.cpp will not recognize the variable
    */

   /*C vs Cpp*/

   /*switch case*/
   const int a = 10;
   switch (x)
   {
        case a:  //permitted in cpp, Error in c
        break;
   }
   /*Array size by a variable*/
   int array[a] = {}; //permitted in cpp, Error in c

    /*Pointer to const*/
    /*
    const int b = 20;
    int * ptr1 = &b; //Error in cpp , permitted in c
    //error: invalid conversion from 'const int*' to 'int*' [-fpermissive]
    */

    /*4. Name Mangling*/
    //Name mangling is the encoding of function and variable names into unique names so that linkers can separate common names in the language.
    
    /*
    Notice that the two function has the same name "func" 
    yet the compiler maps them as :  (cmd: objdump -t .\a.exe)
    [ 32](sec  1)(fl 0x00)(ty  20)(scl   2) (nx 1) 0x00000410 __Z4funcii
    [ 34](sec  1)(fl 0x00)(ty  20)(scl   2) (nx 0) 0x00000416 __Z4funcid
    */





}