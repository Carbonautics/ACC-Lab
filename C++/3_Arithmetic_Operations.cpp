#include <iostream>
using namespace std;

int main()
{
    int x,y;
    int addition,subtraction,multiplication,division,mod_div;

    float float_div;

    cout<<"\nEnter two numbers: ";
    cin>>x>>y;
    
    addition = x+y;
    subtraction = x-y;
    multiplication = x*y;
    division = x/y;
    mod_div = x%y;
    float_div = (float)x/y;

    cout<<"Addition: "<<addition<<"\tSubtraction: "<<subtraction<<
    "\tMultiplication: "<<multiplication<<"\tDivison: "<<division<<"\tModulus:"<<mod_div<<
    "\tFloating Division:"<<float_div<<endl;

    cout<<"\n"<<x<<"+"<<y<<"="<<addition<<
    "\n"<<x<<"-"<<y<<"="<<subtraction<<
    "\n"<<x<<"*"<<y<<"="<<multiplication<<
    "\n"<<x<<"/"<<y<<"="<<division<<
    "\n"<<x<<"%"<<y<<"="<<mod_div<<
    "\nFloat.. "<<x<<"/"<<y<<"="<<(float)x/y<<endl;
    return 0;
}