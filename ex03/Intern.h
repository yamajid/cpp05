/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 22:08:44 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/04 21:23:42 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

class  Intern{
    public:
        class FormNotFoundException : public std::exception{
            public:
                virtual const char* what() const throw();
        };
        Intern();
        Intern(std::string name);
        ~Intern();
        Intern& operator=(const Intern& other);
        Intern(const Intern& obj);
        AForm* makeForm(std::string name, std::string target);
};
