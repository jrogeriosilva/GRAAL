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
    template <typename Itr, typename Equal>
    bool equal(Itr first, Itr last, Itr first2, Equal eq)
    {
        for (; first != last; ++first, ++first2)
        {
            if (!(*first == *first2))
            {
                return false;
            }
        }
        return true;
    }

    template <typename Itr, typename Equal>
    bool equal(Itr first, Itr last, Itr first2, Itr last2, Equal eq)
    {
        for (; first != last; ++first, ++first2)
        {
            if (!eq(*first, *first2))
            {
                return false;
            }
        }
        return true;
    }

}
#endif
