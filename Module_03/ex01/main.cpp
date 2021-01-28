/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/18 16:08:18 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/28 12:37:03 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

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
	

	s2 = s1;
	f4 = f3;
	f1 = f3;

	std::cout << "\n>>>>>>>FR4G-TP<<<<<<<\n" << std::endl;
    
	f1.beRepaired(-1);
	f1.takeDamage(-1);
    f1.vaulthunter_dot_exe("Bartel-Jaap");
    f2.vaulthunter_dot_exe("DJ Jean");
    f3.vaulthunter_dot_exe("Mia Wallace");
    f1.vaulthunter_dot_exe("Vincent Vega");
    f2.vaulthunter_dot_exe("Richard Gecko");
    f3.rangedAttack("Beatrix Kiddo"); 
    f2.rangedAttack("Elle Driver");
    f1.beRepaired(50);
	f4.vaulthunter_dot_exe("Richard Gecko");
    f4.rangedAttack("Beatrix Kiddo"); 
    f4.rangedAttack("Elle Driver");
    f4.beRepaired(50);
    f1.meleeAttack("Jules Winnfield");
    f2.takeDamage(10);
    f3.vaulthunter_dot_exe("Arnold Schwarzenegger");
	f3.re_energize(100);
    f3.takeDamage(4);
   	f1.vaulthunter_dot_exe("Bill");
    f2.vaulthunter_dot_exe("Vincenzo Coccotti");
    f3.takeDamage(40);
    f1.rangedAttack("Gogo Yubari");

	std::cout << "\n>>>>>>>SC4V-TP<<<<<<<\n" << std::endl;

	s1.challengeNewcomer("Edna");
    s2.challengeNewcomer("Randle McMurphy");
    s3.challengeNewcomer("Optimus Prime");
    s1.challengeNewcomer("Norman Bates");
    s2.challengeNewcomer("A Minion");
    s3.rangedAttack("Maximus"); 
    s2.rangedAttack("Legolas");
    s1.beRepaired(50);
	s4.challengeNewcomer("Groot");
    s4.rangedAttack("Ethan Hunt"); 
    s4.rangedAttack("Bane");
    s4.beRepaired(50);
    s1.meleeAttack("Samwise Gamgee");
    s2.takeDamage(10);
	s2.takeDamage(2);
    s3.challengeNewcomer("Donnie Darko");
	s3.re_energize(100);
    s3.takeDamage(4);
   	s1.challengeNewcomer("Captain Kirk");
    s2.challengeNewcomer("Tony Montana");
    s3.takeDamage(40);
    s1.rangedAttack("Neo");
	
 	return(0);
}