/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:03:17 by mavellan          #+#    #+#             */
/*   Updated: 2024/10/31 12:08:17 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str;
	int		i;
	int	count;

	if (argc == 2)
	{
		i = 0;
		str = argv[1];
		while (str[i])
		{
			if(str[i] >= 'a' && str[i] <= 'z')
				count = str[i] - 'a' + 1;
			else if (str[i] >= 'A' && str[i] <= 'Z')
				count = str[i] - 'A' + 1;
			else
				count = 1;
			while (count--)
				write(1, &str[i], 1);
			i++;
		}
	}
	wirte(1, '\n', 1);
	return (0);
}
