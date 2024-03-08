/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 23:49:15 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/08 15:14:50 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{
    private:
        const std::string target;
        bool isSigned;
        const int gradeS;
        const int gradex;
    public:
        AForm(std::string name, const int grds, const int grdx);
        AForm();
        ~AForm();
        AForm& operator=(const AForm& other);
        AForm(const AForm& obj);
        std::string getName() const;
        bool getIsSigned() const;
        int getGradeS() const;
        int getGradeX() const;
        void beSigned(const Bureaucrat& Bureaucrat);
        void signForm(AForm& Form);
        bool setIsSigned() const;
        std::string setGradeS() const;
        int setGradeX() const;
        int setSigned() const;
        virtual void execute(Bureaucrat const & executor) const = 0;
};

    std::ostream& operator<<(std::ostream& os, const AForm& obj);