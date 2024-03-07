/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 23:49:33 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/03 22:02:42 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

const char* RobotomyRequestForm::RobotomyException.what() const throw(){
    return "Robotomy failed to execute\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target){
    
}

RobotomyRequestForm::RobotomyRequestForm(){
    
}

RobotomyRequestForm::~RobotomyRequestForm(){

}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other){
    if (this != &other)
        *this =  other;
    return *this;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj){
    *this = obj;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    if ((executor.getGrade() <= 72 && executor.getGrade() <= 45) && getIsSigned())
        std::cout << getTarget() << " has been robotomized successfully 50% of the time" << std::endl;
    else
        throw ;
        
}
