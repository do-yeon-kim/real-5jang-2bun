#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x, y;

	printf("무게를 입력하세요(소수점 6자리까지포함): ");
	scanf("%lf", &x);

	y = x / 0.453592;

	printf("무게kg: %.3f\n", x);
	printf("무게(파운드): %.3f\n", y);

	return 0;
}