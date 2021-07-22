//Accept radius in main fuction and calculate it's area and perimeter in other fuction.
//and display results back in main.

#include<stdio.h>

float CalArea(float);
float CalPeri(float);

int main()
{
	float radius, area, perimeter;

	printf("Enter the radius of circle: ");
	scanf("%f", &radius);

	area = CalArea(radius);
	printf("\n\nArea of circle is: %f", area);

	perimeter = CalPeri(radius);
	printf("\n\nPerimeter of circle is: %f", perimeter);
}

float CalArea(float radius1)
{
	float area;
	area = 3.14f * radius1 * radius1;
	return area;
}

float CalPeri(float radius2)
{
	float perimeter;
	perimeter = 2 * 3.14f * radius2;
	return perimeter;
}






