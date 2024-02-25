int ft_iscntral(char pwd)
{
	if (pwd >= 0 && pwd <= 31)
		return (1);
	else if (pwd == 127)
		return (1);
	else
        return (0);
}
