/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 13:51:07 by timvancitte   #+#    #+#                 */
/*   Updated: 2020/11/30 13:56:08 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>

void	Contact::addFirstName(const std::string &firstName)
{
	var_FirstName = firstName;
}
void	Contact::addLastName(const std::string &lastName)
{
	var_LastName = lastName;
}
void	Contact::addNickname(const std::string &nickname)
{
	var_Nickname = nickname;
}
void	Contact::addLogin(const std::string &login)
{
	var_Login = login;
}
void	Contact::addPostalAddress(const std::string &postalAddress)
{
	var_PostalAddress = postalAddress;
}
void	Contact::addEmailAddress(const std::string &emailAddress)
{
	var_EmailAddress = emailAddress;
}
void	Contact::addPhoneNumber(const std::string &phoneNumber)
{
	var_PhoneNumber = phoneNumber;
}
void	Contact::addBirthdayDate(const std::string &birthdayDate)
{
	var_BirthdayDate = birthdayDate;
}
void	Contact::addFavoriteMeal(const std::string &favoriteMeal)
{
	var_FavoriteMeal = favoriteMeal;
}
void	Contact::addUnderwearColor(const std::string &underwearColor)
{
	var_UnderwearColor = underwearColor;
}
void	Contact::addDarkestSecret(const std::string &darkestSecret)
{
	var_DarkestSecret = darkestSecret;
}

std::string		Contact::getFirstName() const
{
	return (var_FirstName);
}
std::string		Contact::getLastName() const
{
	return (var_LastName);
}
std::string		Contact::getNickname() const
{
	return (var_Nickname);
}
std::string		Contact::getLogin() const
{
	return (var_Login);
}
std::string		Contact::getPostalAddress() const
{
	return (var_PostalAddress);
}
std::string		Contact::getEmailAddress() const
{
	return (var_EmailAddress);
}
std::string		Contact::getPhoneNumber() const
{
	return (var_PhoneNumber);
}
std::string		Contact::getBirthdayDate() const
{
	return (var_BirthdayDate);
}
std::string		Contact::getFavoriteMeal() const
{
	return (var_FavoriteMeal);
}
std::string		Contact::getUnderwearColor() const
{
	return (var_UnderwearColor);
}
std::string		Contact::getDarkestSecret() const
{
	return (var_DarkestSecret);
}

void			Contact::addContact()
{
	std::cout << "Please Enter First Name: ";
	addFirstName(readInput());
	std::cout << "Please Enter Last Name: ";
	addLastName(readInput());
	std::cout << "Please Enter Nickname: ";
	addNickname(readInput());
	std::cout << "Please Enter Login: ";
	addLogin(readInput());
	std::cout << "Please Enter Postal Address: ";
	addPostalAddress(readInput());
	std::cout << "Please Enter Email Address: ";
	addEmailAddress(readInput());
	std::cout << "Please Enter Phone Number: ";
	addPhoneNumber(readInput());
	std::cout << "Please Enter Birthday Date: ";
	addBirthdayDate(readInput());
	std::cout << "Please Enter Favortite Meal: ";
	addFavoriteMeal(readInput());
	std::cout << "Please Enter Underwear Color: ";
	addUnderwearColor(readInput());
	std::cout << "Please Enter Darkest Secret: ";
	addDarkestSecret(readInput());
}

void			Contact::printContact()
{
	std::cout << "First Name: " << getFirstName() << std::endl;
	std::cout << "Last Name: " << getLastName() << std::endl;
	std::cout << "Nickname: " << getNickname() << std::endl;
	std::cout << "Login: " << getLogin() << std::endl;
	std::cout << "Postal Address: " << getPostalAddress() << std::endl;
	std::cout << "Email Address: " << getEmailAddress() << std::endl;
	std::cout << "Phone Number: " << getPhoneNumber() << std::endl;
	std::cout << "Birthday Date: " << getBirthdayDate() << std::endl;
	std::cout << "Favorite Meal: " << getFavoriteMeal() << std::endl;
	std::cout << "Underwear Color: " << getUnderwearColor() << std::endl;
	std::cout << "Darkest Secret: " << getDarkestSecret() << std::endl;
}

std::string			Contact::readInput()
{
	std::string line;
	
	std::getline(std::cin, line);
	return (line);
}

void			Contact::printAndEditString(std::string line)
{
	std::cout << "|";
	if (line.length() > 10)
	{
		line.resize(9);
		line.resize(10, '.');
		std::cout << line;
	}
	else
		std::cout << std::setw(10) << std::setfill(' ') << line;
}

void			Contact::printDetails(int index)
{
	std::cout << std::setw(10) << std::setfill(' ') << index;
	printAndEditString(getFirstName());
	printAndEditString(getLastName());
	printAndEditString(getNickname());
	std::cout << "|";
	std::cout << std::endl;
}

void			printHeader(void)
{
	std::cout << std::setw(11) << std::setfill(' ') << "index|";
	std::cout << std::setw(11) << std::setfill(' ') << "first name|";
	std::cout << std::setw(11) << std::setfill(' ') << "last name|";
	std::cout << std::setw(11) << std::setfill(' ') << "nickname|" << std::endl;
}

void			printPhonebook(Contact contacts[8], int index)
{
	int				index_input;
	std::string 	line;
	int				check;
	
	printHeader();
	for (int j = 1; j < index; j++)
	{
		std::cout << "**********|**********|**********|**********|\n";
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
			<< "By index we mean a decimal digit between 1 and 8.\n" 
			<< "Please type {search}, and try again.\n";
			break ;
		}
	}
	if (line.length() > 2 && check == 0)
	{
		std::cout << "Unfortunately [" << line << "] is not a valid index\n";
		check = 1;
	}
	if (check == 0)
	{
		index_input = std::stoi(line);
		if (index_input < 1 || index_input > 8)
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
	std::getline(std::cin, command);
	for (int i = 0; command[i]; i++)
		command[i] = static_cast<char>(std::tolower(command[i]));
	return (command);
}

int				main (void)
{
	Contact		contacts[9];
	std::string command;
	int 		index = 1;

	while(1)
	{
		command.clear();
		changeCommand(command);
		if (command == "exit")
			return (0);
		else if (command == "add" && index > 8)
			std::cout << "Because this is crappy phonebook software you can only add 8 contacts, your phonebook is full.\n";
		else if (command == "add")
			contacts[index++].addContact();
		else if (command == "search" && index == 1)
			std::cout << "No contacts in phonebook please add a contact by typing 'ADD' or 'add'.\n";
		else if (command == "search")
			printPhonebook(contacts, index);
		else
			std::cout << "Please type a valid command {add}, {search} or {exit}\n";
	}
}
