#include <stdio.h>

int ft_isalpha(char pwd)
{
	int index;

	index = 0;
	if (pwd <= 'z' && pwd >= 'a')
		index = 1;
	else if (pwd <= 'Z' && pwd >= 'A')
		index = 1;
	return (index);
}
int main(int argc, char **argv)
{
	int index;

	index = argv[1][0];
	printf("%d",ft_isalpha(index));
	return (0);
}