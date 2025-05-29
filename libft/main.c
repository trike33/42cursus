#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

// Test function for ft_isalpha
void test_isalpha(void)
{
    printf("\n--- ft_isalpha ---\n");
    printf("A -> %d (Expected: 1) -> %s\n", ft_isalpha('A'), ft_isalpha('A') == 1 ? "PASS" : "FAIL");
    printf("z -> %d (Expected: 1) -> %s\n", ft_isalpha('z'), ft_isalpha('z') == 1 ? "PASS" : "FAIL");
    printf("5 -> %d (Expected: 0) -> %s\n", ft_isalpha('5'), ft_isalpha('5') == 0 ? "PASS" : "FAIL");
}

// Test function for ft_isdigit
void test_isdigit(void)
{
    printf("\n--- ft_isdigit ---\n");
    printf("0 -> %d (Expected: 1) -> %s\n", ft_isdigit('0'), ft_isdigit('0') == 1 ? "PASS" : "FAIL");
    printf("9 -> %d (Expected: 1) -> %s\n", ft_isdigit('9'), ft_isdigit('9') == 1 ? "PASS" : "FAIL");
    printf("A -> %d (Expected: 0) -> %s\n", ft_isdigit('A'), ft_isdigit('A') == 0 ? "PASS" : "FAIL");
}

// Test function for ft_isalnum
void test_isalnum(void)
{
    printf("\n--- ft_isalnum ---\n");
    printf("a -> %d (Expected: 1) -> %s\n", ft_isalnum('a'), ft_isalnum('a') == 1 ? "PASS" : "FAIL");
    printf("5 -> %d (Expected: 1) -> %s\n", ft_isalnum('5'), ft_isalnum('5') == 1 ? "PASS" : "FAIL");
    printf("# -> %d (Expected: 0) -> %s\n", ft_isalnum('#'), ft_isalnum('#') == 0 ? "PASS" : "FAIL");
}

// Test function for ft_isascii
void test_isascii(void)
{
    printf("\n--- ft_isascii ---\n");
    printf("65 (A) -> %d (Expected: 1) -> %s\n", ft_isascii(65), ft_isascii(65) == 1 ? "PASS" : "FAIL");
    printf("128 -> %d (Expected: 0) -> %s\n", ft_isascii(128), ft_isascii(128) == 0 ? "PASS" : "FAIL");
}

// Test function for ft_isprint
void test_isprint(void)
{
    printf("\n--- ft_isprint ---\n");
    printf("32 (space) -> %d (Expected: 1) -> %s\n", ft_isprint(32), ft_isprint(32) == 1 ? "PASS" : "FAIL");
    printf("127 (DEL) -> %d (Expected: 0) -> %s\n", ft_isprint(127), ft_isprint(127) == 0 ? "PASS" : "FAIL");
}

// Test function for ft_toupper
void test_toupper(void)
{
    printf("\n--- ft_toupper ---\n");
    printf("a -> %c (Expected: A) -> %s\n", ft_toupper('a'), ft_toupper('a') == 'A' ? "PASS" : "FAIL");
    printf("A -> %c (Expected: A) -> %s\n", ft_toupper('A'), ft_toupper('A') == 'A' ? "PASS" : "FAIL");
}

// Test function for ft_tolower
void test_tolower(void)
{
    printf("\n--- ft_tolower ---\n");
    printf("A -> %c (Expected: a) -> %s\n", ft_tolower('A'), ft_tolower('A') == 'a' ? "PASS" : "FAIL");
    printf("a -> %c (Expected: a) -> %s\n", ft_tolower('a'), ft_tolower('a') == 'a' ? "PASS" : "FAIL");
}

// Test function for ft_strlen
void test_strlen(void)
{
    printf("\n--- ft_strlen ---\n");
    printf("\"Hola\" -> %lu (Expected: 4) -> %s\n", ft_strlen("Hola"), ft_strlen("Hola") == 4 ? "PASS" : "FAIL");
    printf("\"\" -> %lu (Expected: 0) -> %s\n", ft_strlen(""), ft_strlen("") == 0 ? "PASS" : "FAIL");
}

