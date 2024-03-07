/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 23:49:26 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/07 23:03:21 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


const char* PresidentialPardonForm::PresidentialPardonException::what() const throw(){
    return "Cannot execute the form\n";
}

PresidentialPardonForm::PresidentialPardonForm(){
    
}

PresidentialPardonForm::PresidentialPardonForm(std::string trgt): AForm(trgt, 25, 5){
    
}

PresidentialPardonForm::~PresidentialPardonForm(){
    
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
    if (this != &other)
        *this =  other;
    return *this;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj) {
    *this = obj;
}


void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    if ((executor.getGrade() <= 25 && executor.getGrade() <= 5) && getIsSigned())
        std::cout << "The president has been pardoned by Zafod Beeblebrox" << std::endl;
    else
        throw ;
        
}
