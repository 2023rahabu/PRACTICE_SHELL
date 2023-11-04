#include <stdio.h>
/**
 * main - entry point
 *Return: 0 success
 */
int main(int argc, char **argv)
{
	/* *argv[] == **argv */
	char *msg = "A program to main";
int idx = 0;
	printf("message: %s",msg);
	printf("Number of arguments with argc: %d\n", argc);
while (idx != argc)
{
printf("argv[%d]: %s\n", idx, argv[idx]);
idx++;
}
	return 0;
} 
