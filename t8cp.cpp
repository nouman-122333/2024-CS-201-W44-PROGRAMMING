#include<iostream>
using namespace std;
void pet(int);
main()
{
int holydays,workingdays,playtime,differenceofnorm;
cout<<"Enter no. of holydays : ";
cin>>holydays;
pet(holydays);
}
void pet(int holydays)
{
int workingdays,playtime,differenceofnorm;
workingdays=365 - holydays;
playtime=63 * workingdays + 127 * holydays;
int totaltime=30000;
differenceofnorm=totaltime - playtime;
if(differenceofnorm>0)
{
cout<<"tom sleeps well"<<endl;
cout<<differenceofnorm<<" less for play";
}
if(differenceofnorm<0)
{
cout<<"tom will run away"<<endl;
cout<<differenceofnorm * -1<<" for play";
}
}

