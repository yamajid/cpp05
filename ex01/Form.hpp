/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 20:50:27 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/02 21:17:41 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

class Form{
    private:
        const std::string name;
        bool isSigned;
        const int gradeS;
        const int gradex;
    public:
        class GradeTooLowException : public std::exception {
            virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception {
            virtual const char *what() const throw();
        };
        Form();
        ~Form();
        Form& operator=(const Form& other);
        Form(const Form& obj);
        std::string getName() const;
        bool getIsSigned() const;
        int getGradeS() const;
        int getGradeX() const;
        void beSigned(const Bureaucrat& Bureaucrat);
};

    std::ostream& operator<<(std::ostream& os, const Form& obj);