/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:21:15 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/07 21:35:29 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
    
const char* Bureaucrat::GradeTooHighException::what() const throw(){
    return "Grade is too low";
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
    return "Grade is too low";
}

const char *Bureaucrat::NotSigned::what() const throw(){
    return "Form is not signed";
}


Bureaucrat::Bureaucrat(std::string nm, int gd): name(nm){
    if (gd > 0 && gd <= 150)
        grade = gd;
    else if (gd > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(): name("Beraucrat"), grade(1){
    
}

void Bureaucrat::signForm(Form &Form){
    try {
        Form.beSigned(*this);
        std::cout << this->getName() << " signs " << Form.getName() << std::endl;
    } catch (std::exception& e){
        std::cout << this->getName() << " cannot sign " << Form.getName() << " because " << e.what() << std::endl;
    }
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
    else
        throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::decrement(){
    if (grade > 0)
        grade--;
    else
        throw Bureaucrat::GradeTooHighException();
}

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& obj){
    
    stream << obj.getName() << ", Bureaucrat grade" << obj.getGrade();
    return stream;
}