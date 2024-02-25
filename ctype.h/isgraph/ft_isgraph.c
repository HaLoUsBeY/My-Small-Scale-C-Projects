int ft_isgraph(char pwd)
{
    if (pwd < 32 && pwd >= 126)
		return (1);
    else
	    return (0);
}
