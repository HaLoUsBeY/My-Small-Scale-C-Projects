#include <stdio.h>

int ft_isdigit(char pwd)
{
	if (pwd <= '9' && pwd >= '0')
		return (1);
    else
	return (0);
}
