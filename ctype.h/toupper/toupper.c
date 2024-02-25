#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c1;
    char c2;

    c1 = 'a';
    c2 = 'b';
    printf("%c %c\n", c1, toupper(c1));
    printf("%c %c", c2, toupper(c2));

    return 0;
}
