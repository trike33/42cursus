#include <stdio.h>
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
    return 0;
}
