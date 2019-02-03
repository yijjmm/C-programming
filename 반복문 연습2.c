#include<stdio.h>
#include<conio.h>
int main()
{
    int sum = 0;
    int i;

    for(i = 1; i < 101; i++)
    {
        sum += i;
    }
    printf("%d", sum);
    getch();
}
