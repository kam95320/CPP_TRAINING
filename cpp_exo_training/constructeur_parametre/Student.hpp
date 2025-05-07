/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahoumou <kahoumou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 15:12:30 by kahoumou          #+#    #+#             */
/*   Updated: 2025/05/01 16:55:23 by kahoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STUDENT_HPP
# define STUDENT_HPP
# include <iostream>
# include <string>
# define RED "\033[31m"
# define GREEN "\033[32m"
# define CYAN "\033[36m"
# define BLEU "\033[34m"
# define RESET "\033[0m"
# define ORANGE "\033[33m"
class Student
{
  private:
	std::string Name;
	int Age;
	std::string Field;

  public:
	Student(std::string name, int age, std::string field);
	~Student();
	std ::string task_name(std::string name);
	int task_age(int age);
	std::string task_field(std::string fieald);
	void display();
	int nb_of_Student();
};

#endif