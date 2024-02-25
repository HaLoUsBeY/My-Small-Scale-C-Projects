#include <stdio.h>
#include <ctype.h>

int main(int argc, char **argv)
{
	int firststr;

	firststr = argv[1][0];
	printf("%c bir rakam %s\n ", firststr, isdigit(firststr) ? "dir" : "değildir");
	return (0);
}