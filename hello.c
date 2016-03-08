#include <stdio.h>
int main(int argc, const char *argv[])
{
	char i;
	i = getchar();
	while(i != '\n')
	{
		if(i >= 'a' && i <= 'z')
		{
			putchar(i+32);
		}
	}

	return 0;
}
