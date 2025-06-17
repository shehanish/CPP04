/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 20:49:26 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/17 11:28:38 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() 
{
    const Animal* j = new Dog(); //Const: ou canot modify this obect thogh this pointer
    const Animal* i = new Cat();

    delete j;
    delete i;

    std::cout << "--- Array Test ---" << std::endl;
    const int size = 4;
    Animal* animals[size];

    for (int i = 0; i < size / 2; ++i)
        animals[i] = new Dog();
    for (int i = size / 2; i < size; ++i)
        animals[i] = new Cat();

    for (int i = 0; i < size; ++i)
        delete animals[i];

    std::cout << "--- Deep copy test ---" << std::endl;
	Dog basic;
	{
		Dog tmp = basic; 
	}

	

    return 0;
}