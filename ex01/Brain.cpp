/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 20:47:36 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/17 11:53:27 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() 
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& other) 
{
    std::cout << "Brain copy constructor called" << std::endl;
    for (int i = 0; i < 100; ++i) {
        ideas[i] = other.ideas[i];
    }
}

Brain& Brain::operator=(const Brain& other) 
{
    std::cout << "Brain assignment operator called" << std::endl;
    if (this != &other) {
        for (int i = 0; i < 100; ++i) {
            ideas[i] = other.ideas[i];
        }
    }
    return *this;
}

Brain::~Brain() 
{
    std::cout << "Brain destructor called" << std::endl;
}

void Brain::setIdea(int index, const std::string& idea) 
{
    if (index >= 0 && index < 100)
        ideas[index] = idea;
}

std::string Brain::getIdea(int index) const 
{
    if (index >= 0 && index < 100)
        return ideas[index];
    return "";
}