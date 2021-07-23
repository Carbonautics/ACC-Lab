#include <iostream>
#include <iomanip>
using namespace std;
class student
{
private:
    char Name[30], grade;
    int USN;
    float mssc, mccn, mcpp, total, percentage;

public:
    student()
    {
        cout << "\nIn student Constructor";
        Name[0] = '\0';
        USN = 0;
        grade = '\0';
        mssc = mccn = mcpp = total = percentage = 0.0;
    }
    void getdata()
    {
        cout << endl
             << "Enter Name:";
        cin >> Name;
        cout << endl
             << "Enter USN:";
        cin >> USN;
        cout << endl
             << "Enter marks in SSC:";
        cin >> mssc;
        cout << endl
             << "Enter marks in CCN:";
        cin >> mccn;
        cout << endl
             << "Enter marks in CPP:";
        cin >> mcpp;
    }
    void calculate()
    {
        total = mssc + mccn + mcpp;
        percentage = total / 300 * 100;
    }
    void showstudent()
    {
        cout << endl
             << setprecision(5) << Name << "\t" << USN << "\t" << mssc << "\t" << mccn << "\t" << mcpp << "\t";
        cout << setprecision(5) << total << "\t" << percentage << "\t\t" << grade;
    }
    void findgrade() //grade conditions
    {
        if (percentage >= 80)
            grade = 'A';
        else if (percentage >= 70 && percentage < 80)
            grade = 'B';
        else if (percentage >= 60 && percentage < 70)
            grade = 'C';
        else
            grade = 'F';
    }
    ~student() //destructor
    {
        cout << "\n\nIn the student destructor\t";
        cout << "Year 2019-20" << endl;
    }
}; //student class
int main()
{
    int i, n;
    cout << "Enter the number of students:";
    cin >> n;
    student a[n];
    for (i = 0; i < n; i++)
    {
        a[i].getdata();
        a[i].calculate();
        a[i].findgrade();
    }
    cout << "\nName\tUSN\tSSC\tCCN\tCPP\tTotal\tPercentage\tGrade" << endl;
    for (i = 0; i < n; i++)
    {
        a[i].showstudent();
    }
    return 0;
}
