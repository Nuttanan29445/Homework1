#include<stdio.h>
int main() {
	int score;
	printf("Your score 1-100: ");
	scanf_s("%d", &score);
	if (score >= 0 && score <= 49)
	{
		printf("Your grade:F\n");
	}
	else if (score >= 50 && score <= 59)
	{
		printf("Your grade:D\n");
	}
	else if (score >= 60 && score <= 69)
	{
		printf("Your grade:C\n");
	}
	else if (score >= 70 && score <=79)
	{
		printf("Your grade:B");
	}
	else
	{
		printf("Your grade:A");
	}
	return 0;
}