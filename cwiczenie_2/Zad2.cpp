#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

void gotoxy(int x, int y)
{
    COORD cord;
    cord.X = x;
    cord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cord);
}

int main( int argc, char* argv[])
{
    int i, j;
    int w=10;
    gotoxy(40, 1);
    for (i=0;i<w;i++)
    {
    for (j=0;j<i;j++)
{
        cout<<"*";
}
        cout<<endl;
}
    return 0;
}
