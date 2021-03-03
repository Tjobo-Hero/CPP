/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/02 13:31:01 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/03/03 13:36:31 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

void	testList(void)
{
	std::cout << "\n-----Test with std::list-----" << std::endl;
	std::list<int> mstack;
	
	mstack.push_back(5);
	mstack.push_back(17);
	std::cout << *mstack.rbegin() << std::endl;
	mstack.pop_back();
	std::cout << mstack.size() << std::endl;
	mstack.push_back(3); mstack.push_back(5); mstack.push_back(737); //[...] mstack.push(0);
	std::list<int>::iterator it = mstack.begin(); std::list<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
	++it; 
	}
	std::list<int> s(mstack);
}

void	subject_main(void)
{
	std::cout << "\n-----Subject Main test-----" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3); mstack.push(5); mstack.push(737); //[...] mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin(); MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
	++it; 
	}
	std::stack<int> s(mstack);
}
int		main(void)
{

	subject_main();
	testList();
	MutantStack<int> mstack;
	MutantStack<int> mstack1;
	MutantStack<int> mstack4;
	
	int i = 0;
	std::cout << "\n-----Initialization with an instance of a std::deque-----" << std::endl;
	std::deque<int> mydeque(3, 100);
	MutantStack<int> second(mydeque);

	if (second.empty())
		std::cout << "Stack is empty" << std::endl;
	else
		std::cout << "Stack is not empty" << std::endl;
		
	std::cout << "Top funciton result: " << second.top() << std::endl;
	std::cout << "Size function result: " << second.size() << std::endl; 
	
	// Empty function: Returns whether the stack is empty: i.e. whether its size is zero.
	std::cout << "\n----Empty function test-----" << std::endl;
	if (mstack.empty())
		std::cout << "Stack is empty" << std::endl;
	if (mstack.empty())
	{
		mstack.push(5);
		mstack.push(17);
		mstack.push(20);
		mstack.push(123);

		mstack1.push(2020);
		mstack1.push(1212);
		mstack1.push(89);
		mstack1.push(1230);

		mstack4.push(1);
		mstack4.push(2);
		mstack4.push(3);
		mstack4.push(4);
	}
	
	// Top function: Returns a reference to the top element in the stack.
	std::cout << "\n-----Top function test-----" << std::endl;
	std::cout << "Top: " << mstack.top() << std::endl;

	// Pop function: Removes the element on top of the stack, effectively reducing its size by one.
	std::cout << "\n-----Pop function test-----" << std::endl;
	std::cout << "Pop: remove the element on top of the stack;" << std::endl;
	std::cout << "Mstack size before pop: " << mstack.size() << std::endl;
	mstack.pop();
	std::cout << "Mstack size after pop: " << mstack.size() << std::endl;

	// Push Function: Inserts a new element at the top of the stack, above its current top element. 
	// The content of this new element is initialized to a copy of val.
	std::cout << "\n-----Push function test-----" << std::endl;
	mstack.push(3); 
	mstack.push(5); 
	mstack.push(737);
	std::cout << "3, 5, 737 added" << std::endl;
	// 5 17 20 3 5 737 
	//         ^ ^  ^ added
	
	std::cout << "\n-----Iterator function test-----" << std::endl;
	MutantStack<int>::iterator it = mstack.begin(); 
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
    	std::cout << "i: [" << i++ << "] = "<< *it << std::endl;
		*it = 200; // because it is not const we can change the value of *it
		++it;
	}

	std::cout << "\n-----Const Iterator function test----" << std::endl;
	MutantStack<int>::const_iterator cit = mstack.begin(); 
	MutantStack<int>::const_iterator cite = mstack.end();
	++cit;
	--cit;
	i = 0;
	while (cit != cite) {
    	std::cout << "i: [" << i++ << "] = "<< *cit << std::endl;
		// *cit = 100 // would not work because it's const; 
		++cit; 
	}

	std::cout << "\n-----Reverse Iterator function test-----" << std::endl;
	MutantStack<int>::reverse_iterator rit = mstack1.rbegin(); 
	MutantStack<int>::reverse_iterator rite = mstack1.rend();
	i = 0;
	while (rit != rite) {
    	std::cout << "i: [" << i++ << "] = "<< *rit << std::endl;
		*rit = 100; // because it is not const we can change the value of *it
		++rit;
	}

	std::cout << "\n-----Const Reverse Iterator function test-----" << std::endl;
	MutantStack<int>::const_reverse_iterator crit = mstack1.rbegin(); 
	MutantStack<int>::const_reverse_iterator crite = mstack1.rend();
	i = 0;
	while (crit != crite) {
    	std::cout << "i: [" << i++ << "] = "<< *crit << std::endl;
		// *crit = 100; // because it is not const we can change the value of *it
		++crit;
	}

	std::cout << "\n-----Copy constructor test with own MutantStack class-----" << std::endl;
	MutantStack<int> mstack3(mstack);
	
	std::cout << "Printing  new mstack3: " << std::endl; 
	it = mstack3.begin(); 
	ite = mstack3.end();
	++it;
	--it;
	i = 0;
	while (it != ite) {
    	std::cout << "i: [" << i++ << "] = "<< *it << std::endl;
		*it = 200; // because it is not const we can change the value of *it
		++it;
	}
	std::cout << "\n-----Assignation test-----" << std::endl;
	mstack3 = mstack4;
	std::cout << "Printing  new mstack3 after assignation: " << std::endl; 
	it = mstack3.begin(); 
	ite = mstack3.end();
	++it;
	--it;
	i = 0;
	while (it != ite) {
    	std::cout << "i: [" << i++ << "] = "<< *it << std::endl;
		*it = 200; // because it is not const we can change the value of *it
		++it;
	}
	
	std::cout << "\n-----Copy constructor test with real std::stack -----" << std::endl;
	
	std::stack<int> s(mstack);
	if (s.empty())
		std::cout << "Stack is empty" << std::endl;
	else
		std::cout << "Stack is not empty" << std::endl;

	
	std::cout << "Top funciton result: " << s.top() << std::endl;
	std::cout << "Size function result: " << s.size() << std::endl; 
	std::cout << "\n-----End of tests-----" << std::endl;
	std::cout << "\n-----Destructor-----" << std::endl;
	return (0);
}