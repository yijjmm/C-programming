#include<stdio.h>
#include<conio.h>

int triple(int x)
{
    int y = 3 * x;
    return y;
}

int doubleint(int x)
{
    int y = 2 * x;
    return y;
}

int main()
{
    printf("%d", doubleint(triple(4)+3));
    getch();
}
