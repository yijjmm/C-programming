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

void solveQuadratic(float a, float b, float c)
{    
    -b+sqrt(b*b-4*a*c))/2*a
    printf("%d")
    //printf를 이용하여 근 출력
}

int main()
{
    solveQuadratic(a, b, c)
    printf("%d");
    getch();
}
