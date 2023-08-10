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
    struct EMP1 e1;
    union EMP2 e2;
   
    printf("\nSize of structure: %d\n",sizeof(e1));
    printf("Size of structure EMP1 name: %d\n",sizeof(e1.empName));
    printf("Size of structure EMP1 ID: %d\n",sizeof(e1.empID));
    printf("Size of structure EMP1 ID: %d\n",sizeof(e1.empsalary));


    printf("\nSize of union: %d\n",sizeof(e2));
    printf("Size of union EMP2 name: %d\n",sizeof(e2.empName));
    printf("Size of union EMp2 ID: %d\n",sizeof(e2.empID));
    printf("Size of union EMP2 rollno: %d\n",sizeof(e2.empsalary));
    return 0;
}