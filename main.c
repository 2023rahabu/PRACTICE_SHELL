#include "main.h"

int main(void)
{

	char *prompt = "(shell)> $ ", *buffer; 
	size_t size = 0;

	printf("%s", prompt);


	getline(&buffer, &size, stdin);/*we are permitting user to tyepe*/
 	printf("%s\n", buffer);/*printing what's in the buffer what user typed*/

	free(buffer); /*cze it's dyneamically alocated memory*/
		return (0);

}

