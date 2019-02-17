#include<stdio.h>
#include<conio.h>

int main()
{
    int j
    int score[10];
        score[0] = 5;
        score[1] = 3;
        score[2] = 2;
        score[3] = 4;
        score[4] = 7;

    for(i=5; i>=1; i--)
    {
        for(j=0; j<i-1; j++)
        {
            if (score[j]<=score[j+1])
            {
                continue;
            }

            else
            {
                int tmp = score[j];
                score[j] = score[j+1];
                score[j+1] = tmp;
            }
        }
    }

    printf("%d\n", score[j]);
    getch();
}
