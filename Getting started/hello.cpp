
// Helps us load certain standard input/output stream objects
// Inclusion of io stream directly invokes other headres such as <ios>, <streambuf>, <istream>, <ostream> and/or <iosfwd>

#include <iostream>

// Unpacks stream objects present in a certain namespace(A namespace is a declarative region that provides a scope to the identifiers (the names of types, functions, variables, etc) inside it)
// and allow them to be freely used outside, Otherwise we can also call each namespace function 
// independently such as std::cout<<
using namespace :: std;

int main(void)
{
    int  i = 018;
    float m = 1.0/2. + 2./4.; 
    std::cout << i;
    //std::cout << scientific << x;  
}

// Basic functions 
/*
std :: cout << "This  is parassed to the cout command"
std :: cin >> x; // User input is packed to the variable 'x'

*/