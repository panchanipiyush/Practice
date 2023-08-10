/*include<iostream>
using namespace std;

class one
{
    int a;
    public:
    friend int cal(one a);

};
class two
{
    int b;
    public:
    friend int cal(one a,two b);

};

 int cal(int f,int g)
{
    int ans=(x.a>y.b)?x.a:y.b;
}
int main()
{
    one x;
    two y;
    cal(10,20);
}*/
#include<iostream>
using namespace std;

class Test {
private:
   int x, y;
public:

   void input() {
       cout << "Enter two numbers:";
       cin >> x>>y;
   }

   friend void find(Test t);
};

void find(Test t) {
   if (t.x > t.y) {
       cout << "Largest is:" << t.x;
   } else {
       cout << "Largest is:" << t.y;
   }
}

int main() {

   Test t;
   t.input();
   find(t);

   return 0;
}