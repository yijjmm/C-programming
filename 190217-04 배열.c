#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    float sum = 0;
    int score[10];
        score[0] = 1;
        score[1] = 2;
        score[2] = 3;
        score[3] = 4;
        score[4] = 5;
        score[5] = 6;
        score[6] = 7;
        score[7] = 8;
        score[8] = 9;
        score[9] = 10;

    for (n = 0; n <= 9; n++)
    {
        sum += score[n];
    }

    printf("%.2f", sum/n);
    getch();
}
