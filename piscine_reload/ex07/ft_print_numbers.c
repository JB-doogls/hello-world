/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 12:41:53 by edoll             #+#    #+#             */
/*   Updated: 2019/09/06 12:47:25 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_puthcar(char c);

void	ft_print_numbers(void)
{
	char digit;

	digit = '0';
	while (digit <= '9')
		ft_puthcar(digit++);
}
