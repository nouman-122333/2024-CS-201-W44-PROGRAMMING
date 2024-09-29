#include<iostream>
using namespace std;
void checkspeed(int speed);
main()
{
int speed;
cout<<"Enter speed: ";
cin>>speed;
checkspeed(speed);
}
void checkspeed(int speed)
{
if(speed>100)
{
cout<<"Halt... YOU WILL BE CHALLENGED!!!";
}
if(speed<=100)
{
cout<<"YOU ARE GOING GOOD";
}
}













