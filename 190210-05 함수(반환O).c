#include<stdio.h>
#include<conio.h>

int doubleint(int a)
{
    int b = 2*a;
    return b;
}

int main()
{
    printf("%d", doubleint(10));
    getch();
}
