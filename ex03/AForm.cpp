/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 23:49:12 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/08 02:21:22 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(const std::string name, const int grds, const int grdx): target("Bureaucrat"), isSigned(false), gradeS(grds), gradex(grdx){
       
}

AForm::AForm(): target("Bureaucrat"), isSigned(false), gradeS(150), gradex(150){
    
}

AForm::~AForm(){
    
}

void AForm::beSigned(const Bureaucrat& Bureaucrat){
    if (Bureaucrat.getGrade() <= this->getGradeS() && this->isSigned == false){
        this->isSigned = true;
    }
    else
        throw Bureaucrat::GradeTooLowException();
}       


AForm& AForm::operator=(const AForm& other){
    if (this != &other)
        *this =  other;
    return *this;
}

AForm::AForm(const AForm& obj): target(obj.getName()), isSigned(obj.getIsSigned()), gradeS(obj.getGradeS()), gradex(obj.getGradeX()){
    *this = obj;
}

std::string AForm::getName() const{
    return target;
}

bool AForm::getIsSigned() const{
    return isSigned;
}

int  AForm::getGradeS() const{
    return gradeS;
}

int  AForm::getGradeX() const{
    return gradex;
}

std::ostream& operator<<(std::ostream& os, const AForm& obj){

    os << obj.getName() << obj.getIsSigned() << obj.getGradeS() << obj.getGradeX();
    return os;
}