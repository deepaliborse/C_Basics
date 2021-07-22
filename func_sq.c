#include<stdio.h>

int calculate(int);

int main()
{
	int num, result;
	printf("\n Enter the number::");
	scanf("%d", &num);
	result = calculate(num);
	printf("\n The square is %d", result);

}

int calculate(int n)
{
	int result;
	result = n * n;
	return result;
}