#include <iostream>
using namespace std;

class My_Class
{
    public:                         //Access Specifier
    int number;                     //Variables (data members)
    string a_string;
};                                  //Memory is not allocate until an object is declared using this class

int main()
{
    My_Class my_object;             // Creating a new object of class My_Class

    //Accessing members of the created object & set values to them:
    my_object.number = 10;
    my_object.a_string = "Some Text";

    //Print the values of the members of my_object
    cout<<"Number: "<<my_object.number<<"\nString: "<<my_object.a_string<<endl;

    return 0;
}