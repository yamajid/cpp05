/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 23:49:38 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/03 21:59:43 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string tar){
    
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other){
    if (this != &other)
        *this =  other;
    return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj){
    *this = obj;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    if ((executor.getGrade() <= 145 && executor.getEx() <= 137) && getIsSigned())
        execute;
    else
        throw ;
        
}