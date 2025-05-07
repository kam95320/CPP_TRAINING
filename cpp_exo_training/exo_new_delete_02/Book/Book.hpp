/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Book.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahoumou <kahoumou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 18:28:34 by kahoumou          #+#    #+#             */
/*   Updated: 2025/05/01 14:18:47 by kahoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOOK_HPP
# define BOOK_HPP
# define RED "\033[31m"
# define GREEN "\033[32m"
# define CYAN "\033[36m"
# define BLEU "\033[34m"
# define RESET "\033[0m"
# define ORANGE "\033[33m"
# include <iostream>
# include <string>
class Book
{
  private:
	std::string title;
	std::string author;
	std::string isbn;

  public:
	Book();
	~Book();
	std::string take_title();
	std::string take_author();
	std::string take_isbn();
	void fill_book();
	void display_book(int nb);
	int  number_book();
	void set_all_data();
	
};
#endif