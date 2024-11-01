/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokcek <agokcek@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:32:02 by agokcek           #+#    #+#             */
/*   Updated: 2024/11/01 17:06:35 by agokcek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	size_t	i;
	char	*copy;

	len = ft_strlen(s);
	i = 0;
	copy = (char *)malloc((len + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	while (i < len)
	{
		copy[i] = s[i];
		i++;
	}
	copy[len] = '\0';
	return (copy);
}
// int main() {
//     const char *original = "Hello, World!";
//     char *duplicate = ft_strdup(original);

//     if (duplicate != NULL) {
//         printf("Original: %p\n", original);
//         printf("Duplicate: %p\n", duplicate);
//         free(duplicate);
//     } else {
//         printf("Bellek ayırma başarısız oldu.\n");
//     }
//     return 0;
// }
