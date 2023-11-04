#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{

	char *buff = NULL;
	size_t bytes = 10;
ssize_t byte_read = 0;
/*strok*/
char **tokens = NULL;
int idx = 0;

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

/* String Split STRTOK*/

tokens = malloc(strlen(buff));
if (tokens == NULL)
{
printf("Error, Failed to allocate memory\n");
return (0);
}
tokens[idx] = strtok(buff, " ");
while (tokens[idx])
{
idx++;
tokens[idx] = strtok(NULL, " ");
}
idx = 0;

while (tokens[idx] != NULL)
{
printf("tokens[%d]: %s\n", idx, tokens[idx]);
idx++;
}
return (0);

}
