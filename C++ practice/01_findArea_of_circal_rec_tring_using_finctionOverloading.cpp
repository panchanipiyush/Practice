#include<iostream>
using namespace std;

const float pi=3.14;

float area(float r)
{
float ar;
ar=pi*r*r;
return ar;
}
float area(float l,float b)
{
float ar;
ar=l*b;
return ar;
}
float area(float n,float b,float h)
{
float ar;
ar=n*b*h;
return ar;
}
int main()
{
float b,h,r,l;
float result;

cout<<"\nEnter the Radius of Circle: \n";
cin>>r;
result=area(r);
cout<<"\nArea of Circle: "<<result<<endl;

cout<<"\nEnter the Length & Bredth of Rectangle: \n";
cin>>l>>b;
result=area(l,b);
cout<<"\nArea of Rectangle: "<<result<<endl;

cout<<"\nEnter the Base & Hieght of Triangle: \n";
cin>>b>>h;
result=area(0.5,b,h);
cout<<"\nArea of Triangle: "<<result<<endl;

return 0;
}