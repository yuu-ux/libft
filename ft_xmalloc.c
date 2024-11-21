#include "libft.h"

void *ft_xmalloc(size_t size)
{
    void *tmp;

    tmp = malloc(size);
    if (!tmp)
    {
        ft_printf("malloc error\n");
        exit(1);
    }
    ft_memset(tmp, 0, size);
    return (tmp);
}
