#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    int b;
    int c;
    int count = 0;
    for(a = 0; a <= 10; a++)
    {
        for(b = 0; b <= 10; b++)
        {
            for(c = 0; c <= 10; c++)
            {
                if(a + b + c == 10)
                {
                    count++;
                }
            }
        }
    }
    printf("%d", count);
    getch();
}
