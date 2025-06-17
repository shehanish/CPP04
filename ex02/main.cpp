/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 21:09:05 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/17 13:31:18 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() 
{
    // const Animal* a = new Animal(); // abstract class

    const Animal* animals[4];

    for (int i = 0; i < 2; ++i)
        animals[i] = new Dog();
    for (int i = 2; i < 4; ++i)
        animals[i] = new Cat();

    std::cout << "--- Sound Test ---" << std::endl;
    for (int i = 0; i < 4; ++i)
        animals[i]->makeSound();  // ✅ Each will call their own overridden sound

    for (int i = 0; i < 4; ++i)
        delete animals[i];

    // std::cout << "--- Deep copy test ---" << std::endl;
    // Dog basic;
    // {
    //     Dog tmp = basic;
    // }

    return 0;
}
