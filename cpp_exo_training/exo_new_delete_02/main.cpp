/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahoumou <kahoumou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:17:25 by kahoumou          #+#    #+#             */
/*   Updated: 2025/04/30 10:04:53 by kahoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"



// Combien de contacts voulez-vous créer ? 2
// Entrez le nom du contact 1 : Dupont
// Entrez le prénom du contact 1 : Jean
// Entrez le numéro du contact 1 : 0612345678

// Entrez le nom du contact 2 : Durand
// Entrez le prénom du contact 2 : Claire
// Entrez le numéro du contact 2 : 0698765432

// Contact 1:
// Nom : Dupont
// Prénom : Jean
// Téléphone : 0612345678

// Contact 2:
// Nom : Durand
// Prénom : Claire
// Téléphone : 0698765432

// Destructeurs appelés



int main()
{
    Contact contact;
    contact.print_all_conatct();    
    contact.~Contact();
}
