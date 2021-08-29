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

    /*! 
 * TODO: documentação no estilo doxygen
 */
    template <typename Itr>
    Itr rotate(Itr first, Itr n_first, Itr last)
    {
        Itr it = n_first;
        while (first != it)
        {
            std::swap(*first++, *it++);
            if (it == last)
                it = n_first;
            else if (first == n_first)
                n_first = it;
        }

        return last;
    }

}
#endif
