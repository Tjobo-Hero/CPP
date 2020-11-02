/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 13:51:07 by timvancitte   #+#    #+#                 */
/*   Updated: 2020/11/02 17:46:48 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <iostream>
#include <string>

void	Contact::addFirstName(const std::string &firstName)
{
	var_FirstName = firstName;
}
void	Contact::addLastName(const std::string &lastName)
{
	var_LastName = lastName;
}
void	Contact::addEmailAddress(const std::string &emailAddress)
{
	var_EmailAddress = emailAddress;
}
void	Contact::addPhoneNumber(const std::string &phoneNumber)
{
	var_PhoneNumber = phoneNumber;
}
void	Contact::addAge(const std::string &age)
{
	var_Age = age;
}
void	Contact::addFavoriteAnimal(const std::string &favoriteAnimal)
{
	var_FavoriteAnimal = favoriteAnimal;
}
void	Contact::addFavoriteSport(const std::string &favoriteSport)
{
	var_FavoriteSport = favoriteSport;
}
void Contact::addFavoriteTreeType(const std::string &favoriteTreeType)
{
	var_FavoriteTreeType = favoriteTreeType;
}

std::string			Contact::readInput()
{
	std::string line;
	
	std::getline(std::cin, line);
	return (line);
}
void			Contact::addContact()
{
	std::cout << "Please Enter First Name: ";
	addFirstName(readInput());
	std::cout << "Please Enter Last Name: ";
	addLastName(readInput());
	std::cout << "Please EmailAddress: ";
	addEmailAddress(readInput());
	std::cout << "Please Enter Phonenumber: ";
	addPhoneNumber(readInput());
	std::cout << "Please Enter Age: ";
	addAge(readInput());
	std::cout << "Please Enter Favorite Animal: ";
	addFavoriteAnimal(readInput());
	std::cout << "Please Enter Favorite Sport: ";
	addFavoriteSport(readInput());
	std::cout << "Please Enter Favorite Tree Type: ";
	addFavoriteTreeType(readInput());
}


std::string		changeCommand(std::string &command)
{
	std::cout << "Enter one of the following commands {add}, {search} or {exit}: ";
	getline(std::cin, command);
	for (int i = 0; command[i]; i++)
		command[i] = static_cast<char>(tolower(command[i]));
	return (command);
}

int main (void)
{
	Contact		contacts[8];
	std::string command;
	int 		index = 0;

	while(1)
	{
		command.clear();
		changeCommand(command);
		if (command == "exit")
			return (0);
		else if (command == "add" && index >= 8)
			std::cout << "Because this is crappy phonebook software you can only add 8 contacts, and right now it's full.\n";
		else if (command == "add")
			contacts[index++].addContact();
		else if (command == "search" && index == 0)
			std::cout << "No contacts in phonebook please add a contact by typing 'ADD' or 'add'.\n\n";
		// else if (command == "search")
		// 	std::
			
	}
	
	
}
