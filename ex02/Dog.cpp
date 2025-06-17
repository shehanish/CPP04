/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 21:08:10 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/17 11:55:19 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : brain(new Brain()) 
{
    type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) 
{
    std::cout << "Dog copy constructor called" << std::endl;
    brain = new Brain(*other.brain);
}

Dog& Dog::operator=(const Dog& other) {
    std::cout << "Dog assignment operator called" << std::endl;
    if (this != &other) {
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
    }
    return *this;
}

Dog::~Dog() {
    delete brain;
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Woof woof!" << std::endl;
}