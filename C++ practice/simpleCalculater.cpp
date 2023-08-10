# include<iostream>
# include<string.h>
using namespace std;

class calculator
{
public:
    int num1,num2;
    float result;
    void getdata()
    {
        cout<<"\n-*-*-*-*-*-*-*-*-*-*-*-*-";
        cout<<"\nenter value 1: ";
        cin>>num1;
        cout<<"\nenter value 2: ";        
        cin>>num2;
        cout<<"\n-*-*-*-*-*-*-*-*-*-*-*-*-";
    }
    void addition()
    {
        result=num1+num2;
        cout<<"\naddition = "<<result;
        cout<<"\n-------------------------"<<endl;
    }
    void substaction()
    {
        result=num1-num2;
        cout<<"\nsubstraction = "<<result;
        cout<<"\n-------------------------"<<endl;
    }
    void multiplication()
    {
        result=num1*num2;
        cout<<"\nmultiplication = "<<result;
        cout<<"\n-------------------------"<<endl;
    }
    void division()
    {
        result=num1/(float)num2;
        cout<<"\ndivision = "<<result;
        cout<<"\n-------------------------"<<endl;
    }
    void modulo()
    {
        result=num1%num2;
        cout<<"\nmodulo = "<<result;
        cout<<"\n-------------------------"<<endl;
    }
};
int main()
{
    char yesNo;
    int choice;
    calculator obj;

    do
    {    
    cout<<"\nEnter your choice : \n 1.Additon \n 2.Substraction \n 3.Multiplication \n 4.Division \n 5.Modulo"<<endl;
    cin >>choice;
    cout<<"Your choice is "<<choice<<ends;
    obj.getdata();
    //cout<<"Your choice is "<<choice<<ends;
    switch (choice)
    {
    case 1:
        obj.addition();
        break;
    case 2:
        obj.substaction();
        break;
    case 3:
        obj.multiplication();
        break;
    case 4:
        obj.division();
        break;
    case 5:
        obj.modulo();
        break;    
    }    
    cout << "Would you like to more calulation ? Y/N" << endl;
    cin >> yesNo;
    }while(yesNo == 'Y' || yesNo == 'y');

    return 0;
}