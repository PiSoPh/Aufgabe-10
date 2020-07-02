#pragma once

#include <memory>
#include "Elemente.h"

template <class def_type>
class LinkedList
{
	std::shared_ptr<Elemente<def_type>> head;
	std::shared_ptr<Elemente<def_type>> tail;
	std::shared_ptr<Elemente<def_type>> currentElement;

public:
	LinkedList();
	~LinkedList();


	int index = 0; //for iteration

	void append(def_type data)
	{
		if (head == nullptr) //if list is empty
		{
			head = std::make_shared<Elemente<def_type>>(); //creates a new node
			head->data = data;
			tail = head;
		}
		else
		{
			std::shared_ptr<Elemente<def_type>> buffer = std::make_shared<Elemente<def_type>>();
			buffer->data = data;
			buffer->next = nullptr;
			buffer->prev = tail;
			tail->next = buffer;
			tail = buffer;
			tail->next = nullptr;
		}
		index++;
	}
	def_type TraverseForward(int index)
	{
		currentElement = head;
		for (int x = 0; x <= index; x++)
		{
			if (currentElement->next != nullptr)
			{
				currentElement = currentElement->next;
			}
		}
		return currentElement->data;
	}
	def_type TraverseBackward(int index)
	{
		currentElement = tail;
		for (int x = 0; x < index; x++)
		{
			if (currentElement->prev != nullptr)
			{
				currentElement = currentElement->prev;
			}
		}
		return currentElement->data;
	}


	/*
	
	Sollte koennen:
	-  Objekte der Klasse Element in einer einfach
	   verketteten Liste speichern (hinten anfügen - append)
	- komplett auslesen kann (Ausgabe eines Members
	  aller Objekte vom Typ Element)
	- Template 
	
	*/
};

template<class def_type>
inline LinkedList<def_type>::LinkedList()
{
	head = std::make_shared<Elemente<def_type>>();
	tail = head;
	head->next = nullptr;
}

template<class def_type>
inline LinkedList<def_type>::~LinkedList()
{
}
