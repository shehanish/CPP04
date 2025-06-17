/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 20:48:55 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/17 11:53:47 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal 
{
private:
    Brain* brain;

public:
    Cat();
    Cat(const Cat& other);
    Cat& operator=(const Cat& other);
    ~Cat();

    void makeSound() const;
};

#endif