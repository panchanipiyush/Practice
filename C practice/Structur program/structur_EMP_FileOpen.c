#include <stdio.h>
struct employee
{
    int id, age, salary;
    char name[25];
} emp[100];

void main()
{
    int i, n;
    printf("Enter the no of employees: ");
    scanf("%d", &n);
    
    //printf("Enter employee info as id , name , age , salary\n");

    FILE *Employee;
    Employee = fopen("Employee_Detail.txt","w");
    fprintf(Employee,"%s", "**************************************************************\n");
    fprintf(Employee,"%s", "\nEMP_ID\t|EMP_NAME\t|EMP_AGE\t|EMP_SAL\n");
    


    for (i = 0; i < n; i++)
    {
        printf("\nEnter Details For Employee %d: \n", i + 1);
        printf("Enter Employee ID:");
        scanf("%d",&emp[i].id);
        printf("Enter Employee Name:");
        scanf("%s",emp[i].name);    
        printf("Enter Employee Age:");
        scanf("%d",&emp[i].age);
        printf("Enter Employee Salary:");
        scanf("%d",&emp[i].salary);
        fprintf(Employee,"%s","_______________________________________________________________\n");
        fprintf(Employee,"%d\t\t|%s\t\t|%d\t\t\t|%d\n", emp[i].id, emp[i].name, emp[i].age, emp[i].salary);
        //scanf("%d %s %d %d", &emp[i].id, emp[i].name, &emp[i].age, &emp[i].salary);
    }
    fprintf(Employee, "%s","**************************************************************\n");
    fclose(Employee);
    printf("\nEMP_ID\t|EMP_NAME\t|EMP_AGE\t|EMP_SAL\n");
    printf("_______________________________________________________________\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t|%s\t\t|%d\t\t|%d\n", emp[i].id, emp[i].name, emp[i].age, emp[i].salary);
          printf("_______________________________________________________________\n");
    }
}