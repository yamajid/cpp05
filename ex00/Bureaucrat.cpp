/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:21:15 by yamajid           #+#    #+#             */
/*   Updated: 2024/02/24 16:04:04 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string nm, int gd): name(nm){
    if (gd > 0 && gd <= 150)
        grade = gd;
}

Bureaucrat::Bureaucrat(): name("Beraucrat"), grade(1){
    
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other){
    if (this != &other)
    { 
        this->name = other.name;
        this->grade = other.grade;
    }
    return *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj){
    this->name = obj.name;
    this->grade = obj.grade;
}

Bureaucrat::~Bureaucrat(){
    
}

std::string Bureaucrat::getName(){
    return name;
}

int Bureaucrat::getGrade(){
    return grade;
}

void Bureaucrat::increment(){
    if (grade < 150)
        grade++;
    else
        // throw std::
}

void Bureaucrat::decrement(){
    if (grade > 0)
        grade--;
    else
        // throw std::
}

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& obj){
    std::ostringstream os;
    std::ostringstream os2;

    os2 << obj.getGrade();
    os << obj.getName() << ", Bureaucrat grade" << os2.str();
    return os;
}