#include <iostream>
using namespace std;

class Cars
{
    public:
    string brand;
    string model;
    int year;
};

int main()
{
    Cars car_obj1;
    car_obj1.brand = "AUDI";
    car_obj1.model = "R8";
    car_obj1.year = 2000;

    Cars car_obj2;
    car_obj2.brand = "Ford";
    car_obj2.model = "GT";
    car_obj2.year = 1966;

    cout<<car_obj1.brand<<"\t"<<car_obj1.model<<"\t"<<car_obj1.year<<
    "\n"<<car_obj2.brand<<"\t"<<car_obj2.model<<"\t"<<car_obj2.year<<endl;

    return 0;
}