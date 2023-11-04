#include <stdio.h>


int main(void)
{

printf("$ ");

char *buff = NULL;
size_t len = 0;
ssize_t n;


n = getline(&buff,&len,stdin);
if (n == - 1)
{
printf("Error\n");
}
printf("%s\n", buff);
return (0);
}
