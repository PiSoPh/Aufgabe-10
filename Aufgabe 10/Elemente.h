#pragma once
#include <memory>

template <class def_type>
class Elemente
{
public:
    Elemente();
    ~Elemente();

    def_type data; // information in node
    std::shared_ptr<Elemente<def_type>> next; //points to next element/node
    std::shared_ptr<Elemente<def_type>> prev;
};

template<class def_type>
inline Elemente<def_type>::Elemente()
{
    next = nullptr;
    prev = nullptr;
}

template<class def_type>
inline Elemente<def_type>::~Elemente()
{
}
