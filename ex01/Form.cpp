/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 20:50:23 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/02 21:12:06 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "GradeTooLowException.hpp"

const char* Form::GradeTooLowException.what() const throw(){
    return "Grade is too low";
}

const char* Form::GradeTooHighException.what() const throw(){
    return "Grade is too high";
}

Form::Form(): name("Bureaucrat"), isSigned(false), gradeS(150), gradex(150){
    
}

Form::~Form(){
    
}

void Form::beSigned(const Bureaucrat& Bureaucrat){
    if (Bureaucrat.getGrade() > 150)
        throw Form::GradeTooLowException();
    else if (Bureaucrat.getGrade() < 0)
        throw Form::GradeTooHighException();
    else
        throw Form.isSigned = true;
}       


Form& Form::operator=(const Form& other){
    if (this != &other)
        this->isSigned = other.isSigned;
    return *this;
}

Form::Form(const Form& obj){
    this->isSigned = obj.isSigned;
}

std::string Form::getName() const{
    return name;
}

bool Form::getIsSigned() const{
    return isSigned;
}

int  Form::getGradeS() const{
    return gradeS;
}

int  Form::getGradeX() const{
    return gradex;
}

std::ostream& operator<<(std::ostream& os, const Form& obj){
    std::ostringstream os;

    os << obj.getName() << obj.getIsSigned() << obj.getGradeS() << obj.getGradeX();
}







