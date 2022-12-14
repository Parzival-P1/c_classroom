#include <stdio.h>

typedef struct
{
	float x;
	float y;
} Point2D;

int main()
{
	Point2D point_a;

	printf("Please enter the first point: ");
	scanf("%f" "%f", &point_a.x, &point_a.y);

	return(0);
}