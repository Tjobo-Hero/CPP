/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/18 16:08:18 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/25 11:05:29 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int			main(void)
{
	srand ( time(NULL) );
	
	FragTrap f1("Crazy person");
    FragTrap f2(f1);
	FragTrap f3("David");
	FragTrap f4;
	
	ScavTrap s1("Oprah");
	ScavTrap s2(s1);
	ScavTrap s3("Chi chi");
	ScavTrap s4("Rick3");
	
	NinjaTrap n1("Akasuki");
	NinjaTrap n2(n1);
	NinjaTrap n3("Hattori Hanzo");
	NinjaTrap n4("Momochi Sandayu");

	SuperTrap su1("YODA");
	SuperTrap su2("Walter Sobchak");
	SuperTrap su3(su2);
	SuperTrap su4("The Man With No Name");
	
	
	// // FragTrap
	f4 = f3;
	f1 = f3;
	
	// // ScavTrap
	s2 = s1;

	// //NinjaTrap
	n1 = n3;

	// //Supertrap
	su2 = su4;

	// std::cout << "\n>>>>>>>FR4G-TP<<<<<<<\n" << std::endl;
    
    // f1.vaulthunter_dot_exe("Bartel-Jaap");
    // f2.vaulthunter_dot_exe("DJ Jean");
    // f3.vaulthunter_dot_exe("Mia Wallace");
    // f1.vaulthunter_dot_exe("Vincent Vega");
    // f2.vaulthunter_dot_exe("Richard Gecko");
    // f3.rangedAttack("Beatrix Kiddo"); 
    // f2.rangedAttack("Elle Driver");
    // f1.beRepaired(50);
	// f4.vaulthunter_dot_exe("Richard Gecko");
    // f4.rangedAttack("Beatrix Kiddo"); 
    // f4.rangedAttack("Elle Driver");
    // f4.beRepaired(50);
    // f1.meleeAttack("Jules Winnfield");
    // f2.takeDamage(10);
    // f3.vaulthunter_dot_exe("Arnold Schwarzenegger");
	// f3.re_energize(100);
    // f3.takeDamage(4);
   	// f1.vaulthunter_dot_exe("Bill");
    // f2.vaulthunter_dot_exe("Vincenzo Coccotti");
    // f3.takeDamage(40);
    // f1.rangedAttack("Gogo Yubari");

	// std::cout << "\n>>>>>>>SC4V-TP<<<<<<<\n" << std::endl;

	// s1.challengeNewcomer("Edna");
    // s2.challengeNewcomer("Randle McMurphy");
    // s3.challengeNewcomer("Optimus Prime");
    // s1.challengeNewcomer("Norman Bates");
    // s2.challengeNewcomer("A Minion");
    // s3.rangedAttack("Maximus"); 
    // s2.rangedAttack("Legolas");
    // s1.beRepaired(50);
	// s4.challengeNewcomer("Groot");
    // s4.rangedAttack("Ethan Hunt"); 
    // s4.rangedAttack("Bane");
    // s4.beRepaired(50);
    // s1.meleeAttack("Samwise Gamgee");
    // s2.takeDamage(10);
	// s2.takeDamage(2);
    // s3.challengeNewcomer("Donnie Darko");
	// s3.re_energize(100);
    // s3.takeDamage(4);
   	// s1.challengeNewcomer("Captain Kirk");
    // s2.challengeNewcomer("Tony Montana");
    // s3.takeDamage(40);
    // s1.rangedAttack("Neo");

	// std::cout << "\n>>>>>>>NINJ4-TP<<<<<<<\n" << std::endl;

	// n1.ninjaShoebox(s1);
    // n2.ninjaShoebox(f2);
    // n3.ninjaShoebox(boss);
    // n1.ninjaShoebox(n1);
    // n2.ninjaShoebox(s1);
    // n3.rangedAttack("Maximus"); 
    // n2.rangedAttack("Legolas");
    // n1.beRepaired(50);
	// n4.ninjaShoebox(boss);
    // n4.rangedAttack("Ethan Hunt"); 
    // n4.rangedAttack("Bane");
    // n4.beRepaired(50);
    // n1.meleeAttack("Samwise Gamgee");
    // n2.takeDamage(10);
	// n2.takeDamage(2);
    // n3.ninjaShoebox(n4);
	// n3.re_energize(100);
    // n3.takeDamage(4);
   	// n1.ninjaShoebox(f3);
    // n2.ninjaShoebox(s4);
    // n3.takeDamage(40);
    // n1.rangedAttack("Neo");

	std::cout << "\n>>>>>>>S4PER-TP<<<<<<<\n" << std::endl;

	su1.printValues();

	su1.vaulthunter_dot_exe("Peter Venkman");
    su2.vaulthunter_dot_exe("Gandalf");
    su3.vaulthunter_dot_exe("Snake Plissken");
	su1.ninjaShoebox(s1);
    su4.ninjaShoebox(f2);
    su3.ninjaShoebox(n1);
	

	std::cout << "\n>>>>>>>DESTRUCTOR<<<<<<\n" << std::endl;
 	return(0);
}