/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 19:50:15 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/10/01 19:56:51 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char reverse_bits(unsigned char octet)
{
    int i = 8;
    unsigned char bit;

    while (i > 0)
    {
        bit = (bit * 2 + (octet % 2));
        octet = octet / 2;
        i--;
    }
    return (bit);
}