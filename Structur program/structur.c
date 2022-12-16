# include<stdio.h>
struct student
{
    char name[30];
    int age;
    int marks;
    float percentage;
};
int main()
{   
    struct student s, p, t;

    printf(" enter your s student detail\n");
    scanf("name=%s age=%d marks=%d percentage=%f",s.name,&s.age,&s.marks,&s.percentage);
 

    printf(" enter your p student detail\n");
    scanf("name=%s age=%d marks=%d percentage=%f",&p.name,&p.age,&p.marks,&p.percentage);

    printf(" enter your t student detail\n");
    scanf("name=%s age=%d marks=%d percentage=%f",&t.name,&t.age,&t.marks,&t.percentage);
    

    
    return 0;
}