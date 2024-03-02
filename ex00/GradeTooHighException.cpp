/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHighException.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 14:47:11 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/02 15:51:38 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GradeTooHighException.hpp"

GradeTooHighException::GradeTooHighException(){
    Bureaucrat Bureaucrat;
    GradeTooHighException thr;

    thr.what(Bureaucrat.getName(), Bureaucrat.getGrade());
}

GradeTooHighException::~GradeTooHighException(){
    
}

GradeTooHighException::GradeTooHighException(const GradeTooHighException& obj){
    
}

GradeTooHighException& GradeTooHighException::operator=(const GradeTooHighException& other){
    return *this;
}

const char* GradeTooHighException::what() const throw(){
    return "Grade is too high";
}