#include <stdio.h>
#include <ctype.h>

int main(void)
{
   char c1 , c2, c3, c4;

	c1 = 'A';
	c2 = '5';
	c3 = '\t';
    printf("%c BÜYÜK bir harf%s\n", c1, isupper(c1) ? "tir!" : " değildir!");
    printf("%c BÜYÜK bir harf%s\n", c2, isupper(c2) ? "tir!" : " değildir!");
    printf("%c BÜYÜK bir harf%s", c3, isupper(c3) ? "tir!" : " değildir!");

    return (0);
}
