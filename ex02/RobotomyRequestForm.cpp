/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 23:49:33 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/02 13:59:35 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target){
    
}

RobotomyRequestForm::RobotomyRequestForm(){
    
}

RobotomyRequestForm::~RobotomyRequestForm(){

}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other){
    if (this != &other)
        return *this;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj){
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    if ((executor.getGrade() <= 72 && executor.getGrade() <= 45) && getIsSigned())
        execute;
    else
        throw ;
        
}
