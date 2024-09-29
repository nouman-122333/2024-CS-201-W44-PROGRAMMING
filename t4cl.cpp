#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int,int);
void movePlayer(int x, int y);
main()
{
int x=4,y=4;
system("cls");
movePlayer(x,y);
while(true)
{
movePlayer(x,y);
x=x+1;
if(x==99)
{
x=4;
}
}
movePlayer(x,y);
}
void movePlayer(int x,int y)
{
gotoxy(x,y);
cout<<"P";
Sleep(100);
gotoxy(x,y);
cout<<" ";
}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
