#include<stdio.h>
#include<conio.h>

int main()
{
    int a = 10;
    int b = 5;

    int tmp = a;
        a = b;
        b = tmp;

    printf("%d, %d", a, b);
    getch();
}
