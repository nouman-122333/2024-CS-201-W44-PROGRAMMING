#include<iostream>
using namespace std;
void Check(int num1,int num2);
main()
{
int num1,num2;
cout<<"Enter num1: ";
cin>>num1;
cout<<"Enter num2: ";
cin>>num2;
Check(num1,num2);
}
void Check(int num1,int num2)
{
if(num1==num2)
{
cout<<"true";
}
if(num1!=num2)
{
cout<<"false";
}
}