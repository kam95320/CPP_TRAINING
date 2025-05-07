/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   student.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahoumou <kahoumou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 15:17:22 by kahoumou          #+#    #+#             */
/*   Updated: 2025/05/02 11:29:52 by kahoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Student.hpp"

std::string Student ::task_name(std::string name)
{
	std::cout << BLEU << "what is  your name ?" << RESET << std::endl;
	std::getline(std::cin, name);
	Name =  name;
	return (name);
}
std::string Student::task_field(std::string field)
{
	std::cout << BLEU << "what is  your field ?" << RESET << std::endl;
	std::getline(std::cin, field);
	Field = field;
	return (field);
}
int Student::task_age(int age)
{
	std::cout << BLEU << "what is  your age ?" << RESET << std::endl;
	std::cin >> age;
    std::cin.ignore();
	Age =  age;
	return (age);
}

// int Student::nb_of_Student()
// {
// 	int	nb;

// 	std::cout << ORANGE << "What is the number of student:" << RESET << std::endl;
// 	std::cin >> nb;
// 	std::cin.ignore();
// }

void Student::display()
{
	std::cout << CYAN << "student: " << RESET << GREEN << Name << RESET << std::endl;
	std::cout << CYAN << "age: " << RESET << GREEN << Age << RESET << std::endl;
	std::cout << CYAN << "field: " << RESET << GREEN << Field << RESET << std::endl;
	std::cout << "\n" << std::endl;
}
Student ::Student(std::string name, int age, std::string field) :
Name(name), Age(age), Field(field)
{
	// Student ::Name = Student ::task_name(name);
	// Student ::Field = Student::task_field(field);
	// Student ::Age = Student ::task_age(age);
	std::cout<< GREEN<< "Student activate:" << BLEU << Name << RESET<<std::endl;
	std::cout<<"\n"<<std::endl;
	
	// Student ::display();
}

Student ::~Student()
{
	std::cout << RED << "constructeur reset" << RESET << std::endl;
}