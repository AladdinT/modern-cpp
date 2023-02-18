/*
Cpp
17 Feb 2023
Session 1:
    this session mainly focuses on the differences 
    between C and Cpp

content:
    1-> array concatenation
    2-> Data Types
    3-> C enum
    4-> enum class
    5-> Struct in cpp
    6-> Ranged for loop
    7-> Functions in cpp
        .Default values                 .function overload
    8-> Initializations
        .Narrowing conversion           .Vexing Parse
*/

#include <iostream>
#include <vector>

using namespace std;


/*7 Functions in cpp*/
//u may set default values for function's arguments
void myfunc (int start = 0 , int end = 10);
void ov_ld_func(int, double);
void ov_ld_func(int, float);





int main (void)
{
    /* C vs CPP */

    /*ِ1 array concatenation*/
    std::cout << "String Concatination :" << endl;    
    std::string str1 = "ABC";
    std::string str2 = " DEF";
    std::cout << str1 + str2 << endl;

    /*2 Data Types*/
    cout << endl << "Boolean data Type " << endl;
    //takes 1 byte size
    //stores either true or false
    bool mybool = true;
    mybool = false;

    mybool = 3; //this is true -> 1
    cout << "mybool = " << mybool << endl;
    
    /*3 C enum*/
    cout << endl << "C enum :" << endl;
    
    enum traffic
    {
        RED, YELLOW, GREEN
    };
    traffic traffic_object;
    cout << "un initialized object, traffic_object = " << traffic_object << endl;
    cout << "Printing RED element is accessible : "<< RED << endl;
    cout << "size of element : " << sizeof(RED) << " bytes" << endl ;
    
    int x_int = RED;
    cout << "int x = RED work and stores x : " << x_int << endl; 
    //traffic obj = 1 ;  //ERROR: invalid conversion from ‘int’ to ‘main()::traffic’ [-fpermissive]
    //to fix it u need to cast it"

    /*4 Enum Class*/
    cout << endl << "Enum Class : " << endl;
    // u can specify elements data type
    enum class colors : unsigned char 
    {
        RED, YELLOW, GREEN
    };
    colors colors_object;
    //Elements are accessible by their class 
    //which allows multiple definitions of an elemnt
    //notice that there is traffic::RED as well as colors::RED 
    colors_object = colors::RED;
    cout << "element size " << sizeof(colors::RED) << " byte" << endl; 


    /*5 Struct in cpp*/
    /*
    1) Struc can store functions
    in C to store a function we had to store a pointer to function

    2) We do not need to use typedef , the identifier itself is a type
    */
    struct Data
    {
        int a;
        float b;
        void func(void)
        {

        }
    };
    //create an instance (object)
    Data Data_object;
    //access elements
    Data_object.a;
    Data_object.b;
    Data_object.func();


    /*6 Ranged for loop*/
    cout << endl << "Ranged for loop : " << endl;
    /*
    pro: Simple to write , easier 
    con: two more instructions to be executed , No indexing 
        tempBegin = v.begin();
        tempEnd = v.end();
    */
    std::vector<int> v{1,2,3,4,5,9,10}; //a vector is a dynamic array (stored in heap)
    
    for(int i : v) //vectors , arrays , strings
    {
        cout << "i = " << i << endl; 
    }

    /*7 Functions in cpp*/
    //u may set default values for function's arguments
    cout << endl << "Functions : "<< endl ;
    myfunc();
    
    //Function overload 
    //functions with the same name but different arguments
    cout << "Overloadded Functions : "<< endl;
    ov_ld_func(1,1.5);
    ov_ld_func(1,1.5f);
    

    /*8 Initializations*/
    cout << endl << "Initailizations :" << endl;
    int x1 = 0 ; //Copy 
    int y1(0);  //Direct
    int z1{0};  //Value (uniform)
    
    //Narrowing conversion
    float dec = 3.5 ;
    int var{dec}; //Warning: narrowing conversion of ‘dec’ from ‘float’ to ‘int’ 

    //Vexing Parse
    int x2; //Garbage value
    cout << "Vexing Parse :" << endl;
    cout << "int x; x = "<< x2 <<" Garbage value"<<endl;
    
    int y2(); //warning: empty parentheses were disambiguated as a function declaration [-Wvexing-parse]
    //cout << y2(); //ERROR : undefined reference to `y2()'

    int z2{}; // initialized with zero
    cout << "int z2{};\nz ="<< z2 <<" 0 assinged" << endl; 

    return 0;
}


void myfunc (int start, int end) //start , end was set to a default value in the prototype
{
    for( int i=start ; i<end ; i++)
        cout << "default i = " << i << endl;
}

void ov_ld_func(int, double)
{
    cout << "Overloadded function - DOUBLE" << endl;
}
void ov_ld_func(int, float)
{
    cout << "Overloadded function - FLOAT" << endl;

}
