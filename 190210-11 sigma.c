#include<stdio.h>
#include<conio.h>

float calc(int n)
{
    int k;
    float sum = 0;

    for(k = 1; k <= n; k++)
    {
        float y = 1.0/k;
        sum += y;
    }
    return sum;
}


int main()
{
    printf("%.2f", calc(2));
    getch();
}
