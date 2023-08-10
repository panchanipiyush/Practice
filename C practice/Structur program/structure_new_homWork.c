#include <stdio.h>
struct employee
{
    int id, age, salary;
    char name[25];
}; 

int main()
{
    int i, n;
    printf("Enter the no of employees:");
    scanf("%d", &n);
   struct employee emp[n];
    printf("Enter employee info as id , name , age , salary\n");
    FILE *Emp;
    Emp = fopen ("Emp.txt","w");
    fprintf(Emp,"%s","*******************************************************************\n");
    fprintf(Emp,"%s","EMP_ID\t|EMP_NAME\t|EMP_AGE\t\t|tEMP_SAL\n");
    
    for (i = 0; i < n; i++)
    {
        //printf("Employe ");
        scanf("%d %s %d %d", &emp[i].id, emp[i].name, &emp[i].age, &emp[i].salary);
    }
    printf("*******************************************************************\n");
    printf("EMP_ID\t|EMP_NAME\t|EMP_AGE\t|\tEMP_SAL\n");
    printf("___________________________________________________________________\n");
    for (i = 0; i < n; i++)
    {
        fprintf(Emp,"%s","_______________________________________________________________\n");
        fprintf(Emp,"%d\t\t|%s\t\t|%d\t\t\t|%d\n", emp[i].id, emp[i].name, emp[i].age, emp[i].salary);
        fprintf(Emp,"%s","_______________________________________________________________\n");
        fclose(Emp);
        
        printf("__________________________________________________________________\n");
        printf("%d\t|%s\t\t|%d\t\t|%d\n", emp[i].id, emp[i].name, emp[i].age, emp[i].salary);
        
    }
    printf("*******************************************************************\n");

    return 0;
}