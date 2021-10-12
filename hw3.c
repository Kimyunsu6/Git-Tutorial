#include <stdio.h>

int main()
{
    int num = 0;
    int i = 0;
    int div = 0;

    printf("Please enter a number: ");
    scanf_s("%d", &num);

    for (i = 2; i < num; i++) {
        if (num % i == 0)
            div++;
    }

    if (div == 0)
        printf("It is a prime number");
    else
        printf("It is not a prime number.");
    return 0;
}