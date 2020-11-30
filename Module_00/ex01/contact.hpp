/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 13:43:17 by timvancitte   #+#    #+#                 */
/*   Updated: 2020/11/30 13:33:36 by timvancitte   ########   odam.nl         */
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
	std::string var_Nickname;
	std::string	var_Login;
	std::string	var_PostalAddress;
	std::string var_EmailAddress;
	std::string var_PhoneNumber;
	std::string var_BirthdayDate;
	std::string	var_FavoriteMeal;
	std::string	var_UnderwearColor;
	std::string	var_DarkestSecret;

private:
	void addFirstName(const std::string &firstName);
	void addLastName(const std::string &lastName);
	void addNickname(const std::string &nickname);
	void addLogin(const std::string &login);
	void addPostalAddress(const std::string &postalAddress);
	void addEmailAddress(const std::string &emailAddrress);
	void addPhoneNumber(const std::string &phoneNumber);
	void addBirthdayDate(const std::string &birthdayDate);
	void addFavoriteMeal(const std::string &favoriteMeal);
	void addUnderwearColor(const std::string &underwearColor);
	void addDarkestSecret(const std::string &darkestSecret);
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickname() const;
	std::string getLogin() const;
	std::string getPostalAddress() const;
	std::string getEmailAddress() const;
	std::string getPhoneNumber() const;
	std::string getBirthdayDate() const;
	std::string getFavoriteMeal() const;
	std::string getUnderwearColor() const;
	std::string getDarkestSecret() const;
	
public:
	void 		addContact();
	std::string	readInput();
	void		storeFirstName();
	void		printDetails(int index);
	void		printAndEditString(std::string line);
	void		printContact();
	void		printHeader();
};

#endif
