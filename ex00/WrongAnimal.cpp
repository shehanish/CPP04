/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 20:22:41 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/16 20:41:12 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type) {
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    if (this != &other)
        type = other.type;
    return *this;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string WrongAnimal::getType() const {
    return type;
}

void WrongAnimal::makeSound() const {
    std::cout << "Wrong animal sound" << std::endl;
}