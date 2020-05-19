#pragma once
#include "Node.h"

/*
	A Stack using a singly linked list
		- O(1) or constant time to add or delete elements
		- There is extra memory overhead because of the pointers used to link the elements

	Stack functionality(Last In First Out - LIFO)
		- push(x) -> insert x into the stack
		- pop() -> remove and return the top object
		- peek() -> return the top object( not remove)
		- isEmpty() -> is the stack empty?
*/

template <typename T>
class Stack{

private:

	Node<T>* top; //> The top object

public:

	Stack(); 
	
	void push(T x); //>Insert items to top
	
	T pop(); //> Remove and return the top object
	
	T peek(); //> Return the top without removing it from stack

	bool isEmpty(); //Is the stack empty?



};

template<typename T>
inline Stack<T>::Stack()
{
	top = nullptr;
}

template<typename T>
inline void Stack<T>::push(T x)
{
	//Create a new node to hold the object data
	Node<T>* temp = new Node<T>();
	temp->data = x;
	
	//Link the new node to the old top
	temp->parent = top;

	//The new object added is the new top
	top = temp;
}

template<typename T>
inline T Stack<T>::pop()
{
	//Temp variables to hold data before deleting old node
	T temp = top->data;
	Node<T>* temp2 = top;

	//Pop the old top, and assign new top
	top = top->parent; 
	
	delete temp2; //Free memory

	return temp; //Return object
}

template<typename T>
inline T Stack<T>::peek()
{
	return top->data; //> return object on top
}

template<typename T>
inline bool Stack<T>::isEmpty()
{
	if (top == nullptr)
		return true;
	else
		return false;
}



