#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

	int result = 1;
	int num1, num2;
	if (argc != 3)
	{
		printf("%s\n", argv[0]);
		return 1;
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("result is %d\n",result);
	return (0);

}
