/*=============================================================================
    Copyright (c) 2001-2014 Joel de Guzman
    http://spirit.sourceforge.net/

    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
=============================================================================*/
#if !defined(BOOST_SPIRIT_X3_IS_RANGE_DEC_06_2017_1900PM)
#define BOOST_SPIRIT_X3_IS_RANGE_DEC_06_2017_1900PM

#include <boost/mpl/bool.hpp>
#include <boost/range/iterator_range.hpp>

namespace boost {
namespace spirit {
namespace x3 {
namespace traits {
template <typename T, typename Enable = void> struct is_range : mpl::false_ {};

template <typename T> struct is_range<boost::iterator_range<T>> : mpl::true_ {};
} // namespace traits
} // namespace x3
} // namespace spirit
} // namespace boost

#endif
