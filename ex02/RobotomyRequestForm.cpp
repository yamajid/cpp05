/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 23:49:33 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/08 15:15:05 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

const char* RobotomyRequestForm::RobotomyException::what() const throw(){
    return "Robotomy failed to execute2\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm(target, 72, 45){
    
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
    if ((executor.getGrade() <= 72 && getIsSigned() == true))
        std::cout << getName() << " has been robotomized successfully 50% of the time" << std::endl;
    else
        throw RobotomyException();
        
}
