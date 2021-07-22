/*Accept lengh and breadth in main fuction and calculate it's area and perimeter in other 
fuction and display results back in main.*/

#include<stdio.h>

int CalArea(int);
int CalPeri(int);

int main()
{
	int length, breadth, area, perimeter;

	printf("Enter the length of rectangle: ");
	scanf("%d", &length);

	printf("\nEnter the breadth of rectangle: ");
	scanf("%d", &breadth);

	area = CalArea(length, breadth);
	printf("\n\nArea of rectangle is: %d", area);

	perimeter = CalPeri(length,breadth);
	printf("\n\nPerimeter of rectangle is: %d", perimeter);
}

int CalArea(int length, int breadth)
{
	int area;
	area = length * breadth;
	return area;
}

int CalPeri(int lenght, int breadth)
{
	int perimeter;
	perimeter = 2 * (lenght + breadth);
	return perimeter;
}






