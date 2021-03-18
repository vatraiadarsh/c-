//  g++ main.cpp –o main
//  ./main

// about main
// - must have main function
// - return an integer, specially int

// << 

#include <iostream>
using namespace std;

int main(){
    cout << "Welcome !!" << endl ; 
    return 0;
}

//  we have a stand alone main(), a special case of :
//  return_type function(arguments){}

// ?? Return types Argument ??

//  eg:: return_type function(argument){}
//  int main() vs void swap(int,int);

// for void function it doesn't return anything

// Return type tell us what the output looks like.
// Argument tells what the input looks like.


// – Input: >> Use standard in: object cin of type istream.
// – Output: << Use standard out: object cout of type ostream.

// long form if don't want to use import
// std::cout << "hello there!" << std:: endl;




// MORE MAIN

int main(int argc, char const *argv[]){
    /* code */
    return 0;
}

// the main can have argument

// argc-- number of command-line arguments, including the name of executable itself
// *argv[] -- array of c style strings, so a sequence of characters, terminated with the special null character



// eg::


#include <iostream>
using namespace std;
int main(int argc, char* argv[]){
    for ( int x=0; x < argc; x++ ){
    cout << "arg " << x + 1 << " " << argv[x] << endl;
    }
    return 0;
}

