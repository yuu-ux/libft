#include "libft.h"

void *ft_realloc(void *buf, size_t size)
{
    void *tmp;
    size_t buf_len;

    if (!buf)
        return malloc(size);

    buf_len = ft_strlen(buf);
    if (size <= buf_len)
        buf_len = size;

    tmp = malloc(size);
    if (!tmp)
    {
        ft_printf("malloc error\n");
        exit(1);
    }
    ft_strlcpy(tmp, buf, buf_len + 1);
    free(buf);
    return (tmp);
}
