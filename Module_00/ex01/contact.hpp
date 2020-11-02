/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 13:43:17 by timvancitte   #+#    #+#                 */
/*   Updated: 2020/11/02 17:45:03 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>
#include <sstream>

class Contact
{
private:
	std::string var_FirstName;
	std::string	var_LastName;
	std::string	var_EmailAddress;
	std::string	var_PhoneNumber;
	std::string var_Age;
	std::string var_FavoriteAnimal;
	std::string var_FavoriteSport;
	std::string	var_FavoriteTreeType;

private:
	void addFirstName(const std::string &firstName);
	void addLastName(const std::string &lastName);
	void addEmailAddress(const std::string &emailAddress);
	void addPhoneNumber(const std:: string &phoneNumber);
	void addAge(const std::string &age);
	void addFavoriteAnimal(const std::string &favoriteAnimal);
	void addFavoriteSport(const std::string &favoriteSport);
	void addFavoriteTreeType(const std::string &favoriteTreeType);
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getEmailAddress() const;
	std::string getPhoneNumber() const;
	std::string getAge() const;
	std::string getFavoriteAnimal() const;
	std::string getFavoriteSport() const;
	std::string getFavoriteTreeType() const;
public:
	Contact(
	const std::string &firstName = "", 
	const std::string &lastName = "", 
	const std::string &emailAddress= "", 
	const std::string &phoneNumber = "", 
	const std::string &age = "", 
	const std::string &favoriteAnimal = "", 
	const std::string &favoriteSport = "", 
	const std::string favoriteTreeType = "");
	
public:
	void 		addContact();
	std::string	readInput();
	void		storeFirstName();
	
};

#endif
