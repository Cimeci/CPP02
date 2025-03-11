/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 08:45:52 by inowak--          #+#    #+#             */
/*   Updated: 2025/03/11 13:55:26 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed{
  
    private:
        int fix;
        static const int nb;

    public:
        Fixed();
        Fixed(Fixed &a);
        Fixed &operator=(const Fixed&);
        ~Fixed();

        int getRawBits( void ) const;
        void setRawBits( int const raw );

};

#endif