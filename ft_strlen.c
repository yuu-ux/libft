/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:40:23 by yehara            #+#    #+#             */
/*   Updated: 2024/04/23 14:06:58 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long int	ft_strlen(const char *str)
{
	int					i;
	unsigned long int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

// int main(void)
// {
//     char a[] = "hello world";
//     printf("%lu\n", strlen(a));
//     printf("%lu\n", ft_strlen(a));

//     return (0);
// }