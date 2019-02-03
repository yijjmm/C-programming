#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    int b;
    int count = 0;
    for(a = 0; a <= 10; a++)
    {
        for(b = 0; b <= 10; b++)
        {
            if(a + b == 10)
            {
                count ++;
            }
        }
    }
    printf("%d", count);
    getch();
}
