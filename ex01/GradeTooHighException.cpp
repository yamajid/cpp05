/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHighException.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 14:47:11 by yamajid           #+#    #+#             */
/*   Updated: 2024/02/24 15:14:15 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GradeTooHighException.hpp"

std::string GradeTooHighException::what(std::string name, int gradeGeven) const{
    std::ostringstream os;
    std::ostringstream os2;
    
    os << gradeGeven;
    os << "GradeTooHighException name is " << name << " and it's grade " << os2.str() << " is out of range";  
    return os.str();
}