/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Replace.Class.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/14 13:15:50 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/18 11:15:20 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.Class.hpp"

Replace::Replace(void)
{
	return;
}

Replace::~Replace(void)
{
	return;
}

void		Replace::setReplace(std::string File, std::string S1, std::string S2)
{
	_filename = File;
	_newFilename = _filename + ".replace";
	_find = S1;
	std::cout << "FIND: [" << _find << "]" << std::endl;
	_replace = S2;	
	std::cout << "The following data has been succesfully received:";
	std::cout << " [" << _filename << "]" << " [" << _find << "]" << " [" << _replace << "]" << std::endl;
	std::cout << "Coverting [" << _filename << "] to [" << _newFilename << "] = SUCCESS.\n" << std::endl;
	
	return;
}

void		Replace::openReplace(void)
{
	std::cout << "Trying to open intcoming file [" << _filename << "]." << std::endl;
	_incomingFile.open(_filename);
	if(!_incomingFile.is_open())
	{
		std::cout << "Opening [" << _filename << "] = FAILURE.\nPlease check the file name and try again." << std::endl;
		exit(EXIT_FAILURE);
	}
	std::cout << "Open incoming file [" << _filename << "] = SUCCESS\n" << std::endl;
	
	std::cout << "Trying to open outgoing file [" << _newFilename << "]." << std::endl;
	_outgoingFile.open(_newFilename);
	if (!_outgoingFile.is_open())
	{
		std::cout << "Opeing [" << _newFilename << "] = FAILURE.\n Apologies, please try again." << std::endl;
		exit(EXIT_FAILURE);
	}
	std::cout << "Open outgoing file [" << _newFilename << "] = SUCCESS.\nNow it's time for some magic.\n" << std::endl;
	return;
}

void	Replace::magicReplace(void)
{
	std::cout << "Replacing [" << _find << "] for [" << _replace << "] from file: [" << _filename << "] in to [" << _newFilename << "]" << std::endl;

	std::string		line;
	size_t			pos = 0;

	while(std::getline(_incomingFile, line))
	{
		while(line.find(_find) != std::string::npos)
		{
			pos = line.find(_find);
			line.replace(pos, _find.size(), _replace);
			pos += _replace.length();
			_outgoingFile << line.substr(0, pos);
			line = line.substr(pos);	
		}
		_outgoingFile << line;
		_outgoingFile << std::endl;
		
	}
	std::cout << "Closing: [" << _filename << "] and [" << _newFilename << "].\n" << std::endl;
	_incomingFile.close();
	_outgoingFile.close();
	std::cout << "Please see result in [" << _newFilename << "]." << std::endl;
	return;
}
