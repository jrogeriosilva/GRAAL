#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;

namespace graal {
template <typename Type>
bool cmp(const Type &a, const Type &b) { return (a < b); }


/*! 
 * Exemplo de documentação seguindo o formato Doxygen
 *
 * @tparam Itr iterator para o range.
 * @tparam Compare o tipo de uma função bool(const T &a, const T &b)
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param cmp A função de comparação que retorna true quando o primeiro parâmetro é menor do que o segundo
 *
 * @return Um std::pair contendo o menor e maior elemento, nesta ordem
 *
 */

template <typename Itr, typename Compare >
std::pair<Itr, Itr> minmax( Itr first, Itr last, Compare cmp )
{
    if( std::distance( first, last ) == 0 )
    {
        return std::make_pair( first, first );
    }

    Itr min,max, it;
    min = max = it = first;

    while( it != last )
    {
        if( *it == *min )
        {
            it++;
            continue;
        }
        else if( cmp( *it, *min ) )
        {
            min = it;
        }

        if(cmp( *max, *it ) or( *it == *max ) )
        {
            max = it;
        }

        it++;
    }

    if( *min == *max )
    {
        return std::make_pair( first, last - 1 );
    }

    return std::make_pair( min, max);
}

}
#endif
