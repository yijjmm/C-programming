#include<stdio.h>
#include<conio.h>

float sqrt(float x)
{
    if (x >= 0)
    {
        float y = 0.5 * x;
        int i;
        for(i = 0; i < 10; i++)
        {
            y = 0.5*(y + x / y);
        }
        return y;
    }

    else if (x < 0)
    {
        float i = i;
        float y = (-1)*x*i;
        return y;
    }
}

void solveQuadratic(float a, float b, float c)
{
    float k;
    float l;
    k = (-b + sqrt(b*b-4*a*c))/2*a;
    l = (-b - sqrt(b*b-4*a*c))/2*a;
    printf("%f, %f", k, l);
}

int main()
{
    solveQuadratic(1,2,5);
    getch();
}
