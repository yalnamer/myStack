#include <iostream>
#include "Stack.h"

int main()
{
	Stack<int> stack;
	stack.push(5);
	stack.push(23);
	std::cout << stack.peek() << std::endl;
	stack.push(125);
	stack.push(563);
	std::cout << stack.pop() << std::endl;
	std::cout << stack.pop() << std::endl;
	std::cout << stack.pop() << std::endl;
	std::cout << stack.pop() << std::endl;
	std::cout << stack.pop() << std::endl;
	
	
	

}