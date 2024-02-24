#include <stdio.h>

void ft_virtual_numbers_P(char i, int power, int finish)
{
	printf("%c^%d == %d",i,power,finish);
}
void ft_virtual_numbers_N(char i, int power, int finish)
{
	if (power == 1)
	{
		printf("%c^%d == √-1 || i",i,power);
	}
	else 
	printf("%c^%d == i*%d",i,power,finish);
}

void status(char i, int power,int finish)
{
	int s;
	int a2;
	int index;

	index = 0;
	a2 = 2;

	power % 2 == 0 ? 1 : 0;

	if (index)//couple
		ft_virtual_numbers_P(i, power, finish);
	else if(!index)//single
		ft_virtual_numbers_N(i, power, finish);
}


int neutral(int power)
{
    int finish = 1;

    if (power == 0)
    {
        finish = 1;
    }
    else if (power == 1 || power == 2)
    {
        finish = -1;
    }
    else if (power > 2)
    {
        // Burada çift sayıları -1, tek sayıları 1 ile çarptık
        finish = neutral(power - 1) * (power % 2 == 0 ? -1 : 1);
    }

    return (finish);
}

void ft_virtual_numbers(char i, int power)
{
	int index = neutral(power);
	status(i, power, index);
}


int main(void)
{
	char i = 'i';
	int power = 1;

	ft_virtual_numbers(i,power);

	return (0);
}