/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Admin.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahoumou <kahoumou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 13:31:04 by kahoumou          #+#    #+#             */
/*   Updated: 2025/05/06 14:23:39 by kahoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADMIN_HPP
# define ADMIN_HPP
# include <iostream>
# include <string>
#include "User.hpp"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define CYAN "\033[36m"
# define BLEU "\033[34m"
# define RESET "\033[0m"
# define ORANGE "\033[33m"


class Admin : public User
{
  private:
	std::string role;

  public:
	Admin();
	~Admin();
	void set_role(std::string new_role);
	std::string get_role() const;
	void display_admin();
};

#endif
