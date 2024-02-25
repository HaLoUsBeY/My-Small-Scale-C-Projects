#include <stdio.h>

int my_isxdigit(char c)
{
	int ascii_index= (int)c;

	if ((ascii_index>= 48 && ascii_index<= 57) ||
		(ascii_index>= 65 && ascii_index<= 70) ||
		(ascii_index>= 97 && ascii_index<= 102))
	{
		return (1);
	}
	else
		return 0;
	
}

int main(void)
{
	char A = '5';
	char B = 'G';

	if (my_isxdigit(A))
	{
		printf("%c bir onaltılık rakamdır.\n", A);
	}
	else
	{
		printf("%c bir onaltılık rakam değildir.\n", A);
	}

	if (my_isxdigit(B))
	{
		printf("%c bir onaltılık rakamdır.\n", B);
	}
	else
		printf("%c bir onaltılık rakam değildir.\n", B);
	
	return (0);
}
