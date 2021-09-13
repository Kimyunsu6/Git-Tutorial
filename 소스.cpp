#include <stdio.h>

int main(void)
{
	int resultofAND;
	int resultofOR;
	int resultofXOR;
	int num1, num2;
	printf("정수 두 가지를 입력하세요 \n");
	printf("정수 one: ");
	scanf_s("%d", &num1);
	printf("정수 two: ");
	scanf_s("%d", &num2);

	resultofAND = num1 & num2;
	resultofOR = num1 | num2;
	resultofXOR = num1 ^ num2;
	printf("%d & %d = %d \n",num1, num2, resultofAND);
	printf("%d | %d = %d \n", num1, num2, resultofOR);
	printf("%d ^ %d = %d \n", num1, num2, resultofXOR);
}