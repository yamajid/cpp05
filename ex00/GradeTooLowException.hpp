/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowException.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 15:02:45 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/02 15:47:57 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

class GradeTooLowException: public std::exception{
      public:
        GradeTooLowException();
        ~GradeTooLowException();
        GradeTooLowException& operator=(const GradeTooHighException& other);
        GradeTooLowException(const GradeTooHighException& obj);
        virtual const char *what() const throw()
};