#include "libft.h"

void *ft_xmalloc(size_t size)
{
    void *tmp;

    tmp = malloc(size);
    if (!tmp)
    {
        ft_printf("malloc error\n");
        exit(EXIT_FAILURE);
    }
    ft_memset(tmp, 0, size);
    return (tmp);
}
