//Accept percentage from user and display grade
//per<40 grade F
//40<=per<60 grade C
//60<=per<70 grade B
//70<=per grade A

#include<stdio.h>

int main()
{
	float perc;
	printf("Enter the percentage of student: ");
	scanf("%f", &perc);

	if (perc < 40)
	{
		printf("\nStudent with percentage %f got grade F", perc);
	}
	else if (perc >= 40 && perc < 60)
	{
		printf("\nStudent with percentage %f got grade C", perc);
	}
	else if (perc>=60 && perc<70)
	{
		printf("\nStudent with percentage %f got grade B", perc);
	}
	else
	{
		printf("\nStudent with percentage %f got grade A", perc);
	}
}










