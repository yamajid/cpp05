/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:21:15 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/02 23:25:59 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(std::string nm, int gd): name(nm){
    if (gd > 0 && gd <= 150)
        grade = gd;
}

Bureaucrat::Bureaucrat(): name("Beraucrat"), grade(1){
    
}


void Bureaucrat::executeForm(AForm const & form){
    if (form.getIsSigned() == true)
        std::cout << name << " executed " << form.getName();
    else
        std::cout << name << " couldn't execute " << form.getName() << " because " << form.getName() << " is not signed";
    
}
void Bureaucrat::signForm(Bureaucrat& Bureaucrat){
    Form Form;
    
    if (Form.getIsSigned() == true)
        std::cout << Bureaucrat.getName() << " signed " << Form.getName();
    else
        std::cout << name << " couldn't execute " << form.getName() << " because " << form.getName() << " is not signed";
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other){
    if (this != &other)
        this->grade = other.grade;
    return *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj){
    this->grade = obj.grade;
}

Bureaucrat::~Bureaucrat(){
    
}

std::string Bureaucrat::getName() const{
    return name;
}

int Bureaucrat::getGrade() const{
    return grade;
}

void Bureaucrat::increment(){
    if (grade < 150)
        grade++;
}

void Bureaucrat::decrement(){
    if (grade > 0)
        grade--;
}

Bureaucrat::GradeTooLowException::what() const throw(){
    return "Grade is too low";
}

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& obj){
    std::ostringstream os;
    
    os << obj.getName() << ", Bureaucrat grade" << obj.getGrade();
    return os;
}