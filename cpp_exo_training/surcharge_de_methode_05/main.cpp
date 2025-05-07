/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahoumou <kahoumou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 13:50:52 by kahoumou          #+#    #+#             */
/*   Updated: 2025/05/07 14:17:18 by kahoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Print.hpp"

int	main(void)
{
	Print print;
	print.display("yes it's  message", 0);
	print.display("yes it's  message", 5);
	
	print.display("", 0);
	return (0);
}