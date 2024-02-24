/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:21:18 by yamajid           #+#    #+#             */
/*   Updated: 2024/02/24 16:04:57 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <ostream>
#include <exception>

class Bureaucrat{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat& operator=(const Bureaucrat& other);
        Bureaucrat(const Bureaucrat& obj);
        Bureaucrat(std::string name, int grade);
        std::string getName() const;
        int getGrade() const;
        void increment();
        void decrement();
};
    std::ostream& operator<<(std::ostream& stream, const Bureaucrat& obj);
