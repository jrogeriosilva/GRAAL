#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;

namespace graal
{

    /**
     * @brief 
     * 
     * @tparam Itr Iterador para Range
     * @tparam UnaryPredicate Tipo do predicado
     * @param first  Iterador para o primeiro elemento do range
     * @param last  Iterador para o ultimo elemento do range
     * @param p Predicado
     * @return Itr Iterador do elemento encontrado
     */

    template <typename Itr, typename UnaryPredicate>
    Itr find_if(Itr first, Itr last, UnaryPredicate p)
    {
    for (; first != last; ++first) {
        if (p(*first)) {
            return first;
        }
    }
    return last;
    }

}
#endif
