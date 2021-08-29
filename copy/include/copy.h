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

    /**! 
     * @tparam Itr iterator para o range.
     * @param first Ponteiro para o primeiro elemento do range
     * @param last Ponteiro para o ultimo elemento do range
     * @param d_first ponto até onde será copiado
     */
    template <typename Itr>
    Itr copy(Itr first, Itr last, Itr d_first)
    {

        Itr it = first;
        for (; it != last; it++)
        {
            *d_first++ = *first++;
        }

        return d_first;
    }

}
#endif
