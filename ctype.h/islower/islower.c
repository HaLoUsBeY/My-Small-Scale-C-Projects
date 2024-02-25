#include <stdio.h>
#include <ctype.h>

int main(void)
{
   char c1 , c2, c3, c4;

	c1 = 'a';
	c2 = '5';
	c3 = '\t';
    printf("%c küçük bir harf%s\n", c1, islower(c1) ? "tir!" : " değildir!");
    printf("%c küçük bir harf%s\n", c2, islower(c2) ? "tir!" : " değildir!");
    printf("%c küçük bir harf%s", c3, islower(c3) ? "tir!" : " değildir!");

    return (0);
}
