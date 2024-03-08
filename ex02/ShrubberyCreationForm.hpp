/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 23:49:40 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/08 15:15:15 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm: public AForm{
    public:
        class ExecuteException: public std::exception{
            public:
                virtual const char* what() const throw();
        };
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm();
        ~ShrubberyCreationForm();
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
        ShrubberyCreationForm(const ShrubberyCreationForm& obj);
        void execute(Bureaucrat const & executor) const;
};