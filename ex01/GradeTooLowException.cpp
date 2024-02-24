/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowException.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 15:02:42 by yamajid           #+#    #+#             */
/*   Updated: 2024/02/24 15:05:19 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GradeTooLowException.hpp"

std::string GradeTooLowException::what(std::string name, int gradeGeven) const{
    std::ostringstream os;
    std::ostringstream os2;
    
    os << gradeGeven;
    os << "GradeTooHighException name is " << name << " and it's grade " << os2.str() << " is out of range";  
    return os.str();
}