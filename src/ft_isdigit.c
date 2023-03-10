/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhernang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:40:11 by mhernang          #+#    #+#             */
/*   Updated: 2023/01/10 12:44:52 by mhernang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isdigit(int n)
{
	if ((n >= '0') && (n <= '9'))
		return (1);
	return (0);
}
