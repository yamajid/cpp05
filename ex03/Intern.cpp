/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 22:08:40 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/08 15:29:58 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
 
const  char* Intern::FormNotFoundException.what() const throw(){
    return "Form not found";
}
 
Intern::Intern(){
    
}

Intern::~Intern(){
    
}

Intern& Intern::operator=(const Intern& other){
    if (this != &other)
        *this =  other;
    return *this;
}

Intern::Intern(const Intern& obj){
    *this = obj;
}

Form *Intern::makeForm(std::string name, std::string target){
    Form *form;
    std::string tab[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    
    for (int i = 0; i < 3 ; i++)
    {
        if (name == tab[i])
        {
            switch (i)
            {
                case 0:
                    form = new ShrubberyCreationForm(target);
                    std::cout << "Intern creates " << form->getName() << std::endl; 
                    break;
                case 1:
                    form = new RobotomyRequestForm(target);
                    std::cout << "Intern creates " << form->getName() << std::endl;
                    break;
                case 2:
                    form = new PresidentialPardonForm(target);
                    std::cout << "Intern creates " << form->getName() << std::endl;
                    break;
            }
        }
        else
            throw Intern::FormNotFoundException();
    }
    return form;
}
