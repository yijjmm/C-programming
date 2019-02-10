// 어떤 자연수 n을 입력 받고, 1~n까지 자연수의 제곱의 합 출력

#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    int a;
    int sum = 0;

    scanf("%d", &a);

    for(i = 1; i <= a; i++)
    {
        sum += i*i;
    }
    printf("%d", sum);
    getch();
}
