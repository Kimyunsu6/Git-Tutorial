#include <stdio.h>

int main(void)
{
	int resultofAND;
	int resultofOR;
	int resultofXOR;
	int num1, num2;
	printf("���� �� ������ �Է��ϼ��� \n");
	printf("���� one: ");
	scanf_s("%d", &num1);
	printf("���� two: ");
	scanf_s("%d", &num2);

	resultofAND = num1 & num2;
	resultofOR = num1 | num2;
	resultofXOR = num1 ^ num2;
	printf("%d & %d = %d \n",num1, num2, resultofAND);
	printf("%d | %d = %d \n", num1, num2, resultofOR);
	printf("%d ^ %d = %d \n", num1, num2, resultofXOR);
}