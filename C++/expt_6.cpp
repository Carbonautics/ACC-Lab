#include<iostream>
using namespace std;

#define PI 3.142
class Area
{
    private:
    int result=0;
    public:

    void area(float x)
    {
        result = (PI * x * x);
        cout<<endl<<"Area of Circle: "<<result<<endl;
    }
    void area(float x, float y)
    {
        result = x * y;
        cout<<endl<<"Area of Rectangle: "<<result<<endl;
    }
    void area(float x, float y, float z)
    {
        result = x * y * z;
        cout<<endl<<"Area of Triangle: "<<result<<endl;
    }
};

int main()
{
    int radius, rect_len,rect_breadth, tri_height, tri_base;
    Area objArea;

    cout<<"Enter the Height and Base of Triangle: "<<endl;
    cin>>tri_height>>tri_base;

    cout<<"Enter the Radius of Circle: "<<endl;
    cin>>radius;
    
    cout<<"Enter the Length and Breadth of Rectangle: "<<endl;
    cin>>rect_len>>rect_breadth;
    
    objArea.area(0.5, tri_height, tri_base);
    objArea.area(radius);
    objArea.area(rect_len, rect_breadth);
    
    return 0;
}