#include <stdio.h>
#include <stdlib.h>

int main( int argc, char* argv[] )
{
		double value1 = 0.0f, value2 = 0.0f;
		if( argc != 3)
		{
			printf("usage: give me just any 2 float numbers value1 value2\n");
		}
		else
		{
			value1 = atof(argv[1]);
			value2 = atof(argv[2]);
			
			
			if (value1<value2)
			{
				printf("Value1 is %0.3f\n", value1);
				printf("Value2 is %0.3f\n", value2);
			}
			if (value2<value1)
			{
				printf("Value2 is %0.3f\n", value2);
				printf("Value1 is %0.3f\n", value1);
			}
				
			
			printf("The sum of both is: %0.3f\n", value1+value2);
			printf("The absolute difference of both is: %0.3f\n", value1-value2);
			printf("The product of both is: %0.3f\n", value1*value2);
			printf("The ratio of both is: %0.3f\n", value2/value1);
			
		}
return 0;
}