// Test function for ft_strlcpy
void test_strlcpy(void)
{
    printf("\n--- ft_	strlcpy ---\n");
    char dst[10];
    const char *src = "Hola";
    size_t len = ft_strlcpy(dst, src, sizeof(dst));
    printf("src: \"%s\", dst: \"%s\", returned: %lu (Expected: 5) -> %s\n", src, dst, len, len == 5 ? "PASS" : "FAIL");
}

// Test function for ft_strlcat
void test_strlcat(void)
{
    printf("\n--- ft_strlcat ---\n");
    char dst[20] = "Hola ";
    const char *src = "mundo";
    size_t len = ft_strlcat(dst, src, sizeof(dst));
    printf("dst + src: \"%s\", returned: %lu (Expected: 10) -> %s\n", dst, len, len == 10 ? "PASS" : "FAIL");
}

// Test function for ft_strncmp
void test_strncmp(void)
{
    printf("\n--- ft_strncmp ---\n");
    printf("\"abc\" vs \"abc\" -> %d (Expected: 0) -> %s\n", ft_strncmp("abc", "abc", 5), ft_strncmp("abc", "abc", 5) == 0 ? "PASS" : "FAIL");
    printf("\"abc\" vs \"abd\" -> %d (Expected: -1) -> %s\n", ft_strncmp("abc", "abd", 5), ft_strncmp("abc", "abd", 5) < 0 ? "PASS" : "FAIL");
    printf("\"abc\" vs \"ab\" -> %d (Expected: 1) -> %s\n", ft_strncmp("abc", "ab", 5), ft_strncmp("abc", "ab", 5) > 0 ? "PASS" : "FAIL");
}

// Test function for ft_atoi
void test_atoi(void)
{
    printf("\n--- ft_atoi ---\n");
    printf("\"42\" -> %d (Expected: 42) -> %s\n", ft_atoi("42"), ft_atoi("42") == 42 ? "PASS" : "FAIL");
    printf("\"   -123\" -> %d (Expected: -123) -> %s\n", ft_atoi("   -123"), ft_atoi("   -123") == -123 ? "PASS" : "FAIL");
    printf("\"+99abc\" -> %d (Expected: 99) -> %s\n", ft_atoi("+99abc"), ft_atoi("+99abc") == 99 ? "PASS" : "FAIL");
}

void	test_bzero(void)
{
	char buffer[5] = "abcd";
	ft_bzero(buffer, 2);
	printf("\n--- ft_bzero ---\n");
	printf("First 2 bytes zero? -> %s\n", buffer[0] == 0 && buffer[1] == 0 ? "PASS" : "FAIL");
}

void	test_strchr(void)
{
	printf("\n--- ft_strchr ---\n");
	const char *s = "42 Network";
	printf("Find 'N' in \"%s\" -> %s\n", s, ft_strchr(s, 'N') ? "PASS" : "FAIL");
}

void	test_strrchr(void)
{
	printf("\n--- ft_strrchr ---\n");
	const char *s = "banana";
	printf("Last 'a' in \"%s\" -> %s\n", s, ft_strrchr(s, 'a') ? "PASS" : "FAIL");
}

void	test_memmove(void)
{
	printf("\n--- ft_memmove ---\n");
	char str[] = "abcdef";
	ft_memmove(str + 2, str, 4);
	printf("After memmove: %s -> %s\n", str, strcmp(str, "ababcd") == 0 ? "PASS" : "FAIL");
}

void	test_memcpy(void)
{
	printf("\n--- ft_memcpy ---\n");
	char dest[6] = "";
	const char *src = "Hello";
	ft_memcpy(dest, src, 6);
	printf("Copied \"%s\" -> \"%s\" -> %s\n", src, dest, strcmp(dest, src) == 0 ? "PASS" : "FAIL");
}

