/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahoumou <kahoumou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:51:38 by kahoumou          #+#    #+#             */
/*   Updated: 2025/04/30 17:32:10 by kahoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact ::Contact()
{
	std ::cout << BLEU << "Constructeur initialize" << RESET << std ::endl;
}

Contact ::~Contact()
{
	std ::cout << BLEU << "Constructeur reset" << RESET << std ::endl;
}

void Contact ::question()
{
	std::cout << CYAN << "combien de  contcact voulez_vous  creer ?" << RESET << std::endl;
}

int Contact::nb_of_contact()
{
	int	nb;

	std ::cout <<CYAN  << "Enter number of contact" << RESET << std::endl;
	Contact::question();
	std::cin >> nb;
	std::cin.ignore();
	return (nb);
}
int Contact::contact_number()
{
	int	phone;

	std::cout << CYAN << "Enter phone number:" << RESET << std::endl;
	std::cin >> phone;
	std::cin.ignore();
	return (phone);
}
std::string Contact::first_name()
{
	std::string n_f_n;
	std::cout << CYAN << "Enter phone first_name:" << RESET << std::endl;
	std::getline(std::cin, n_f_n);
	std::cin.ignore();
	return (n_f_n);
}
std::string Contact::last_name()
{
	std::string n_l_n;
	std::cout << CYAN << "Enter last name:" << RESET << std::endl;
	std::getline(std::cin, n_l_n);
	std::cin.ignore();
	return (n_l_n);
}

void Contact::set_all_data()
{
	first_n = Contact::first_name();
	last_n = Contact ::last_name();
	number = Contact::contact_number();
}

void Contact ::write_contact(int nb)
{
	std::cout << CYAN << "Nom du contact" << nb << ":" << RESET << GREEN << first_n << std::endl;
	std::cout << CYAN << "Prénom du contact" << nb << ":" << RESET << GREEN << last_n << std::endl;
	std::cout << CYAN << "Numéro du contact" << nb << ":" << RESET << GREEN << number << RESET << "\n"<< std::endl;
}

void Contact ::print_all_conatct()
{
	Contact *tab;
	int n = 0;
	n = nb_of_contact();
	tab = new Contact[n];

	for (int i = 0; i < n; i++)
	{
		tab[i].set_all_data();
		std::cout<< "\n"<<std::endl;
		tab[i].write_contact(i);
	}
	delete[] tab;
}