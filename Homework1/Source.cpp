#include<stdio.h>
int main() {
	int score;
	printf("Your score 1-100: ");
	scanf_s("%d", &score);
	if (score >= 0 && score <= 49)
	{
		printf("Your grade:F\n");
	}
	else if (score >= 50 && score <= 54)
	{
		printf("Your grade:D\n");
	}
	else if (score >= 55 && score <= 59)
	{
		printf("Your grade:D+\n");
	}
	else if (score >= 60 && score <=64)
	{
		printf("Your grade:C");
	}
	else if (score >= 65 && score <= 69)
	{
		printf("Your grade:C+");
	}
	else if (score >= 70 && score <= 74)
	{
	printf("Your grade:B\n");
	}
	else if (score >= 75 && score <= 79)
	{
	printf("Your grade:B+\n");
	}
	else
	{
	printf("Your grade:A");
	}
	return 0;
}