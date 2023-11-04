#include <stdio.h>
#include <stdlib.h>
int main(void)
{

	char *buff = NULL;
	size_t bytes = 10;
ssize_t byte_read = 0;

	buff = malloc(sizeof(char) * bytes);
	if (buff == NULL)
	{
		printf("Malloc failed to allocate memory\n");
		return (0); /*if fail it stop here */
	}
printf("Your string $: ");
	byte_read = getline(&buff, &bytes, stdin);

	printf("The sttring entered is: %s\n", buff);
	printf("Number of bytes read is:%ld\n", byte_read);
}
