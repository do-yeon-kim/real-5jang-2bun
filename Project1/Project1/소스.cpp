#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x, y;

	printf("���Ը� �Է��ϼ���(�Ҽ��� 6�ڸ���������): ");
	scanf("%lf", &x);

	y = x / 0.453592;

	printf("����kg: %.3f\n", x);
	printf("����(�Ŀ��): %.3f\n", y);

	return 0;
}