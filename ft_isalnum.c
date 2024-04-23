/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:42:08 by yehara            #+#    #+#             */
/*   Updated: 2024/04/23 14:06:34 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) || (c >= '0'
			&& c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
// int main(void)
// {
//     int a;
//     int b;

//     a = 0;
//     b = 0;

//     printf("%d\n", ft_isalnum(a));
//     printf("%d\n", isalnum(a));
//     printf("%d\n", ft_isalnum(b));
//     printf("%d\n", isalnum(b));

//     return (0);
// }
