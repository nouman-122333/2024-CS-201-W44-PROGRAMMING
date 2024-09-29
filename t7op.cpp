
#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int,int);
void printMaze();
void movePlayer(int x, int y);
void movePlayer2(int a,int b);
main()
{
int x=2,y=2;
int a=2,b=7;
system("cls");
printMaze();
while(true)
{
movePlayer(x,y);
movePlayer2(a,b);
}
}
void movePlayer(int x,int y)
{
gotoxy(x,y);
cout<<"P";
Sleep(500);
gotoxy(x,y);
cout<<" ";
gotoxy(x,y+1);
cout<<"P";
Sleep(500);
gotoxy(x,y+1);
cout<<" ";
gotoxy(x,y+2);
cout<<"p";
Sleep(500);
gotoxy(x,y+2);
cout<<" ";
gotoxy(x,y+3);
cout<<"p";
Sleep(500);
gotoxy(x,y+3);
cout<<" ";
gotoxy(x,y+4);
cout<<"p";

}
void movePlayer2(int a,int b)
{
gotoxy(a,b);
cout<<"";
Sleep(500);
gotoxy(a,b);
cout<<"";
gotoxy(a,b-1);
cout<<"P";
Sleep(500);
gotoxy(a,b-1);
cout<<" ";
gotoxy(a,b-2);
cout<<"P";
Sleep(500);
gotoxy(a,b-2);
cout<<" ";
gotoxy(a,b-3);
cout<<"P";
Sleep(500);
gotoxy(a,b-3);
cout<<" ";
gotoxy(a,b-4);
cout<<"P";
Sleep(500);
gotoxy(a,b-4);
cout<<" ";
gotoxy(a,b-5);
cout<<"P";
}
void printMaze()
{
cout<<"###################"<<endl;
cout<<"#                 #"<<endl;
cout<<"#                 #"<<endl;
cout<<"#                 #"<<endl;
cout<<"#                 #"<<endl;
cout<<"#                 #"<<endl;
cout<<"#                 #"<<endl;
cout<<"###################"<<endl;
}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}