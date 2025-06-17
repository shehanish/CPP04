/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 20:22:36 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/16 21:52:52 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal* meta = new Animal();
    const Animal* j = new Dog(); //J is an animal but it points to a dog
    const Animal* i = new Cat(); //before these tw animal constructor calls first. because both are animas

    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;

    i->makeSound();
    j->makeSound();
    meta->makeSound();

    std::cout << "--- WrongAnimal test ---" << std::endl;
    const WrongAnimal* w = new WrongCat();
    w->makeSound();

    delete meta;
    delete j;
    delete i;
    delete w;

    return 0;
}