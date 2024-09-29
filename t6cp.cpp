#include<iostream>
using namespace std;
void longestduration(int time1,int time2);
main()
{
int time1,time2;
cout<<"Enter time in hour: ";
cin>>time1;
cout<<"Enter time in min: ";
cin>>time2;
longestduration(time1,time2);
}
void longestduration(int time1,int time2)
{
if(time1 * 60>time2)
{
cout<<"longest duration:"<<time1;
}
if(time1 * 60<time2)
{
cout<<"longest duration:"<<time2;
}
}













