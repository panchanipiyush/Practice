#include <iostream>
#include <string.h>

class emp
{
public:
    int eno;
    char name[20], des[20];

    void get()
    {
        std::cout << "Enter the employee number:";
        std::cin >> eno;
        std::cout << "Enter the employee name:";
        std::cin >> name;
        std::cout << "Enter the designation:";
        std::cin >> des;
    }
};
class salary : public emp
{
    float bp, hra, da, pf, np;

public:
    void get1()
    {
        std::cout << "Enter the basic pay:";
        std::cin >> bp;
        std::cout << "Enter the Humen Resource Allowance:";
        std::cin >> hra;
        std::cout << "Enter the Dearness Allowance :";
        std::cin >> da;
        std::cout << "Enter the Profitablity Fund:";
        std::cin >> pf;
    }
    void calculate()
    {
        np = bp + hra + da - pf;
    }
    void display()
    {
        cout << "\ne_no \t e_name\t des \t bp \t hra \t da \t pf \t np \n";
        std::cout << eno << "\t" << name << "\t" << des << "\t" << bp << "\t" << hra << "\t" << da << "\t" << pf << "\t" << np << "\n";
    }
};
int main()
{
    int i, n;
    char ch;
    salary s[10];
    // std::clrscr();
    std::cout << "Enter the number of employee:";
    std::cin >> n;
    for (i = 0; i < n; i++)
    {
        s[i].get();
        s[i].get1();
        s[i].calculate();
    }
    std::cout << "\ne_no \t e_name\t des \t bp \t hra \t da \t pf \t np \n";
    for (i = 0; i < n; i++)
    {
        s[i].display();
    }
    // getch();
}