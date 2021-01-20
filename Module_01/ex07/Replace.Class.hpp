/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Replace.Class.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/14 13:06:17 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/20 10:40:07 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>

class Replace
{
	
private:
		std::ofstream	_outgoingFile;
		std::ifstream	_incomingFile;
		std::string		_filename;
		std::string		_newFilename;
		std::string		_find;
		std::string		_replace;

public:

	Replace(void);
	~Replace(void);
	
	void	setReplace(std::string File, std::string S1, std::string S2);
	void	openReplace(void);
	void	magicReplace(void);

};

#endif
