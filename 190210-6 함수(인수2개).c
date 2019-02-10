#include<stdio.h>
#include<conio.h>

int sum(int a, int b) // 인수를 2개로 설정
{
    int c = a + b;
    return c;
}

int main()
{
    printf("%d", 2 * sum(5, 10)); // 함수 값을 2배 시켜줌
    getch();
}
