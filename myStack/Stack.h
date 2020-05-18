#pragma once
#include "Node.h"

/*
	Stack functionality
		- push(x) -> insert x into the stack
		- pop() -> remove and return the top object
		- peek() -> return the top object( not remove)
		- isEmpty() -> is the stack empty?

*/

template <typename T>
class Stack{

private:

	Node<T>* top;

		
public:

	Stack();

	void push(T x);

	T pop();

	T peek();

	bool isEmpty();



};

template<typename T>
inline Stack<T>::Stack()
{
	top = nullptr;
}

template<typename T>
inline void Stack<T>::push(T x)
{
	Node<T>* temp = new Node<T>();
	temp->data = x;
	temp->parent = top;

	top = temp;
}

template<typename T>
inline T Stack<T>::pop()
{
	T temp = top->data;

	Node<T>* temp2 = top;

	top = top->parent;
	
	delete temp2;

	return temp;
}

template<typename T>
inline T Stack<T>::peek()
{
	return top->data;
}

template<typename T>
inline bool Stack<T>::isEmpty()
{
	if (top == nullptr)
		return true;
	else
		return false;
}



