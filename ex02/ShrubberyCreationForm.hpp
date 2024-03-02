/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 23:49:40 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/02 13:47:08 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class ShrubberyCreationForm: public AForm{
      public:
            ShrubberyCreationForm(std::string target);
            ShrubberyCreationForm();
            ~ShrubberyCreationForm();
            ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
            ShrubberyCreationForm(const ShrubberyCreationForm& obj);
            void execute(Bureaucrat const & executor) const;
};