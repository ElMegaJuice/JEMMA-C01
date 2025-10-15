/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ipssi_iterative_factorial.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Emmanuel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:21:42 by Emmanuel          #+#    #+#             */
/*   Updated: 2025/10/15 17:21:43 by Emmanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ipssi_iterative_factorial(int nb)
{
	int	facto;
	int	i;

	if (nb < 0)
	{
		return (0);
	}
	facto = 1;
	i = 1;
	while (i <= nb)
	{
		facto *= i;
		i++;
	}
	return (facto);
}
