/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 10:03:42 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/11 12:11:36 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "turismo.hpp"
#include "deportivo.hpp"
#include "furgoneta.hpp"

int main()
{
	std::cout << "|----Herencia Publica----|" << std::endl;
	turismo *t1 = new turismo("Audi", "Blanco", "A1", 3);
	std::cout << "Marca : " << t1->getMarca() << std::endl;
	std::cout << "Color : " << t1->getColor() << std::endl;
	std::cout << "Modelo : " << t1->returnModelo() << std::endl;
	std::cout << "Numero de Puertas : " << t1->getNumeroPuertas() << std::endl;
	delete t1;

	std::cout << std::endl;
	std::cout << "|----Herencia Privada----|" << std::endl;
	deportivo *d1 = new deportivo("Audi", "Rojo", "R8", 16);
	std::cout << "Marca : " << d1->retornarMarca() << std::endl;
	std::cout << "Modelo : " << d1->retornarModelo() << std::endl;
	std::cout << "Cilindrada : " << d1->getCilindros() << std::endl;
	delete d1;

	std::cout << std::endl;
	std::cout << "|----Herencia Protegida----|" << std::endl;
	furgoneta *f1 = new furgoneta("Mercedez", "Blanco", "K8", 1200);
	std::cout << "Carga maxima : " << f1->getCarga() << std::endl;
	std::cout << "Marca : " << f1->retornarMarca() << std::endl;
	delete f1;
	return (0);
}
