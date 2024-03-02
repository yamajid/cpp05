/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowException.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 15:02:42 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/02 15:51:35 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GradeTooLowException.hpp"

GradeTooLowException::GradeTooLowException(){
    Bureaucrat Bureaucrat;
    GradeTooLowException thr;

    thr.what(Bureaucrat.getName(), Bureaucrat.getGrade());
}

GradeTooLowException::~GradeTooLowException(){
    
}

GradeTooLowException::GradeTooLowException(const GradeTooLowException& obj){
    
}

GradeTooLowException& GradeTooLowException::operator=(const GradeTooLowException& other){
    return *this;
}

virtual const char* GradeTooLowException::what() const throw(){
    return "Grade is too low";
}