/*Display whether date is valid or not.
* Leap Year:1. yy % 400 == 0,
*			2. yy % 100 !=0,
*			3. yy % 4 ==0.
* Months having 31 days: 1,3,5,7,8,10,12.
* Months having 30 days: 4,6,9,11.
* Month 2 has days: 28 or 29.
*/

#include<stdio.h>

int main()
{
	int dd, mm, yy;
	printf("Enter date as (DD/MM/YYYY): ");
	scanf("%d/%d/%d", &dd, &mm, &yy);

	//Checking condition for year.
	if (yy >= 1000 && yy <= 9999)
	{
		//Condition for month.
		switch (mm)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 10:
		case 8:
		case 12:
			if (dd >= 1 && dd <= 31)
			{
				printf("\nDate is valid!\n");
			}
			else
			{
				printf("\nInvalid date!\n");
			}
			break;

		case 4:
		case 6:
		case 9:
		case 11:
			if (dd >= 1 && dd <= 30)
			{
				printf("\nDate is valid!\n");
			}
			else
			{
				printf("\nInvalid date!\n");
			}
			break;

		case 2:
			if ((dd >= 1 && dd <= 29) && (yy % 400 == 0 || yy % 4 == 0 || yy % 100 != 0)) //leap year
			{
				printf("\nDate is valid\n");
			}
			else if (dd >= 1 && dd <= 28)
			{
				printf("\nDate is valid!");
			}
			else
			{
				printf("\nInvalid date!\n");
			}
			break;

		default:
			printf("\nInvalid Month!\n");
			break;
		}
	}
	else
	{
		printf("\nInvalid Year!\n");
	}

}









