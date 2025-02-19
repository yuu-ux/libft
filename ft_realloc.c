#include "libft.h"

void *ft_realloc(void *buf, size_t size)
{
    void *tmp;
    size_t buf_len;

    if (!buf)
        return ft_xmalloc(size);

    buf_len = ft_strlen(buf);
    if (size <= buf_len)
        buf_len = size;

    tmp = ft_xmalloc(size);
    if (!tmp)
    {
        ft_printf("malloc error\n");
        exit(EXIT_FAILURE);
    }
    ft_strlcpy(tmp, buf, buf_len + 1);
    free(buf);
    return (tmp);
}
