/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahoumou <kahoumou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 17:00:10 by kahoumou          #+#    #+#             */
/*   Updated: 2025/05/07 17:14:15 by kahoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Derive.hpp"

int	main(void)
{
	Notifer *mail = new EmailNotifier;
	Notifer *sms = new SMSlNotifier;
	Notifer *push = new PushlNotifier;
	mail->send("envoie un email");
	sms->send("envoie un SMS");
    push->send("envoie une notification push");
}