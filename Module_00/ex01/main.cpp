/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 13:51:07 by timvancitte   #+#    #+#                 */
/*   Updated: 2020/11/03 17:00:22 by timvancitte   ########   odam.nl         */
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

std::string		Contact::getFirstName() const
{
	return (var_FirstName);
}
std::string		Contact::getLastName() const
{
	return (var_LastName);
}
std::string		Contact::getEmailAddress() const
{
	return (var_EmailAddress);
}
std::string		Contact::getPhoneNumber() const
{
	return (var_PhoneNumber);
}
std::string		Contact::getAge() const
{
	return (var_Age);
}
std::string		Contact::getFavoriteAnimal() const
{
	return (var_FavoriteAnimal);
}
std::string		Contact::getFavoriteSport() const
{
	return (var_FavoriteSport);
}
std::string		Contact::getFavoriteTreeType() const
{
	return (var_FavoriteTreeType);
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

void			Contact::printContact()
{
	std::cout << "First Name: " << getFirstName() << std::endl;
	std::cout << "Last Name: " << getLastName() << std::endl;
	std::cout << "EmailAddress: " << getEmailAddress() << std::endl;
	std::cout << "Phonenumber: " << getPhoneNumber() << std::endl;
	std::cout << "Age: " << getAge() << std::endl;
	std::cout << "Favorite Animal: " << getFavoriteAnimal() << std::endl;
	std::cout << "Favorite Sport: " << getFavoriteSport() << std::endl;
	std::cout << "Favorite Tree Type: " << getFavoriteTreeType() << std::endl;
}

std::string			Contact::readInput()
{
	std::string line;
	
	std::getline(std::cin, line);
	return (line);
}

void			Contact::printAndEditString(std::string tmp)
{
	std::cout << "|";
	if (tmp.length() > 10)
	{
		tmp.resize(9);
		tmp.resize(10, '.');
	}
	for(int i = tmp.length(); i < 10; i++)
		std::cout << " ";
	std::cout << tmp;
}

void			Contact::printDetails(int index)
{
	std::cout << "          " << index;
	printAndEditString(getFirstName());
	printAndEditString(getLastName());
	printAndEditString(getEmailAddress());
	std::cout << "|";
	std::cout << std::endl;
}

void			printPhonebook(Contact contacts[8], int index)
{
	int				index_input;
	std::string 	line;
	int				check;
	
	std::cout << "     index|" << "first name|"<< " last name|" << "  emailaddress\n";
	for (int j = 0; j < index; j++)
	{
		std::cout << "|**********|**********|**********|**********|\n";
		contacts[j].printDetails(j);
	}
	std::cout << "Please tell the program which contact you would like to see by typing in its index: ";
	std::getline(std::cin, line);
	check = 0;
	for (unsigned long i = 0; i < line.length(); i++)
	{
		if (isdigit(line[i]) == false)
		{
			check = 1;
			std::cout << "Not a valid index, please choose an index indicated on the screen.\n" 
			<< "By index we mean a decimal digit between 0 and 8\n" 
			<< "Please type {search}, and try again.\n";
			break ;
		}
	}
	if (line.length() > 2)
	{
		std::cout << "Unfortunately [" << line << "] is not a valid index\n";
		check = 1;
	}
	if (check == 0)
	{
		index_input = stoi(line);
		if (index_input < 0 || index_input > 8)
			std::cout << "Unfortunately [" << index_input << "] is not a valid index\n";
		else if (index_input >= index)
			std::cout << "Unfortunately [" << index_input << "] index doesn't exist yet, please use the command {add}.\n";
		else 
			contacts[index_input].printContact();
	}
}

std::string		changeCommand(std::string &command)
{
	std::cout << "Enter one of the following commands {add}, {search} or {exit}: ";
	getline(std::cin, command);
	for (int i = 0; command[i]; i++)
		command[i] = static_cast<char>(tolower(command[i]));
	return (command);
}

int				main (void)
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
			std::cout << "No contacts in phonebook please add a contact by typing 'ADD' or 'add'.\n";
		else if (command == "search")
			printPhonebook(contacts, index);
		else
			std::cout << "Please type a valid command {add}, {search} or {exit}\n";
		
	}
}
