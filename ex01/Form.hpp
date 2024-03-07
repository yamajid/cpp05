/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 20:50:27 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/07 21:44:19 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
    private:
        const std::string name;
        bool isSigned;
        const int gradeS;
        const int gradex;
    public:
        class GradeTooLowExceptionForm : public std::exception {
            public:
                virtual const char *what() const throw();
        };
        class GradeTooHighExceptionForm : public std::exception {
            public:
                virtual const char *what() const throw();
        };
        class Signed : public std::exception {
            public:
                virtual const char *what() const throw();
        };
        Form();
        ~Form();
        Form& operator=(const Form& other);
        Form(const Form& obj);
        Form(std::string nm, int grades, int gradex);
        std::string getName() const;
        bool getIsSigned() const;
        int getGradeS() const;
        int getGradeX() const;
        void beSigned(const Bureaucrat& Bureaucrat);
};

    std::ostream& operator<<(std::ostream& os, const Form& obj);