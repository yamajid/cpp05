/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowException.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 15:02:45 by yamajid           #+#    #+#             */
/*   Updated: 2024/02/24 15:03:53 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

class GradeTooLowException: public std::exception{
      public:
        // GradeTooHighException();
        // ~GradeTooHighException();
        // GradeTooHighException& operator=(const GradeTooHighException& other);
        // GradeTooHighException(const GradeTooHighException& obj);
        std::string what(std::string name, int gradeGeven) const;
};