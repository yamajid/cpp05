/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 23:49:38 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/08 15:15:13 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

const char * ShrubberyCreationForm::ExecuteException::what() const throw(){
    return "Cannot execute the form3\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string tar): AForm(tar, 145, 137){
    
}

ShrubberyCreationForm::ShrubberyCreationForm(){
    
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other){
    if (this != &other)
        *this =  other;
    return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj){
    *this = obj;
}


void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    if ((executor.getGrade() <= 145 && getIsSigned()))
    {
        std::ofstream file(getName() + "_shrubbery");
        if(file.is_open())
        {
            file << "  ^  \n";
            file << " / \\ \n";
            file << "/___\\\n";
            file.close();
        }
        else
            return;
    }
    else
        throw ExecuteException();
        
}