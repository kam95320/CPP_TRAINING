/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   User.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahoumou <kahoumou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:24:34 by kahoumou          #+#    #+#             */
/*   Updated: 2025/05/06 14:15:35 by kahoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef USER_H
# define USER_H
# include <iostream>
# include <string>
# define RED "\033[31m"
# define GREEN "\033[32m"
# define CYAN "\033[36m"
# define BLEU "\033[34m"
# define RESET "\033[0m"
# define ORANGE "\033[33m"

class User
{
  protected:
	std::string username;
	int age;

  public:
	User();
	~User();
	std::string get_username() const;
	void set_username(const std::string &new_username);
    void set_age(const int &new_age);
    int get_age() const;
};

#endif