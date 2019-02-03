#include<stdio.h>
#include<conio.h>
int main()
{
    int a = 1;
    int b = 3;
    int c = 4;
    if(a == 1)
    {
        if(b == 3)
            printf("%d", c);
    }
    else if(a == 0)
    {
        if(b == 3)
            printf("%d", 2*c);
    }
    getch();
}
