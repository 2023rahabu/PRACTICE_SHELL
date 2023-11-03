#include <stdio.h>

int main(int argc, char *argv[])
{

	int result = 0;
	int i;
	if (argc  > 1)
	{
		for (i = 1; i < argc; i++)
		{
			printf("%s", argv[i]);
}
			result = result * argc;
	}
	return 0;

}
