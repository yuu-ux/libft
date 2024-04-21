/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 19:50:30 by yehara            #+#    #+#             */
/*   Updated: 2024/04/21 20:30:09 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char *src)
{
	int i;
	size_t count;

	i = 0;
	count = 0;
	while (src[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t ds_co;
	size_t sr_co;
	size_t i;

	i = 0;
	ds_co = 0;
	sr_co = 0;
	ds_co = ft_strlen(dst);
	sr_co = ft_strlen(src);
	if (dst == NULL || src == NULL)
		return (sr_co);
	if (size <= ds_co)
		return (size + sr_co);
	if (size <= (ds_co + sr_co))
	{
		dst[ds_co] = src[size - ds_co - 1];
		return (ds_co + sr_co);
	}
	if (size > ds_co + sr_co)
	{
		while (src[i] != '\0' && i < size)
		{
			dst[ds_co] = src[i];
			i++;
		}
		if (ds_co < size)
			dst[ds_co + i] = '\0';
	}
	return (ds_co + sr_co);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	char dest[20] = "abcde";
	char src[] = "1234";
	int x;
	unsigned int result1;

	x = 2;
	result1 = strlcat(dest, src, x);
	printf("%s: %u\n", dest, result1);
	return (0);
}
