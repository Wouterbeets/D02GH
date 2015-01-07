/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 12:04:53 by wbeets            #+#    #+#             */
/*   Updated: 2015/01/07 12:05:04 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>
//constructor destructor
Fixed::Fixed() :_fb(8) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & f) :_fb(8) {
	std::cout << "Copy constructor called" << std::endl;
	this->_rawBits = f.getRawBits();
}

Fixed::~Fixed(){
	std::cout << "destructor called" << std::endl;
}
//operator overloaders

Fixed & Fixed::operator=(Fixed const & rhs){
	if(this != &rhs){
		this->_rawBits = rhs.getRawBits();
	}
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

//getters
int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits called" << std::endl;
	return this->_rawBits;	
}

void	Fixed::setRawBits( int const raw ){
	std::cout << "setRawBits called" << std::endl;
	this->_rawBits = raw;
}
