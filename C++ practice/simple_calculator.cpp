#include <iostream>
using namespace std;

class calculator
{
public:
    int num1, num2;
    float result;
    void getdata()
    {
        cout << "\nenter value 1: ";
        cin >> num1;
        cout << "\nenter value 2: ";
        cin >> num2;
    }
    void addition()
    {
        result = num1 + num2;
        cout<<"\n-------------------------";
        cout << "\naddition = " << result;
        cout<<"\n-*-*-*-*-*-*-*-*-*-*-*-*-";
    }
    void substaction()
    {
        result = num1 - num2;
        cout<<"\n-------------------------";
        cout << "\nsubstraction = " << result;
        cout<<"\n-*-*-*-*-*-*-*-*-*-*-*-*-";
    }
    void multiplication()
    {
        result = num1 * num2;
        cout<<"\n-------------------------";
        cout << "\nmultiplication = " << result;
        cout<<"\n-*-*-*-*-*-*-*-*-*-*-*-*-";
    }
    void division()
    {
        result = num1 / num2;
        cout<<"\n-------------------------";
        cout << "\ndivision = " << result;
        cout<<"\n-*-*-*-*-*-*-*-*-*-*-*-*-";
    }
    void modulo()
    {
        result = num1 % num2;
        cout<<"\n-------------------------";
        cout << "\nmodulo = " << result;
        cout<<"\n-*-*-*-*-*-*-*-*-*-*-*-*-";
    }
};
int main()
{
    int choice, num;
    calculator obj;
    // obj.getdata();
    // obj.addition();
    // obj.substaction();
    // obj.multiplication();
    // obj.division();
    // obj.modulo();
    cout<<"\n-*-*-*-*-*-*-*-*-*-*-*-*-";
    cout << "\nchoice any one for operation";
    //cout<<"\n-*-*-*-*-*-*-*-*-*-*-*-*-";
    cout << "\n1 for Addition";
    cout << "\n2 for substraction";
    cout << "\n3 for multiplcation";
    cout << "\n4 for division";
    cout << "\n5 for modulo";
    cout<<"\n-*-*-*-*-*-*-*-*-*-*-*-*-";
    cout << "\nChoice is: ";
    cin >> choice;
    cout<<"\n-------------------------";
    if (choice > 0 && choice < 6)
    {
        obj.getdata();
        if (choice > 0 && choice < 6)
        {
            switch (choice)
            {
            case 1:
            {
                obj.addition();
            }
            break;
            case 2:
            {
                obj.substaction();
            }
            break;
            case 3:
            {
                obj.multiplication();
            }
            break;
            case 4:
            {
                obj.division();
            }
            break;
            case 5:
            {
                obj.modulo();
            }
            break;
            // default:
            // {
            //     cout << "Entered Invalid Choice";
            // }
            // break;
            }
        }
    }
    else
    {
        {
            cout << "Entered Invalid Choice";
        }
    }
    return 0;
}
