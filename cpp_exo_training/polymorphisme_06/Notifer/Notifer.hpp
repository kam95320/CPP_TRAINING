/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Notifer.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahoumou <kahoumou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:56:48 by kahoumou          #+#    #+#             */
/*   Updated: 2025/05/07 17:10:16 by kahoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NOTIFER_HPP
# define NOTIFER_HPP
# include <iostream>
# include <string>
# define RED "\033[31m"
# define GREEN "\033[32m"
# define CYAN "\033[36m"
# define BLEU "\033[34m"
# define RESET "\033[0m"
# define ORANGE "\033[33m"

class Notifer
{
    public:
	virtual void send(const std::string &message) const = 0;
};
#endif
