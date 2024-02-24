/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHighException.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 14:47:13 by yamajid           #+#    #+#             */
/*   Updated: 2024/02/24 14:59:59 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

class GradeTooHighException: public std::exception{
    public:
        // GradeTooHighException();
        // ~GradeTooHighException();
        // GradeTooHighException& operator=(const GradeTooHighException& other);
        // GradeTooHighException(const GradeTooHighException& obj);
        std::string what(std::string name, int gradeGeven) const;
};