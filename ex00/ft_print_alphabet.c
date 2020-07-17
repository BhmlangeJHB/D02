/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhmlange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 09:32:14 by bhmlange          #+#    #+#             */
/*   Updated: 2020/07/17 08:06:20 by bhmlange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */:wq

void	ft_print_alphabet(void)
{
	char	charecter;

	charecter = 'a';
	while (charecter <= 'z')
	{
		ft_putchar(charecter);
		++charecter;
	}
}
