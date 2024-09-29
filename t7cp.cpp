#include<iostream>
using namespace std;
void flowershop(int Wroses,int Rroses,int tullips);
main()
{
int Wroses,Rroses,tullips;
cout<<"Enter no. of white roses : ";
cin>>Wroses;
cout<<"Enter no. of red roses : ";
cin>>Rroses;
cout<<"Enter no. of tullips : ";
cin>>tullips;
flowershop(Wroses,Rroses,tullips);
}
void flowershop(int Wroses,int Rroses,int tullips)
{
float origprice;
origprice=Wroses*4.1+Rroses*2+tullips*2.5;
if(origprice>200)
{
cout<<"orignal price: "<<origprice<<endl;
cout<<"discounted price: "<<origprice-(origprice*20/100);
}
if(origprice<=200)
{
cout<<"orignal price: "<<origprice<<endl;
cout<<"no discount";
}
}


