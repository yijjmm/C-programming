#include<stdio.h>
#include<conio.h>

int abc(int n)
{
    if (n==1)
        return 3;

    else
        return (n+2)*abc(n-1);
}

int main()
{
    abc(3);
    getch();
}
