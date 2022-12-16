# include<stdio.h>;
int main()
{
int  p,ch,b,m,e,total;
float avg,per;
printf ("enter the mark of p =");
scanf("%d",&p);
printf ("enter the mark of ch =");
scanf("%d",&ch);
printf ("enter the mark of b =");
scanf("%d",&b);
printf ("enter the mark of m =");
scanf("%d",&m);
printf ("enter the mark of e =");
scanf("%d",&e);

total = p+ch+b+m+e;
printf("\n total mark = %d",total);
avg = total/5.0;
per = (total*100)/500.0;
printf("\n average = %d",avg);
printf("\n percentage = %d",per);

if (per>100){
    printf("\n your entered invalid number\n");
}
else if (per>=90 && per <=100){
    printf("\n your grade is A+");
}
else if (per>=80 && per<90){
    printf("\n your grade is A");
}
else if (per>=60 && per<80){
    printf("\n your grade is B");
}
else if (per>=35 && per<60){
    printf("\n your grade is C");
}
else {
    printf("\n your are failed");
}
    return 0;
}