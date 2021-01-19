/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/18 16:08:18 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/19 15:58:32 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int			main(void)
{
	srand ( time(NULL) );

	FragTrap f1("Crazy person");
    FragTrap f2(f1);
	FragTrap f3("David");

	f1 = f3;

    
    f1.vaulthunter_dot_exe("Bartel-Jaap");
    f2.vaulthunter_dot_exe("DJ Jean");
    f3.vaulthunter_dot_exe("Mia Wallace");
    f1.vaulthunter_dot_exe("Vincent Vega");
    f2.vaulthunter_dot_exe("Richard Gecko");
    f3.rangedAttack("Beatrix Kiddo"); 
    f2.rangedAttack("Elle Driver");
    f1.beRepaired(50);
    f1.meleeAttack("Jules Winnfield");
    f2.takeDamage(10);
    f3.vaulthunter_dot_exe("Arnold Schwarzenegger");
	f3.re_energize(100);
    f3.takeDamage(4);
   	f1.vaulthunter_dot_exe("Bill");
    f2.vaulthunter_dot_exe("Vincenzo Coccotti");
    f3.takeDamage(40);
    f1.rangedAttack("Gogo Yubari"); 
 	return(0);
}