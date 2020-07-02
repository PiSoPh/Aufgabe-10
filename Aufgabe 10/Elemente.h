#pragma once
#include "LinkedList.h"
template <class def_type>
class Elemente
{
    Elemente();
    ~Elemente();

    def_type data; // information in node
    Elemente* next; //points to next element/node
};

template<class def_type>
inline Elemente<def_type>::~Elemente()
{
}
