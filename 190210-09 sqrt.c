#include<stdio.h>
#include<conio.h>

float sqrt(float x)
{
    float y = 0.5 * x;
    int i;
    for(i = 0; i < 10; i++)
    {
        y = 0.5*(y + x / y);
    }
    return y;
}

int main()
{
    printf("%f", sqrt(2));
    getch();
}
