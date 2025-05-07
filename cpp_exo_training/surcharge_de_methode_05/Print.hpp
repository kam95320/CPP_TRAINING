/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Print.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahoumou <kahoumou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 12:56:04 by kahoumou          #+#    #+#             */
/*   Updated: 2025/05/07 14:19:03 by kahoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_H
# define PRINT_H
# include <iostream>
# include <string>
# define RED "\033[31m"
# define GREEN "\033[32m"
# define CYAN "\033[36m"
# define BLEU "\033[34m"
# define RESET "\033[0m"
# define ORANGE "\033[33m"

class Print
{
  private:
	std::string printing;
	int level;

  public:
  Print();
  ~Print();
	void set_print(std::string new_print);
	std::string get_print() const ;
	int  get_level() const;
	void set_level(int new_level);
  
	void printer();
	void printer(std ::string new_messge);
	void printer(std ::string new_messge, int new_level);
	void display(std:: string new_printing, int new_level);
};
#endif