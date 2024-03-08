/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:21:15 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/08 02:05:12 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(std::string nm, int gd): name(nm){
    if (gd <= 0)
        throw Bureaucrat::GradeTooLowException(); 
    else if (gd > 150)
        throw Bureaucrat::GradeTooHighException();
    else
        grade = gd;
}

Bureaucrat::Bureaucrat(): name("Beraucrat"), grade(1){
    
}


Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other){
    if (this != &other)
        this->grade = other.grade;
    return *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj){
    this->grade = obj.grade;
}

void Bureaucrat::signForm(AForm &Form){
    try {
        Form.beSigned(*this);
        std::cout << this->getName() << " signs " << Form.getName() << std::endl;
    } catch (std::exception& e){
        std::cout << this->getName() << " cannot sign " << Form.getName() << " because " << e.what() << std::endl;
    }
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

const char * Bureaucrat::GradeTooLowException::what() const throw(){
    return "Grade is too low";
}

const char * Bureaucrat::GradeTooHighException::what() const throw(){
    return "Grade is too low";
}

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& obj){
    
    stream << obj.getName() << ", Bureaucrat grade" << obj.getGrade();
    return stream;
}