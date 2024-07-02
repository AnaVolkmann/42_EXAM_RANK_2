/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:06:20 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/06/25 14:09:27 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsignd char	reverse_bits(unsigned char octet)
{
	int	i; 
	unsigned char bits;

	i = 8;
	while (i > 0)
	{
		bits = bits * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (bits);
}
