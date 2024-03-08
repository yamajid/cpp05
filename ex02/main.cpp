/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 23:49:22 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/08 02:26:33 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try
    {
        Bureaucrat b1 = Bureaucrat("name1", 25);
        PresidentialPardonForm f1 = PresidentialPardonForm("form1");
        b1.signForm(f1);
        f1.executeForm(b1);

        Bureaucrat b2 = Bureaucrat("name2", 25);
        PresidentialPardonForm f2 = PresidentialPardonForm("form2");
        b2.signForm(f2);
        f2.executeForm(b2); // This should throw an exception

        Bureaucrat b3 = Bureaucrat("name3", 72);
        RobotomyRequestForm f3 = RobotomyRequestForm("form3");
        b3.signForm(f3);
        f3.executeForm(b3);

        Bureaucrat b4 = Bureaucrat("name4", 72);
        RobotomyRequestForm f4 = RobotomyRequestForm("form4");
        b4.signForm(f4);
        f4.executeForm(b4); // This should throw an exception

        Bureaucrat b5 = Bureaucrat("name5", 145);
        ShrubberyCreationForm f5 = ShrubberyCreationForm("form5");
        b5.signForm(f5);
        f5.executeForm(b5);

        Bureaucrat b6 = Bureaucrat("name6", 145);
        ShrubberyCreationForm f6 = ShrubberyCreationForm("form6");
        b6.signForm(f6);
        f6.executeForm(b6); // This should throw an exception
    }
    catch(const PresidentialPardonForm::PresidentialPardonException & e)
    {
        std::cerr << "Form not signed1: " << e.what() << '\n';
    }
    catch(const ShrubberyCreationForm::ExecuteException & e)
    {
        std::cerr << "Form not signed2: " << e.what() << '\n';
    }
    catch(const RobotomyRequestForm::RobotomyException& e)
    {
        std::cerr << "Form not signed3: " << e.what() << '\n';
    }
    catch(const std::exception& e)
    {
        std::cerr << "An error occurred: " << e.what() << '\n';
    }
}