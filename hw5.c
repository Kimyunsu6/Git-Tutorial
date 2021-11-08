#include<stdio.h>


int jjak(int a);
int hol(int a);

int jjak(int a)
{
    if (a % 2 == 0)
        printf("%d ", a); 
    return 0;
}

int hol(int a)
{
    if (a % 2 == 1)
        printf("%d ", a);
    return 0;
}

int main()
{
    int i;
    int numarr1[5] = { 0 };

    printf("5개의 정수를 입력하세요.\n");

    for (i = 0; i < 5; i++)
    {
        scanf_s("%d", &numarr1[i]);
    }
    printf("홀수 출력:");
    for (i = 0; i < 5; i++)
    {
        hol(numarr1[i]);
    }
    printf("\n");
    printf("짝수 출력:");
    for (i = 0; i < 5; i++)
    {
        jjak(numarr1[i]);
    }





}