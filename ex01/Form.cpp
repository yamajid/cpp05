/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 20:50:23 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/08 15:08:31 by yamajid          ###   ########.fr       */
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

Form::Form(std::string nm, int grades, int gradex): name(nm), isSigned(false){
    if (gradeS <= 0 || gradex <= 0)
        throw Form::GradeTooHighExceptionForm();
    else if (gradeS > 150 || gradex > 150)
        throw Form::GradeTooLowExceptionForm();
    else
    {
        gradeS = grades;
        gradex = gradex;
    }
    
}

Form::Form(): name("Bureaucrat"), isSigned(false), gradeS(150), gradex(150){
    
}

Form::~Form(){
    
}



void Form::beSigned(const Bureaucrat& Bureaucrat){
    if (Bureaucrat.getGrade() > gradeS)
        throw Form::GradeTooLowExceptionForm();
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

const std::string Form::getName() const{
    return name;
}

bool Form::getIsSigned() const{
    return isSigned;
}

const int  Form::getGradeS() const{
    return gradeS;
}

const int  Form::getGradeX() const{
    return gradex;
}

std::ostream& operator<<(std::ostream& os, const Form& obj){

    os << obj.getName() << " " << obj.getIsSigned() << " "  << obj.getGradeS() << " "  << obj.getGradeX();
    return os;
}







