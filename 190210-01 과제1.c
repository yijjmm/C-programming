// 1~100까지의 자연수의 제곱의 합을 출력

#include<stdio.h>
#include<conio.h>
int main()
{
    int sum = 0;
    int i;

    for(i = 1; i < 101; i++)
    {
        sum += i*i;
    }
    printf("%d", sum);
    getch();
}
