#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n) {
	char *destino;
	const char *origen;

	destino = dst;
	origen = src;
	while (n--)
		*destino++ = *origen++;
	return dst;
}