/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:21:20 by yamajid           #+#    #+#             */
/*   Updated: 2024/03/07 16:33:45 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (){

    try{
        Bureaucrat("yamajid", 0);
    }
    catch (Bureaucrat::GradeTooHighException & e){
        std::cout << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException & e){
        std::cout << e.what() << std::endl;
    }
}