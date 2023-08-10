# include<iostream>
using namespace std;

class student
{
public:
        string name;
        int marks;
        student()
        {
            name="Unkonwn";
        }
        student(string n)
        {
            name = n;
        }
        void showdata()
        {
            cout<<"your name is: "<<name;
        }
};
int main()
{
        student s1;
        s1.showdata();

    return 0;
}
