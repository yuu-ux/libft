/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 19:50:30 by yehara            #+#    #+#             */
/*   Updated: 2024/04/23 16:17:26 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t ds_co;
	size_t sr_co;
	size_t i;

	i = 0;
	ds_co = ft_strlen(dst);
	sr_co = ft_strlen(src);
	if (dst == NULL || src == NULL)
		return (sr_co);
	if (size <= ds_co)
		return (size + sr_co);
	if (size == 0)
		return (sr_co);
	while (src[i] != '\0' && ds_co + i < size - 1)
	{
		dst[ds_co + i] = src[i];
		i++;
	}
	if (ds_co < size)
		dst[ds_co + i] = '\0';
	return (ds_co + sr_co);
}
// int main(void)
// {
// 	char dest[20] = "abcde";
// 	char src[] = "abcdefgh";
// 	size_t x;
// 	size_t result1;

// 	x = 30;
// 	// result1 = strlcat(dest, src, x);
// 	result1 = ft_strlcat(dest, src, x);
// 	printf("%s: %lu\n", dest, result1);
// 	return (0);
// }