#include <stdio.h>

int ft_isalnum(char pwd)
{
	int index;

	index = 0;
	if (pwd <= 'z' && pwd >= 'a')
		index = 1;
	else if (pwd <= 'Z' && pwd >= 'A')
		index = 1;
	else if (pwd <= '9' && pwd >= '0')
		index = 1;

	return (index);
}
int main(int argc, char **argv)
{
	int index;

	index = argv[1][0];
	printf("%d",ft_isalnum(index));
	return (0);
}