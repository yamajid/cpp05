/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:21:20 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/07 21:45:26 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main (){
    try{
        Form a("yamajid1", 1, 10);
        Form b("yamajid2", 2, 20);
        Bureaucrat A("yamajid3", 50);
        Bureaucrat B("yamajid4", 40);
        a.beSigned(A);
        b.beSigned(B);
        A.signForm(a);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}