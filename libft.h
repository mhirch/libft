#ifndef LIBFT_H
#define LIBFT_H

#include<unistd.h>
int ft_isalpha(int m);
int ft_toupper(int m);
int ft_tolower(int m);
char	 *ft_strchr(char *str, int to_find);
char	 *ft_strrchr(char *str, int to_find);
int    ft_strlen(char *str);
int ft_strncmp(const char *str1, const char *str2, size_t l);
int  ft_isdigit(int m);
int  ft_isalnum(int m);
int  ft_isascii(int m);
size_t ft_strlcpy(char *dest, const char *src, size_t l);
size_t ft_strlcat(char *dest, const char *src, size_t l);
void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int    ft_memcmp(const void *s1, const void *s2, size_t n);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
int ft_atoi(const char *str);
void *ft_calloc(size_t nmemb, size_t size);
char *ft_strdup(const char *s);
void *ft_memmove(void *dst, const void *src, size_t len);
char *ft_substr(char const *s, unsigned int start,size_t len);

#endif