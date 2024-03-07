/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 20:50:23 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/07 21:34:55 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

const char* Form::GradeTooLowExceptionForm::what() const throw(){
    return "Grade is too low";
}

const char* Form::GradeTooHighExceptionForm::what() const throw(){
    return "Grade is too high";
}

const char *Form::Signed::what() const throw(){
    return "Form is already signed";
}

Form::Form(std::string nm, int grades, int gradex): name(nm), isSigned(false), gradeS(150), gradex(150){
    
}

Form::Form(): name("Bureaucrat"), isSigned(false), gradeS(150), gradex(150){
    
}

Form::~Form(){
    
}



void Form::beSigned(const Bureaucrat& Bureaucrat){
    if (Bureaucrat.getGrade() > gradeS)
        throw Form::GradeTooLowExceptionForm();
    // else if (isSigned == true)
    //     throw Form::Signed();
    else
        isSigned = true;
}       


Form& Form::operator=(const Form& other){
    if (this != &other)
        this->isSigned = other.isSigned;
    return *this;
}

Form::Form(const Form& obj): name(obj.name), isSigned(obj.isSigned), gradeS(obj.gradeS), gradex(obj.gradex){
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

    os << obj.getName() << obj.getIsSigned() << obj.getGradeS() << obj.getGradeX();
    return os;
}







