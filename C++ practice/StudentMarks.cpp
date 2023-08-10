#include <iostream>
#include <string.h>
using namespace std;

class student
{
public:
    int phy, che, bio, mat, eng;
    string name; // string name[100];
    float total, percentage;
    void getdata()
    {
        cout << "\n********************************\n";
        cout << "Enter full Name of Student:";
        cin >> name;
        getline (cin,name);
        cout << "\n-------------------------------\n";
        cout << "Enter phy mark: ";
        cin >> phy;
        cout << "Enter che mark: ";
        cin >> che;
        cout << "Enter bio mark: ";
        cin >> bio;
        cout << "Enter match mark: ";
        cin >> mat;
        cout << "Enter eng mark: ";
        cin >> eng;
    }
    void calculation()
    {
        total = phy + che + bio + mat + eng;
        cout << "-------------------------------\n";
        cout << "Total marks = " << total;
        cout << "\n-------------------------------";
        percentage = (total * 100) / 500;
        cout << "\nPercentage = "<<percentage <<"%";
        cout << "\n-------------------------------";
    }
    void result()
    {

        if (percentage >= 0 && percentage <= 34 || phy <= 34 || che <= 34 || bio <= 34 || mat < 34 || eng <= 34)
        {
            cout << "\nYour faild";
            cout << "\n-------------------------------";
        }
        else if (percentage <= 100 && percentage > 80)
        {
            cout << "\nYour Grade is A";
            cout << "\n-------------------------------";
        }
        else if (percentage <= 80 && percentage > 60)
        {
            cout << "\nYour Grade is B";
            cout << "\n-------------------------------";
        }
        else if (percentage <= 60 && percentage >= 35)
        {
            cout << "\nYour Grade is C";
            cout << "\n-------------------------------";
        }
        else if (percentage > 100)
        {
            cout << "\nYour entered invalid marks";
            cout << "\n-------------------------------";
        }
        // cout<<"Thanks";
        // cout<<"-------------------------------";
    }
};

int main()
{
    int num;
    cout << "********************************\n";
    cout << "Enter number of student: ";
    cin >> num;
    student stu[num]; // st1,st2,st3,st4;
    for (int i = 0; i < num; i++)
    {
        stu[i].getdata();
        stu[i].calculation();
        stu[i].result();
        cout << "\n********************************";
        cout << "\n-------------Thanks-------------";
        cout << "\n********************************";
    }

    // st1.getdata();
    // st1.calculation();
    // st1.result();
    return 0;
}
