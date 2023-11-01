#include <unistd.h>
#include <stdio.h>

int main()
{
int n,o;
char buff[50];

n = read(0,buff,40);
o = write(1,buff,10);

printf("%d %d", n,o);
}
