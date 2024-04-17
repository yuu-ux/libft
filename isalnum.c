/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 21:22:05 by yehara            #+#    #+#             */
/*   Updated: 2024/04/17 19:07:28 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>


int	ft_isalnum(int c)
{
	if (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) || (c >= '0' && c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
	
int main(void)
{
    int a;
    int b;

    a = 0;
    b = 0;
	
    printf("%d\n", ft_isalnum(a));
    printf("%d\n", isalnum(a));
    printf("%d\n", ft_isalnum(b));
    printf("%d\n", isalnum(b));
	
    return 0;
}