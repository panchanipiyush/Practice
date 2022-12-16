# include<stdio.h>
struct EMP1
{
    char empName[50];
    int empID;
    int empsalary;
};
union EMP2
{
    char empName[50];
    int empID;
    int empsalary;
};

int main()
{
    struct EMP1;
    union EMP2;
   
    printf("\nSize of structure: %d\n",sizeof(EMP1));
    printf("Size of structure EMP1 name: %d\n",sizeof(EMP1.empName));
    printf("Size of structure EMP1 ID: %d\n",sizeof(EMP1.empID));
    printf("Size of structure EMP1 ID: %d\n",sizeof(EMP1.empID));



    printf("\nSize of union: %d\n",sizeof(EMP2));
    printf("Size of union persin name: %d\n",sizeof(emp2.empName));
    printf("Size of union person rollno: %d\n",sizeof(emp2.empID));
    return 0;
}