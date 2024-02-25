#include <stdio.h>

int ft_isspace(char pwd)
{
	if (pwd == 32 || (pwd >= 9 && pwd <= 13))
		return (1);
	else
	    return (0);
}
