/*
Data Type                       Size (in bytes)                  Range
===========================================================================================
short int                             2                           -32,768 to 32,767
unsigned short int                    2                            0 to 65,535
unsigned int                          4                            0 to 4,294,967,295
int                                   4                            -2,147,483,648 to 2,147,483,647
long int                              8                            -2,147,483,648 to 2,147,483,647
unsigned long int                     8                            0 to 4,294,967,295
long long int                         8                            -(2^63) to (2^63)-1
unsigned long long int                8                             0 to 18,446,744,073,709,551,615
signed char                           1                             -128 to 127
unsigned char                         1                              0 to 255
float                                 4
double                                8
long double                           12
wchar_t                               2
*/


// Signed vs Unsigned

// unsigned integer => values greater or equals to Zero  eg: use_case : Emp_id or for foreign key=>laravel

// Giving the negative number to unisgned int doesn't give compilation error, but gives something unexpected
// because in the computer articture when we save a negative number we save it in
//                        2's complement instead of it's true form




/*  Functions and Scope*/

#include <iostream>
using namespace std;

void print(){
    cout << "Hello there" << endl;
}

int main(){
    print();
    return 0;
}

// this will run as the compiler finds the print function first  but when the print function is 
// written after the main method it falls out of scope so to make the function in scope 
// we can delear the function first

#include <iostream>
using namespace std;

void print();  // function prototype

int main(){
    print();
    return 0;  // function call
}

// function defination
void print(){
    cout << "Welcome C#" << endl;
}



/* Using Libraries*/

#include <iostream>
#include <cmath>

int main(){
    double a;
    std::cout << "Enter  a number: " ;
    std::cin >> a;
    cout << "Square root " << a << "=" << sqrt(a) << endl;
    return 0;
}