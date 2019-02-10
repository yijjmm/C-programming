#include<stdio.h>
#include<conio.h>

float f(float x)
{
    float y = x*x*x + 2*x;
    return y;
}

float intg(float a, float b, int n)
{
    int k;
    float y;
    float sum = 0;
    for(k = 1; k <= n; k++)
    {
        y = f(a+k*(b-a)/n)*(b-a)/n;
        sum += y;
    }
    return sum;
}
int main()
{
    printf("%f", intg(0, 1, 100));
    getch();
}
