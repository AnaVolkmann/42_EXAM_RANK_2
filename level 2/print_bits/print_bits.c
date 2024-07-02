/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 13:51:30 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/06/25 14:00:26 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_bits(unsigned char octet)
{
	int	i;
	unsigned char bits;

	i = 8;
	while(i--)
	{
		((octat >> i) & 1) + '0'
		write (1, &bits, 1);
	}
}
