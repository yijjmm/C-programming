#include<stdio.h>
#include<conio.h>

int def(int a)
{
    int b = 3 * a + 4;
    return b;
}

int main()
{
    int i;
    for(i = 1; i <= 50; i++)
    {
        printf("f(%d)=%d\n", i, def(i));
    }
    getch();
}
