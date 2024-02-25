#include <stdio.h>

int ft_isupper(char pwd)
{
    if (pwd <= 'Z' && pwd >= 'A')
		return (1);
    else
	    return (0);
}
