/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 23:49:26 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/02 15:33:15 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(){
    
}

PresidentialPardonForm::PresidentialPardonForm(std::string trgt) {
    
}

PresidentialPardonForm::~PresidentialPardonForm(){
    
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
    if (this != &other)
        return *this;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj) {
}


void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    if ((executor.getGrade() <= 25 && executor.getGrade() <= 5) && getIsSigned())
        std::cout << "The president has been pardoned by Zafod Beeblebrox" << std::endl;
    else
        throw PresidentialPardonForm::GradeTooLowException();
        
}
