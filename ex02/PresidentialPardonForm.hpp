/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 23:49:30 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/08 15:15:03 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class PresidentialPardonForm: public AForm{
    public:
        class PresidentialPardonException: public std::exception{
            public:
                virtual const char* what() const throw();
        };
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm();
        PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
        PresidentialPardonForm(const PresidentialPardonForm& obj);
        void execute(Bureaucrat const & executor) const;
};