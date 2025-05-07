/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Derive.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahoumou <kahoumou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:55:12 by kahoumou          #+#    #+#             */
/*   Updated: 2025/05/07 17:11:32 by kahoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DERIVE_HPP
# define DERIVE_HPP
# include "Notifer.hpp"
/*
	Classes dérivées :

		EmailNotifier

			Méthode send() envoie un email.

		SMSNotifier

			Méthode send() envoie un SMS.

		PushNotifier

			Méthode send() envoie une notification push.
 */
class EmailNotifier : public Notifer
{
  public:
	void send(const std::string &message) const
	{
		std::cout << CYAN << message << RESET << std::endl;
	}
};
class SMSlNotifier : public Notifer
{
  public:
	void send(const std::string &message) const
	{
		std::cout << GREEN << message << RESET << std::endl;
	}
};
class PushlNotifier : public Notifer
{
  public:
	void send(const std::string &message) const
	{
		std::cout << ORANGE << message << RESET << std::endl;
	}
};
#endif