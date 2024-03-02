/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 23:49:12 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/01 16:54:04 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "GradeTooLowException.hpp"

AForm::AForm(const std::string name, bool isSign, const int grds, const int grdx): target("Bureaucrat"), isSigned(false), gradeS(grds), gradex(grdx){
       
}

AForm::AForm(): target("Bureaucrat"), isSigned(false), gradeS(150), gradex(150){
    
}

AForm::~AForm(){
    
}

void AForm::beSigned(const Bureaucrat& Bureaucrat){
    if (Bureaucrat.getGrade() <= this->getGradeS() && Bureaucrat.getGrade() >= 150){
        this->isSigned = true;  
    }
    else
        throw GradeTooLowException();
}       


AForm& AForm::operator=(const AForm& other){
    if (this != &other)
        this->isSigned = other.isSigned;
    return *this;
}

AForm::AForm(const AForm& obj){
    this->isSigned = obj.isSigned;
}

std::string AForm::getName() const{
    return getName();
}

bool AForm::getIsSigned() const{
    return getIsSigned();
}

int  AForm::getGradeS() const{
    return getGradeS();
}

int  AForm::getGradeX() const{
    return getGradeX();
}

std::ostream& operator<<(std::ostream& os, const Form& obj){
    std::ostringstream os;

    os << obj.getName() << obj.getIsSigned() << obj.getGradeS() << obj.getGradeX();
}