/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahoumou <kahoumou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 13:31:08 by kahoumou          #+#    #+#             */
/*   Updated: 2025/05/06 14:18:16 by kahoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Admin.hpp"

int	main(void)
{
	Admin admin;
	admin.set_username("Kamel");
	admin.set_age(28);
	admin.set_role("Superviseur");

	admin.display_admin();
}