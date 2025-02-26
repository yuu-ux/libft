/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 22:28:58 by yehara            #+#    #+#             */
/*   Updated: 2025/01/23 21:33:18 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*free_strjoin(char *s1, char *s2)
{
	size_t	lens1;
	size_t	lens2;
	size_t	total_len;
	char	*buf;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	total_len = lens1 + lens2;
	buf = (char *)malloc((total_len + 1) * sizeof(char));
	if (buf == NULL)
		return (NULL);
	ft_strlcpy(buf, s1, lens1 + 1);
	ft_strlcat(buf, (char *)s2, total_len + 1);
    free(s1);
    free(s2);
	return (buf);
}
