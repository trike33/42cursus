#include <stdio.h>
#include "libft.h"

void	test_isalpha(void)
{
	printf("\n--- ft_isalpha ---\n");
	printf("A -> %d\n", ft_isalpha('A'));
	printf("z -> %d\n", ft_isalpha('z'));
	printf("5 -> %d\n", ft_isalpha('5'));
}

void	test_isdigit(void)
{
	printf("\n--- ft_isdigit ---\n");
	printf("0 -> %d\n", ft_isdigit('0'));
	printf("9 -> %d\n", ft_isdigit('9'));
	printf("A -> %d\n", ft_isdigit('A'));
}

void	test_isalnum(void)
{
	printf("\n--- ft_isalnum ---\n");
	printf("a -> %d\n", ft_isalnum('a'));
	printf("5 -> %d\n", ft_isalnum('5'));
	printf("# -> %d\n", ft_isalnum('#'));
}

void	test_isascii(void)
{
	printf("\n--- ft_isascii ---\n");
	printf("65 (A) -> %d\n", ft_isascii(65));
	printf("128 -> %d\n", ft_isascii(128));
}

void	test_isprint(void)
{
	printf("\n--- ft_isprint ---\n");
	printf("32 (space) -> %d\n", ft_isprint(32));
	printf("127 (DEL) -> %d\n", ft_isprint(127));
}

void	test_toupper(void)
{
	printf("\n--- ft_toupper ---\n");
	printf("a -> %c\n", ft_toupper('a'));
	printf("A -> %c\n", ft_toupper('A'));
}

void	test_tolower(void)
{
	printf("\n--- ft_tolower ---\n");
	printf("A -> %c\n", ft_tolower('A'));
	printf("a -> %c\n", ft_tolower('a'));
}

void	test_strlen(void)
{
	printf("\n--- ft_strlen ---\n");
	printf("\"Hola\" -> %lu\n", ft_strlen("Hola"));
	printf("\"\" -> %lu\n", ft_strlen(""));
}

void	test_strlcpy(void)
{
	printf("\n--- ft_strlcpy ---\n");
	char dst[10];
	const char *src = "Hola";
	size_t len = ft_strlcpy(dst, src, sizeof(dst));
	printf("src: \"%s\", dst: \"%s\", returned: %lu\n", src, dst, len);
}

void	test_strlcat(void)
{
	printf("\n--- ft_strlcat ---\n");
	char dst[20] = "Hola ";
	const char *src = "mundo";
	size_t len = ft_strlcat(dst, src, sizeof(dst));
	printf("dst + src: \"%s\", returned: %lu\n", dst, len);
}

void	test_strncmp(void)
{
	printf("\n--- ft_strncmp ---\n");
	printf("\"abc\" vs \"abc\" -> %d\n", ft_strncmp("abc", "abc", 5));
	printf("\"abc\" vs \"abd\" -> %d\n", ft_strncmp("abc", "abd", 5));
	printf("\"abc\" vs \"ab\"  -> %d\n", ft_strncmp("abc", "ab", 5));
}

void	test_atoi(void)
{
	printf("\n--- ft_atoi ---\n");
	printf("\"42\" -> %d\n", ft_atoi("42"));
	printf("\"   -123\" -> %d\n", ft_atoi("   -123"));
	printf("\"+99abc\" -> %d\n", ft_atoi("+99abc"));
}

int	main(void)
{
	test_isalpha();
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_isprint();
	test_toupper();
	test_tolower();
	test_strlen();
	test_strlcpy();
	test_strlcat();
	test_strncmp();
	test_atoi();
	return (0);
}

