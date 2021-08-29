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
    template <typename Itr, typename UnaryPredicate>
    bool all_of(Itr first, Itr last, UnaryPredicate p)
    {
        if (std::distance(first, last) == 0)
        {
            return false;
        }
        Itr it = first;

        while (it != last)
        {
            if (!p(*it))
            {
                return false;
            }
            it++;
        }

        return true;
    }

    /*! 
 * TODO: documentação no estilo doxygen
 */
    template <typename Itr, typename UnaryPredicate>
    bool any_of(Itr first, Itr last, UnaryPredicate p)
    {
        if (std::distance(first, last) == 0)
        {
            return false;
        }
        Itr it = first;

        while (it != last)
        {
            if (p(*it))
            {
                return true;
            }
            it++;
        }

        return false;
    }

    /*! 
 * TODO: documentação no estilo doxygen
 */
    template <typename Itr, typename UnaryPredicate>
    bool none_of(Itr first, Itr last, UnaryPredicate p)
    {

        if (std::distance(first, last) == 0)
        {
            return true;
        }
        Itr it = first;

        while (it != last)
        {
            if (p(*it))
            {
                return false;
            }
            it++;
        }

        return true;
    }

}
#endif
