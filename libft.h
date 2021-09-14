#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

// typedef unsigned long size_t;
int	ft_isalpha(int c);
int	ft_isdigit(char c);
int	ft_isalnum(char c);
int	ft_isascii(int c);
int	ft_isprint(int c);
size_t	ft_strlen(char *str);
void	*memset(void *dest, int c, size_t count);
void	ft_bzero(void *b, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, void *src, size_t len);
size_t	ft_strlcpy(char *dest, const char *src, size_t destsize);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
int	ft_toupper(int c);
int	ft_tolower(int c);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);

#endif