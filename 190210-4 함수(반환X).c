#include<stdio.h>
#include<conio.h>

void printdouble(int a) //반환하는 동작이 없을 때 void라고 쓴다. 단순히 동작만 수행할 때.
{
    printf("%d\n", a);
    printf("%d", a);
}

int main()
{
    printdouble(45);
    getch();
}
