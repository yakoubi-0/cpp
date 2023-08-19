/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:01:15 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/08/19 11:01:48 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac == 1)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
	i = 0;
	while (av[++i])
	{
		j = -1;
		while (av[i][++j])
		{
			if (av[i][j] >= 'a' && av[i][j] <= 'z')
				av[i][j] -= 32;
			std::cout << av[i][j];
		}
	}
	std::cout << "\n";
	return (0);
}
