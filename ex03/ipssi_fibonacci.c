/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ipssi_fibonacci.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Emmanuel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:05:18 by Emmanuel          #+#    #+#             */
/*   Updated: 2025/10/15 17:05:25 by Emmanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ipssi_fibonacci(int index)
{
	if (index < 0)
	{
		return (1);
	}
	return (ipssi_fibonacci(index - 1) + ipssi_fibonacci(index - 2));
}
