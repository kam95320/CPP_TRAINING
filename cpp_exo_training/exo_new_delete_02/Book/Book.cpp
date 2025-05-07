/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Book.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahoumou <kahoumou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 18:35:10 by kahoumou          #+#    #+#             */
/*   Updated: 2025/05/01 14:27:22 by kahoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Book.hpp"

int Book ::number_book()
{
	int	nb;

	std::cout << CYAN << "Combien de livre voulez-vous " << RESET << std::endl;
	std::cin >> nb;
	std::cin.ignore();
	return (nb);
}

Book::Book()
{
	std::cout << BLEU << "constructeur initialize" << RESET << std::endl;
}

Book::~Book()
{
	std::cout << BLEU << "constructeur reset" << RESET << std::endl;
}
std::string Book::take_title()
{
	std::string new_title;
	std::cout << GREEN << "Titre du livre:" << RESET << std::endl;
	std::getline(std::cin, new_title);
	return (new_title);
}
std::string Book::take_author()
{
	std::string new_author;
	std::cout << GREEN << "Auteur:" << RESET << std::endl;
	std::getline(std::cin, new_author);
	return (new_author);
}
std::string Book::take_isbn()
{
	std::string new_isbn;
	std::cout << GREEN << "Code ISBN:" << RESET << std::endl;
	std::getline(std::cin, new_isbn);
	return (new_isbn);
}
void Book::set_all_data()
{
	title = Book::take_title();
	author = Book::take_author();
	isbn = Book::take_isbn();
}
void Book ::display_book(int nb)
{
	std::cout << GREEN << "Book " << RESET << BLEU << "[" << nb
		+ 1 << "]" << RESET << ":" << CYAN << title << RESET << std::endl;
	std::cout << GREEN << "Author " << RESET << BLEU << "[" << nb
		+ 1 << "]" << RESET << ":" << CYAN << author << RESET << std::endl;
	std::cout << GREEN << "isbn " << RESET << BLEU << "[" << nb
		+ 1 << "]" << RESET << ":" << CYAN << isbn << RESET << std::endl;
	std::cout << "\n" << std::endl;
}

void Book ::fill_book()
{
	Book	*tab;
	int		n;

	n = number_book();
	tab = new Book[n];
	for (int i = 0; i < n; i++)
	{
		tab[i].set_all_data();
		std::cout << "\n" << std::endl;
	}
	for (int i = 0; i < n; i++)
	{
		tab[i].display_book(i);
	}
	std::cout << BLEU << "tatal de livre  enrgistre: " << RESET << GREEN << n << RESET << std::endl;
	delete[] tab;
}
