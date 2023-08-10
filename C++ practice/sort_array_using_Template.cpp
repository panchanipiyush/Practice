#include <iostream>
#include <string.h>
using namespace std;


template <class Object>
void bsort(Object a[], Object n)
{
    for (int i=0; i<n-1; i++)
    {
        for (int j=i+1; j<n; j++)
            {
                if(a[i]>a[j])
                {
                    Object item;
                    item=a[i];
                    a[i]=a[j];
                    a[j]=item;
                }
            }
    }
 }


 int main ()
 {
    int intarray[10]= {50, 10, 20, 15, 62, 32, 6, 80, 90, 100};
    char chararray[10]= {'a', 'f', 'v', 'b', 'c', 's', 'm', 'i', 'j', 'i'};
    string stringarray[10]= {"hi", "how", "are", "you", "today", "love", "eating", "food", "brownies", "icecream"};

cout<<"The intarray consists of"<<endl;
for (int i=0; i<10; i++)
    cout<<intarray[i]<<endl;

cout<<"The sorted intarray sorted is"<<endl;
bsort(intarray, 10);
for (int i=0; i<10; i++)
    cout<<intarray[i]<<endl;

cout<<"Sorted char array"<<endl;
bsort(chararray, 10);
for (int i=0; i<10; i++)
    cout<<chararray[i]<<endl;

cout<<"The sorted stringarray is"<<endl;
bsort(stringarray, 10);
for (int i=0; i<10; i++)
    cout<<stringarray[i]<<endl;

return 0;
}