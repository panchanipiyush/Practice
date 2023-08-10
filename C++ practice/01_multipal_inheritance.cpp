# include<iostream>
# include<string.h>
using namespace std;

class person
{
    public:
        int age;
        string name;
    void getdata()
    {
        cout<<"Enter person name:";
        cin>>name;
        cout<<"Enter person age:";
        cin>>age;
    }
    void displayPerson()
    {
        cout<<"name\t\t|age"<<endl;;
        cout<<name<<"\t|"<<age<<endl;;
    }
};
class student:public person
{
    public:
    int num;
    int mark[5],j=1;
    int total=0;
    int percentage;
    void studentinfo()
    {
        for(int i=0;i<5;i++)
        {
        cout<<"Enter subjects"<<j<<"marks";
        cin>>mark[i];
        total+=mark[i];
        j++;
        }
    }
    void percentage()
    {
        percentage=total*100/5;
    }
    void displayStudent()
    {
        cout << "Student details are: \n";
        getdata();
        studentinfo();
        displayPerson();
        cout<<"percentage is "<<percentage<<"%"<<endl;
    }
};
class teacher: public student
{
    public:
    int salary;
    void teacherdata()
    {
        // cout<<"Enter name of teacher: ";
        // cin>>name;
        cout<<"Enter salary of teacher: ";
        cin>>salary;
    }
    void display()
    {
        getdata();
        displayPerson();
        cout<<"Salary is "<<salary<<endl;
    }
};

int main()
{
    int num1,num2;
    teacher t1;
    cout<<"Enter no of teacher: ";
    cin>>num1;
    for(int i=0;i<num1;i++)
    {
        t1.display();
    }
    // student s1;
    // cout<<"Enter no of student: ";
    // cin>>num2;
    // for(int i=0;i<num2;i++)
    // {
    //     s1.displayStudent();
    // }

    return 0;
}

