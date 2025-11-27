#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    // Twoja implementacja tutaj
    std::vector< char > lista;

    for (auto v = people.rbegin(); v != people.rend(); ++v)
    { 
        v->birthday();
        if (v->isMonster())
        {
            lista.push_back('y');
        }
        else
        {
            lista.push_back('n');
        }
    }
    return lista;
}