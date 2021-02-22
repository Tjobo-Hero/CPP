/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/19 16:51:44 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/22 13:02:57 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

struct			Data
{
	std::string	s1;
	int			n;
	std::string	s2;
};

// This function will randomize rand by passing the current time
void	setRand(void)
{
	static bool random = false;

	if (!random)
	{
		srand(time(NULL));
		random = true;
	}
	return;
}

// This function will return the address on the heap of a sequence
// of bytes that represent a piece of serialized data. 
void*	serialize(void)
{
	const char	randomAlphaNumeric[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *randomSequence = new char[20];
	
	std::cout << "\nSerialize function called" << std::endl;
	std::cout << "S1: [";
	
	for (int i = 0; i < 8; i++)
	{
		randomSequence[i] = randomAlphaNumeric[rand() % (sizeof(randomAlphaNumeric) - 1)];
		std::cout << randomSequence[i];
	}
	std::cout << "]" << std::endl;
	
	*reinterpret_cast<int*>(randomSequence + 8) = std::rand();
	std::cout << "N:  [" << *reinterpret_cast<int*>(randomSequence + 8) << "]" << std::endl;
	
	std::cout << "S2: [";
	for (int i = 12; i < 20; i++)
	{
		randomSequence[i] = randomAlphaNumeric[rand() % (sizeof(randomAlphaNumeric) - 1)];
		std::cout << randomSequence[i];
	}
	std::cout << "]" << std::endl;
	
	return (reinterpret_cast<void*>(randomSequence));
}

//This function will deserialize the raw data too Data structure defined as struct..
Data*	deserialize(void *raw)
{
	Data *dataTmp = new Data();

	std::cout << "\nDeserialize function called" << std::endl;
	dataTmp->s1 = std::string(reinterpret_cast<char*>(raw), 8);
	dataTmp->n = *(reinterpret_cast<int*>(raw) + 2);
	dataTmp->s2 = std::string(reinterpret_cast<char*>(raw) + 12, 8);
		
	return (dataTmp);
}

int		main(void)
{
	setRand();

	void *raw = serialize();
	Data *dataPtr = deserialize(raw);

	std::cout << "S1: [" << dataPtr->s1 << "]" << "   String len: [" << dataPtr->s1.length() << "]" << std::endl;
	std::cout << "N:  [" << dataPtr->n << "] " << "Int len:    [" << sizeof(dataPtr->n) << "]" << std::endl;
	std::cout << "S2: [" << dataPtr->s2 << "]" << "   String len: [" << dataPtr->s2.length() << "]" << std::endl;
	std::cout << "\nTotal of S1 + N + S2 = " << std::endl;
	std::cout << sizeof(dataPtr->s1) << " + " << sizeof(dataPtr->n) << " + " << sizeof(dataPtr->s2) << ": ";
	std::cout << sizeof(dataPtr->s1) + sizeof(dataPtr->n) + sizeof(dataPtr->s2) << std::endl;

	delete static_cast<char*>(raw);
	delete dataPtr;
	system("leaks serialization | grep bytes");
	return (0);
}
