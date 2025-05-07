/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dershape.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahoumou <kahoumou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 17:28:05 by kahoumou          #+#    #+#             */
/*   Updated: 2025/05/07 17:51:21 by kahoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DERSHAPE
# define DERSHAPE
# include "Shape.hpp"
/* Créer un programme qui gère différentes formes géométriques (carré, cercle,
	rectangle) en utilisant le polymorphisme.
🧩 Plan de l'exercice :

	Classe de base : Shape

		Méthode virtuelle pure :

			virtual void draw() const = 0;

		Méthode virtuelle pure pour le calcul de l'aire :

			virtual double area() const = 0;

	Classes dérivées :

		Square :

			Attribut : side (côté).

			Redéfinition de draw() : afficher "Dessine un carré".

			Redéfinition de area() : retourner side * side.

		Circle :

			Attribut : radius (rayon).

			Redéfinition de draw() : afficher "Dessine un cercle".

			Redéfinition de area() : retourner 3.14159 * radius * radius.

		Rectangle :

			Attributs : width et height.

			Redéfinition de draw() : afficher "Dessine un rectangle".

			Redéfinition de area() : retourner width * height. */
class square : public Shape
{
	void draw() const
	{
		std::cout << ORANGE << "Dessine un carré" << RESET << std::endl;
	}
};



#endif