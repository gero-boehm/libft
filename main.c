#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

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

	// char dest[30]; memset(dest, 0, 30);
	// char * src = (char *)"AAAAAAAAA";
	// dest[0] = 'B';
	// /* 1 */ printf("%d\n", ft_strlcat(dest, src, 0) == strlen(src) && !strcmp(dest, "B"));
	// dest[0] = 'B';
	// /* 2 */ printf("%d\n", ft_strlcat(dest, src, 1) == 10 && !strcmp(dest, "B"));
	// /* 2 */ printf("%s\n", dest);
	// /* 2 */ printf("%d\n", strcmp(dest, "B"));
	// /* 2 */ printf("%zu\n", ft_strlcat(dest, src, 1));

	// printf("%d\n", atoi("  \x13  1"));
	// printf("%lu\n", SIZE_MAX * SIZE_MAX);

	// printf("%lu\n", SIZE_MAX * 100000);


	// printf("%d\n", INT_MIN);
	// printf("%d\n", INT_MAX);


	// printf("%s\n", ft_itoa(INT_MIN));
	// printf("%s\n", ft_itoa(INT_MAX));
	// printf("%s\n", ft_itoa(10));
	// printf("%s\n", ft_itoa(-10));
	// printf("%s\n", ft_itoa(0));
	// printf("%s\n", ft_itoa(-0));

	// char *str = ft_itoa(-10);

	// for(int i = 0; i < (int) ft_strlen(str); i++)
	// {
	// 	print_hex(str[i]);
	// 	printf(" ");
	// }
	// printf("\n");

	// char *s = ft_substr("tripouille", 1, 1);
	// printf("%s\n", s);

	// char * s = ft_strjoin("tripouille", "42");
	// printf("%s\n", s);

	// char * s = ft_strtrim("   xxxtripouille", " x");
	// printf("%s\n", s);

	// s = ft_strtrim("   xxx   xxx", " x");
	// printf("%s\n", s);

	// s = ft_strtrim("          ", " ");
	// printf("%s\n", s);

	// char s = '3';
	// char c = '5';
	// char d = '2';
	// print_hex(c);
	// printf(" ");
	// print_hex(*(&c + 1));
	// printf(" ");
	// (void) s;
	// (void) d;

	// char * * tab = ft_split("  tripouille  42  ", ' ');

	// while (*tab)
	// {
	// 	printf("%s\n", *tab);
	// 	tab++;
	// }

	// printf("%s\n", tab[0]);
	// printf("%s\n", tab[1]);
	// printf("%s\n", tab[2]);

	// (void) tab;

	// int n = ft_atoi("546:5");
	// printf("%d\n", n);

	// int n = ft_memcmp("t\200", "t\0", 2);
	// // int n = ft_memcmp("testss", "test", 5);
	// printf("%d\n", n);

	// char dest[] = "rrrrrrrrrrrrrrr";
	// int n = ft_strlcat(dest, "lorem ipsum dolor sit amet", 5);

	// printf("%d\n", n);
	// printf("%s\n", dest);


	// ft_putnbr_fd(-1590548, 1);

	// int n = ft_atoi("-2147483648");
	// int n = ft_atoi("9223372036854775807");
	// int n2 = atoi("9223372036854775807");
	// printf("%d\n", n);
	// printf("%d\n", n2);

	// min -9223372036854775808
	// max  9223372036854775807

	// int n = ft_atoi("-9223372036854775810");
	// int n2 = atoi("-9223372036854775810");
	// printf("%d\n", n);
	// printf("%d\n", n2);

	// printf("%ld\n", LONG_MAX);

	// char	*big = "abcdef";
	// char	*little = "abcdefghijklmnop";
	// size_t	size = 6;

	// int		i1 = strncmp(big, little, size);
	// int		i2 = ft_strncmp(big, little, size);

	// printf("%d %d\n", i1, i2);


	// char haystack[30] = "aaabcabcd";
	// char needle[10] = "aabc";

	// char *p = ft_strnstr(haystack, needle, 0);
	// printf("%p\n", p);

	// return (0);
}
