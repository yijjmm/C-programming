#include<stdio.h>
#include<conio.h>

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

int main()
{
    printf("%d", sum(5, 10));
    getch();
}
