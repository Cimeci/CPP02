/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 08:46:27 by inowak--          #+#    #+#             */
/*   Updated: 2025/03/11 13:57:45 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::nb = 8;

Fixed::Fixed(){
    std::cout << "Default constructor called\n";
    fix = 0;
}

Fixed::Fixed(Fixed &a){
    std::cout << "Copy constructor called\n";
    fix = a.fix;
}

Fixed& Fixed::operator=(const Fixed& a) {
    std::cout << "Copy assignment operator called\n";
    if (this != &a)
        fix = a.fix;
    return (*this);  
}

Fixed::~Fixed(){
    std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called\n";
    return (fix); 
}

void Fixed::setRawBits( int const raw ){
    fix = raw;    
}