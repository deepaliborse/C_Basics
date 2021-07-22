/* Accept price of 5 prducts and calculate total bill. 
*  If total bill is more than 1000 give discount of 10% else discount is 5%.
*  Display net bill.
*/

#include<stdio.h>

int main()
{
	int p1, p2, p3, p4, p5, bill;
	float netbill, discount;
	printf("\nEnter price of 5 products:\n");
	scanf("%d %d %d %d %d", &p1, &p2, &p3, &p4, &p5);

	bill = p1 + p2 + p3 + p4 + p5;
	printf("\nTotal bill is: %d", bill);

	if (bill > 1000)
	{
		discount = bill * 0.10;
	}
	else
	{
		discount = bill * 0.05;
	}
	netbill = bill - discount;
	printf("\nNetbill is: %f", netbill);
}
