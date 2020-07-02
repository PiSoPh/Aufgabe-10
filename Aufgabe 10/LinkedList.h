#pragma once
#include "Elemente.h"
#include <memory>

template <class def_type>
class LinkedList
{
	LinkedList();
	~LinkedList();

	Elemente<def_type> *head;
	Elemente<def_type> *tail;
	private int index = 0; //for iteration

	void append(def_type data)
	{
		if (head == nullptr) //if list is empty
		{
			head = std::make_unique<Elemente<def_type>>(); //creates a new node
			head->setData(data);
			tail = head;
		}
		else
		{
			Elemente* buffer = std::make_unique<Elemente<def_type>>();
			buffer->data = data;
			buffer->next = nullptr;
			tail->next = buffer;
			tail = buffer;
			tail->next = nullptr;
		}
	}
	public def_type TraverseForward(int index)
	{
		Elemente<def_type> CurrentElement = head;
		for (int x = 0; x <= index; x++)
		{
			if (CurrentElement->next != nullptr)
			{
				CurrentElement = CurrentElement->next;
			}
		}
		return CurrentElement->data;
	}
	public def_type TraverseBackward(int index)
	{
		Elemente<def_type> CurrentElement = tail;
		for (int x = 0; x < index; x++)
		{
			if (CurrentElement->prev != nullptr)
			{
				CurrentElement = CurrentElement->prev;
			}
		}
		return CurrentElement->data;
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
	// no elemente/nodes in list
	head = nullptr; 
	tail = nullptr;
}

template<class def_type>
inline LinkedList<def_type>::~LinkedList()
{
}
