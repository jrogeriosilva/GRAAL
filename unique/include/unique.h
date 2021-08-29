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
    template <typename Type>
    bool eq(const Type &a, const Type &b)
    {
        return (a == b) ? true : false;
    }

    /*! 
 * TODO: documentação no estilo doxygen
 */
    template <typename Itr, typename Equal>
    Itr unique(Itr first, Itr last, Equal eq)
    {

        int counter = 0;
        Itr it = first;
        Itr it2 = first;

        while (it != last)
        {
            // Armazena no iterador o elemento que está sendo buscado.
            it2 = first;
            // Busca esse elemento até o fim do vetor.
            while (it2 != last)
            {
                // Se o elemento que estou buscando é igual ao iterador.
                if (it2 == it)
                {
                    // Avança o iterador.
                    it2++;
                    continue;
                }

                else if (graal::eq(*it2, *it))
                {
                    break;
                }
                it2++;
            }

            if (it2 != last)
            {
                it++;
                continue;
            }
            else if (it2 == last)
            {
                counter++;
                it2 = it;

                while (it2 != first)
                {
                    std::iter_swap(it2, it2 - 1);
                    it2--;
                }
            }
            it++;
        }

        return it2;
    }
}
#endif
