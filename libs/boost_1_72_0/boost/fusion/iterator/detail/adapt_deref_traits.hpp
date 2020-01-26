/*=============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
==============================================================================*/
#if !defined(FUSION_ADAPT_DEREF_TRAITS_05062005_0900)
#define FUSION_ADAPT_DEREF_TRAITS_05062005_0900

#include <boost/fusion/iterator/deref.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost {
namespace fusion {
namespace detail {
struct adapt_deref_traits {
  template <typename Iterator> struct apply {
    typedef typename result_of::deref<typename Iterator::first_type>::type type;

    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED static type
    call(Iterator const &i) {
      return *i.first;
    }
  };
};
} // namespace detail
} // namespace fusion
} // namespace boost

#endif
