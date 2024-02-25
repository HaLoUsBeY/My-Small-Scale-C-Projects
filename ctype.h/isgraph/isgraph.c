#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c1 , c2, c3;

	c1 = ' ';//32
	c2 = 35;
	c3 = '\n';
    printf("boşluk(space)(ascii == 32) grafiksel bir karakter%s\n", isgraph(c1) ? "dir!" : " değildir!");
    printf("35(ascii) grafiksel bir karakter%s\n", isgraph(c2) ? "dir!" : " değildir!");
    printf("\\n grafiksel bir karakter%s", isgraph(c3) ? "dir!" : " değildir!");

    return (0);
}