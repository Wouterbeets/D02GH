/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 12:01:51 by wbeets            #+#    #+#             */
/*   Updated: 2015/01/07 12:01:55 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP_
# define FIXED_CLASS_HPP_

class Fixed {
	private:
		int			_rawBits;
		int const	_fb;
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const & f);	
		
		Fixed &		operator=(Fixed const & rhs);
		
		//getters
		int			getRawBits( void ) const;
		void		setRawBits( int const raw );
};

#endif /*FIXED_CLASS_HPP*/
