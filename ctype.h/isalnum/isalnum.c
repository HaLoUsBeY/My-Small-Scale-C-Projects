#include <stdio.h>
#include <ctype.h>

int main(int argc, char **argv)
{
	int firststr;
	int a;
	char A;
   
	firststr = argv[1][0];
	a = 97;
	A = 'A';
	printf("%d alfanumerik bir karakter %s\n ", firststr, isalnum(firststr) ? "dir" : "değildir");
	printf("%c alfanumerik bir karakter %s\n ", a, isalnum(a) ? "dir" : "değildir");
	printf("%c alfanumerik bir karakter %s\n ", A, isalnum(A) ? "dir" : "değildir");
	return (0);
}