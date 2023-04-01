#include <stdio.h>
#include <math.h>

union shape {
	char shape ;
	float radius;
	struct {
	     float length;
	     float width;
	} rectanle;
} shape;
int main ()
{
	shape.shape ;
	char shape_type[10];
	printf("enter shape ( circle or rectangle):");
	sacnf("%s", shape);
	if ( strcmp(shape ,"circle")==0){
		printf("enter circle radius:");
		scanf("%f", &shape.radius);
		float area = m.pi * pow( shape.radius,2);
		printf("the area of circle is: %f",area);
	}
	else if(strcmp)(shape,"rectangle") ==0)
	{
		printf("enter rectangle length:");
		scanf("%f", &shape.rectanle.length);
		printf("enter rectangle width:");
		scanf("%f",&shape.rectangle.width);
		float area = shape.rectangle.length *shape.rectangle.width;
		printf("area of rectangle is: %f", area);	
	}
	else 
	{
		printf("invalid shape entered");
	}
	return 0;
}



