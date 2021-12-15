#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* types of operators:
		1) Arithmetic Operators: +, -, *, /, %

		2) Relational Operators: ==, !=, >, <, >=, <=
	
	*/
	int a;
	float b;
	a = 34;
	b = 6.34;

	printf("a + b = %f\n", a+b);
	printf("a - b = %f\n", a-b);
	printf("a * b = %f\n", a*b);
	printf("a / b = %f\n", a/b);
	// printf("a % b = %f\n", a%b);
	return 0;
}
