#include <stdio.h>

int ft_islower(char pwd)
{
    if (pwd <= 'z' && pwd >= 'a')
		return (1);
    else
	    return (0);
}
