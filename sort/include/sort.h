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
bool cmp(const Type &a, const Type &b) { return (a < b); }

    /*! 
 * TODO: documentação no estilo doxygen
 */
    template <typename Itr, typename Comparison>
    void sort(Itr first, Itr last, Comparison cmp)
    {
        for (Itr i = first; i != last; ++i)
            for (Itr j = first; j < i; ++j)
                if (graal::cmp(*i, *j))
                    std::iter_swap(i, j);
    }

}
#endif
