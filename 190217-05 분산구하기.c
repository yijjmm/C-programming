#include<stdio.h>
#include<conio.h>

int main()
{
    float V = 0;
    int n;
    float sum = 0;
    float b[10];

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

    float m = sum/n;

    for (n = 0; n <= 9; n++)
    {
        b[n] = score[n] - m;
        V += b[n]*b[n];
    }

    printf("%.2f", V/n);
    getch();
}
