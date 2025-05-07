/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahoumou <kahoumou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:52:08 by kahoumou          #+#    #+#             */
/*   Updated: 2025/04/30 17:20:25 by kahoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <string>

# define RED "\033[31m"
# define GREEN "\033[32m"
# define CYAN "\033[36m"
# define BLEU "\033[34m"
# define RESET "\033[0m"
# define ORANGE "\033[33m"
class Contact
{
  private:
	std::string first_n;
	std::string name;
	std::string last_n;
	int number;

  public:
	Contact();
	~Contact();	
	void say_hello();
	void set_contact(const std::string new_name);
	void question();
	std:: string first_name();
	std:: string last_name();
	void set_all_data();
	int contact_number();
	int nb_of_contact();
	void print_all_conatct();
	void write_contact(int nb);
};

#endif