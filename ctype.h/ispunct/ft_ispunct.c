#include <stdio.h>

int ft_ispunct(char pwd)
{
    if (pwd >= 33 && pwd <= 47)
		return (1);
	else if (pwd >= 58 && pwd <= 64)
		return (1);
	else if ((pwd >= 91 && pwd <= 96) || (pwd >= 123 && pwd <= 126))
		return (1);
    else 
        return (0);
}
