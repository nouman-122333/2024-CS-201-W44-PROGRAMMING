#include<iostream>
using namespace std;
void earnbonus(int Pa,int Pb);
main()
{
int Pa,Pb;
cout<<"Enter position of a: ";
cin>>Pa;
cout<<"Enter position of b: ";
cin>>Pb;
earnbonus(Pa,Pb);
}
void earnbonus(int Pa,int Pb)
{
if(Pb-Pa<=5)
{
cout<<"earn bonus:"<<"true";
}
if(Pb-Pa>5)
{
cout<<"earn bonus:"<<"false";
}
}











