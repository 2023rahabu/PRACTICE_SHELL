#include "main.h"

int main(int c, char **argv)
{

(void)c;
	char *prompt = "(shell)> $ ", *buffer , *cpy_buff , *token; 
	size_t size = 0;
	ssize_t num_chars; /*for ctr+d*/
	const char *delim = " \n";
	int i, num_token = 0;
	while (1)
	{
		printf("%s", prompt);


		num_chars = getline(&buffer, &size, stdin);/*we are permitting user to tyepe*/

		if (num_chars == -1)/*for ctr+d*/
		{
			printf("Exiting (shell)> $....\n");
			return (-1);
		}
		cpy_buff = malloc(sizeof(char) * num_chars);
		if( cpy_buff == NULL)
		{
			perror("Memory allocation failed\n");
			return (-1);
		}

		strcpy(cpy_buff, buffer); /*keep track with main text*/

		/*tokenization*/
		token = strtok(buffer, delim);/*initialize first toke to variable*/
		while (token != NULL)
		{
			num_token++;
			token = strtok(NULL, delim);
		}
		num_token++;
		argv = malloc(sizeof(char *) * num_token);
		token = strtok(cpy_buff,delim);
			for(i = 0; token != NULL; i++)
			{
				argv[i] = malloc(sizeof(char) * strlen(token));
						strcpy(argv[i], token);
token = strtok(NULL, delim);
						printf("%s\n", argv[i]);
						}

						/*printf("%s\n", buffer);printing what's in the buffer what user typed*/
						}
						free(cpy_buff);
						free(argv);
						free(buffer); /*cze it's dyneamically alocated memory*/
						return (0);

						}

