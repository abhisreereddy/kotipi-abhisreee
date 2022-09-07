#include <iostream>
using namespace std;
class A {
   public:
   int a = 5;
   A() 
   {
      cout << "Constructor for class dean" << endl;
   }
};
class B 
{
   public:
   int b = 10;
   B()
    {
      cout << "Constructor for class teacher" << endl;
   }
};
class C: public A, public B 
{
   public:
   int c = 20;
   C() 
   {
      cout << "Constructor for class student" << endl;
      cout<<"Class C inherits from class dean and class teacher" << endl;
   }
};
int main();
 {
   C obj;
   cout<<"dean = "<< obj.a <<endl;
   cout<<"teacher= "<< obj.b <<endl;
   cout<<"student = "<< obj.c <<endl;
   return 0;
}

