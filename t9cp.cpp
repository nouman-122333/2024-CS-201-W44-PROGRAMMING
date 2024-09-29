#include<iostream>
using namespace std;
void tp(float numh,int numtp);
main()
{
float numh;
int numtp;
cout<<"Enter no. of household : ";
cin>>numh;
cout<<"Enter no. of rols of tp: ";
cin>>numtp;
tp(numh,numtp);
}
void tp(float numh,int numtp)
{
int dayslast;
dayslast=numtp / (numh * 57 *14 / 500) * 14;
if(dayslast<14)
{
cout<<"tp will last only "<<dayslast<<" days"<<",buy more!";
}
if(dayslast>=14)
{
cout<<"tp will last "<<dayslast<<" days"<<",no need to panic";
}
}



