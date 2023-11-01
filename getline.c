#include <stdio.h>
#include <stdlib.h>

int main(void)
{

FILE *fp = fopen("lorem.txt", "r");

if (fp == NULL)

{

perror("Unable to open file");
exit(1);
}
/* fixed size*/
char chunk[128];

while(fgets(chunk, sizeof(chunk),fp) != NULL)
{
fputs(chunk, stdout);
}
fclose(fp);

}
