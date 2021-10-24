/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slouisa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 21:09:10 by slouisa           #+#    #+#             */
/*   Updated: 2021/10/10 17:14:08 by slouisa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int	c)
{
	return (c >= 0 && c <= 0177);
}
