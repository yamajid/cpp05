/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:21:18 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/08 15:18:33 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <ostream>
#include <exception>
#include "AForm.hpp"

class AForm;

class Bureaucrat{
    private:
        const std::string name;
        int grade;
    public:
        class GradeTooLowException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
        class GradeTooHighException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat& operator=(const Bureaucrat& other);
        Bureaucrat(const Bureaucrat& obj);
        Bureaucrat(std::string name, int grade);
        std::string getName() const;
        int getGrade() const;
        void increment();
        void decrement();
        void signForm(AForm &Form);
        void executeForm(AForm const & form);
};
    std::ostream& operator<<(std::ostream& stream, const Bureaucrat& obj);