void	test_memchr(void)
{
	printf("\n--- ft_memchr ---\n");
	char s[] = "abcde";
	void *res = ft_memchr(s, 'c', 5);
	printf("Find 'c' in \"%s\" -> %s\n", s, res != NULL ? "PASS" : "FAIL");
}

void	test_memcmp(void)
{
	printf("\n--- ft_memcmp ---\n");
	printf("\"abc\" vs \"abc\" -> %s\n", ft_memcmp("abc", "abc", 3) == 0 ? "PASS" : "FAIL");
	printf("\"abc\" vs \"abd\" -> %s\n", ft_memcmp("abc", "abd", 3) < 0 ? "PASS" : "FAIL");
}

void	test_strnstr(void)
{
	printf("\n--- ft_strnstr ---\n");
	const char *hay = "Hello World";
	const char *needle = "World";
	char *res = ft_strnstr(hay, needle, 11);
	printf("Find \"%s\" in \"%s\" -> %s\n", needle, hay, res ? "PASS" : "FAIL");
}

void	test_memset(void)
{
	printf("\n--- ft_memset ---\n");
	char buffer[5] = "abcd";
	ft_memset(buffer, 'x', 3);
	printf("After memset: %s -> %s\n", buffer, strncmp(buffer, "xxxd", 4) == 0 ? "PASS" : "FAIL");
}

void	test_calloc(void)
{
	printf("\n--- ft_calloc ---\n");
	int	*arr = (int *)ft_calloc(5, sizeof(int));
	int	pass = 1;
	size_t	i = 0;

	if (!arr)
	{
		printf("Memory allocation failed -> FAIL\n");
		return ;
	}
	while (i < 5)
	{
		if (arr[i] != 0)
		{
			pass = 0;
			break ;
		}
		i++;
	}
	printf("Zero initialized? -> %s\n", pass ? "PASS" : "FAIL");
	free(arr);
}

void	test_strdup(void)
{
	printf("\n--- ft_strdup ---\n");
	const char	*src = "Hello 42";
	char		*copy = ft_strdup(src);

	if (!copy)
	{
		printf("Memory allocation failed -> FAIL\n");
		return ;
	}
	printf("Original: \"%s\", Copy: \"%s\" -> %s\n",
		src, copy, strcmp(src, copy) == 0 ? "PASS" : "FAIL");
	free(copy);
}

void	test_substr_join_trim()
{
    char *s1 = "  ---hola mundo---  ";
    char *s2 = "Lib";
    char *s3 = "ft";
    char *sub;
    char *join;
    char *trim;

    // Test ft_substr
    printf("--- ft_substr ---\n");
    sub = ft_substr("Hello World", 6, 5);
    if (sub && strcmp(sub, "World") == 0)
        printf("ft_substr: PASS ('%s')\n", sub);
    else
        printf("ft_substr: FAIL (got '%s', expected 'World')\n", sub ? sub : "NULL");
    free(sub);

    // Test ft_strjoin
    printf("--- ft_strjoin ---\n");
    join = ft_strjoin(s2, s3);
    if (join && strcmp(join, "Libft") == 0)
        printf("ft_strjoin: PASS ('%s')\n", join);
    else
        printf("ft_strjoin: FAIL (got '%s', expected 'Libft')\n", join ? join : "NULL");
    free(join);

    // Test ft_strtrim
    printf("--- ft_strtrim ---\n");
    trim = ft_strtrim(s1, " -");
    if (trim && strcmp(trim, "hola mundo") == 0)
        printf("ft_strtrim: PASS ('%s')\n", trim);
    else
        printf("ft_strtrim: FAIL (got '%s', expected 'hola mundo')\n", trim ? trim : "NULL");
    free(trim);
}

int main(void)
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
	test_calloc();
	test_strdup();
	test_bzero();
	test_strchr();
	test_strrchr();
	test_memmove();
	test_memcpy();
	test_memchr();
	test_memcmp();
	test_strnstr();
	test_memset();
	test_substr_join_trim();
	return (0);
}
