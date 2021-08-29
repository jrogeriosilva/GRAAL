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
    template<typename Type>
    bool eq(const Type &a,  const Type &b){
        if (a == b){
            return true;
        }else{
            return false
        }
    };


    /**
     * @tparam Itr Iterador para Range
     * @param first Ponteiro para o primeiro elemento do range
     * @param last Ponteiro para a posição logo após o último elemento do range
     * @param value Valor que sera procurado
     * @param eq função de comparaçao
     * @return Itr 
     */

    template <typename Itr, typename T, typename Equal>
    Itr find(Itr first, Itr last, const T &value, Equal eq)
    {
        while (first != last)
        {
            if (eq(*first, value))
            {
                return first;
            }
            ++first;
        }
        return last;
    }

}
#endif
