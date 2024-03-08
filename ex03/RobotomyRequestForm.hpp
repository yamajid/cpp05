/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 23:49:35 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/08 01:07:36 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class RobotomyRequestForm: public AForm{
    public:
        class RobotomyException: public std::exception{
            public:
                virtual const char* what() const throw();
        };
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        ~RobotomyRequestForm();
        RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
        RobotomyRequestForm(const RobotomyRequestForm& obj);
        void executeForm(Bureaucrat const & executor) const;
};