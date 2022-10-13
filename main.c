#include <stdio.h>
#include <ctype.h>
#include <string.h>

#include "libft.h"

void print_hex(char c)
{
	printf("%x%x", (int) c / 16, (int) c % 16);
}


int main(void)
{

	printf("===== RUNNING TESTS =====\n");

	// ft_isdigit

	// int same = 1;
	// for(int i = 0; i < 128; i++)
	// {
	// 	char c = (char) i;
	// 	int a = isdigit(c);
	// 	int b = ft_isdigit(c);

	// 	if(a != b)
	// 	{
	// 		printf("%d: expected %d, received %d\n", i, a, b);
	// 		same = 0;
	// 		break;
	// 	}
	// }
	// if(same) printf("ft_isdigit.c: OK!\n");

	// ft_isdigit


	// char str[] = "ablablabla";
	// int strl = strlen(str);

	// printf("%s\n", str);
	// ft_bzero((void *) str, 5);

	// for(int i = 0; i < strl; i++)
	// {
	// 	print_hex(str[i]);
	// 	printf(" ");
	// }

	// printf("\n");
	// printf("%s\n", str);

	// char *str = "aascfgeed";
	// char *c = ft_memchr(str, 'f');

	// char s[] = {65, 66, 67, 68, 69, 0, 45};
	// char s0[] = { 0,  0,  0,  0,  0,  0, 0};
	// char sCpy[] = {65, 66, 67, 68, 69, 0, 45};
	// char sResult[] = {67, 68, 67, 68, 69, 0, 45};
	// char sResult2[] = {67, 67, 68, 68, 69, 0, 45};

	// /* 1 */ printf("%d\n", ft_memmove(s0, s, 7) == s0 && !memcmp(s, s0, 7)); //Post 0
	// /* 2 */ printf("%d\n", ft_memmove(s, s + 2, 0) && !memcmp(s, sCpy, 7)); //0 move
	// /* 3 */ printf("%d\n", ft_memmove(s, s + 2, 2) == s && !memcmp(s, sResult, 7)); //forward
	// /* 4 */ printf("%d\n", ft_memmove(sResult + 1, sResult, 2) == sResult + 1 && !memcmp(sResult, sResult2, 7)); //reverse

	char dest[30]; memset(dest, 0, 30);
	char * src = (char *)"AAAAAAAAA";
	dest[0] = 'B';
	/* 1 */ printf("%d\n", ft_strlcat(dest, src, 0) == strlen(src) && !strcmp(dest, "B"));
	dest[0] = 'B';
	/* 2 */ printf("%d\n", ft_strlcat(dest, src, 1) == 10 && !strcmp(dest, "B"));
	/* 2 */ printf("%zu\n", ft_strlcat(dest, src, 1));

	return (0);
}
