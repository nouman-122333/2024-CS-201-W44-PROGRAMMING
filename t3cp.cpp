#include<iostream>
using namespace std;
void finalprice(int price,string name);
main()
{
int price;
string name;
cout<<"Enter country name: ";
cin>>name;
cout<<"enter price in dollars: ";
cin>>price;
finalprice(price,name);
}
void finalprice(int price,string name)
{
if(name=="Pakistan")
{
cout<<"final price: "<<price-(price*5/100);
}
if(name=="Ireland")
{
cout<<"final price: "<<price-(price*10/100);
}
if(name=="India")
{
cout<<"final price: "<<price-(price*20/100);
}
if(name=="England")
{
cout<<"final price: "<<price-(price*30/100);
}
if(name=="Canada")
{
cout<<"final price: "<<price-(price*45/100);
}
}












