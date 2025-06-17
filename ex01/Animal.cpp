/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 20:54:07 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/17 11:53:04 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal") 
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type) 
{
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other) 
{
    std::cout << "Animal assignment operator called" << std::endl;
    if (this != &other)
        type = other.type;
    return *this;
}

Animal::~Animal() 
{
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const 
{
    std::cout << "Some generic animal sound" << std::endl;
}

std::string Animal::getType() const 
{
    return type;
}

