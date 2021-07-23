#include<iostream>
#include<iomanip>
using namespace std;

class student
{
    private:char name[30],grade;			
    int usn;
    float marks_sub1,marks_sub2,marks_sub3,total,percentage;
    public:
        student()               // Constructor: Student
        {
            name[0] = '\0';
            usn = 0;
            grade = '\0';
            marks_sub1 = marks_sub2 = marks_sub3 = total = percentage =0.0;
        }
        void getdata()				//define function to read the data
        {
            cout<<endl<<"Enter Name:";
            cin>>name;
            cout<<endl<<"Enter USN(integers only):";
            cin>>usn;
            cout<<endl<<"Enter marks in Sub1:";
            cin>>marks_sub1;
            cout<<endl<<"Enter marks in Sub2:";
            cin>>marks_sub2;
            cout<<endl<<"Enter marks in Sub3:";
            cin>>marks_sub3;

        }
        void calculate()			//define function calculate to get percentge
        {
            total = marks_sub1 + marks_sub2 + marks_sub3;
            percentage = (total / 300) * 100;
        }
        void showstudent()			// display the information
        {
            cout<<endl<<setprecision(5)<<name<<"\t"<<usn<<"\t"<<marks_sub1<<"\t"<<marks_sub2<<"\t"<<marks_sub3<<"\t";
            cout<<setprecision(5)<<total<<"\t"<<percentage<<"\t\t"<<grade;
        }

        void findgrade()      				  //marks to grades
        {
            if(percentage>=80)
                grade='A';
            else if(percentage>=70 && percentage<80)
                grade='B';
            else if(percentage>=60 && percentage<70)
                grade='C';
            else
                grade='F';
        }
        ~student()           					   //destructor
        {
            cout<<"\n\nExecuted destructor for class 'student'\t";
            cout<<"Year 2021-22"<<endl;
        }
};//student class

int main()
{
    int i,no_of_students;
    cout<<"Enter the number of students: ";
    cin>>no_of_students;
    student a[no_of_students];					//call the constructor

    for(i=0;i<no_of_students;i++)
    {
        a[i].getdata();
        a[i].calculate();
        a[i].findgrade();
    }
    cout<<"\nName\tUSN\tSub1\tSub2\tSub3\tTotal\tPercentage\tGrade"<<endl;
    for(i = 0; i < no_of_students; i++)
    {
        a[i].showstudent();
    }
    return 0;
}
