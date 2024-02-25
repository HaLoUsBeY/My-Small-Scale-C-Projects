#include <stdio.h>

int ft_isblank(char pwd)
{
	if (pwd == 9 || pwd == 32)
		return (1);
	else 
	return (0);
}
int main(void)
{
	char a; 

	a = 9;
	printf("%d",ft_isblank(a));
	return (0);
}