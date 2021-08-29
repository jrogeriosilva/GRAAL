#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;

namespace graal {

/*! 
 * TODO: documentação no estilo doxygen
 */
template<typename ForwardIt, typename UnaryPredicate>
ForwardIt partition(ForwardIt first, ForwardIt last, UnaryPredicate p)
{

first = std::find_if_not(first, last, p);

    if (first == last){
        return first;
    }else{
        for (ForwardIt i = std::next(first); i != last; ++i) {
            if (p(*i)) {
                std::iter_swap(i, first);
                ++first;
            }
        }
        return first;
    }

}

}
#endif
