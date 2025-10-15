/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ipssi_recursive_power.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Emmanuel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:07:28 by Emmanuel          #+#    #+#             */
/*   Updated: 2025/10/15 17:29:47 by Emmanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//NE FONCTIONNE PAS
int	ipssi_recursive_power(int nb, int power)
{
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	return (nb * ipssi_recursive_power(nb, power - 1));
}
