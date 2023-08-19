/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 23:41:52 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/08/13 14:58:55 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>


class Fixed
{
	private :
		int fixed_point;
		static const int raw;
	public :
		Fixed();
		Fixed(const Fixed& copy);
		~Fixed();
		Fixed& operator = (const Fixed& copy);
		int		getRawBits (void);
		void	setRawBits(int const raw);		
};

#endif
