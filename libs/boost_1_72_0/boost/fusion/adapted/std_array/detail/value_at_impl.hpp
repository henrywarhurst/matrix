/*=============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2005-2006 Dan Marsden

    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
==============================================================================*/
#if !defined(BOOST_FUSION_STD_ARRAY_VALUE_AT_IMPL_01062013_1700)
#define BOOST_FUSION_STD_ARRAY_VALUE_AT_IMPL_01062013_1700

namespace boost {
namespace fusion {

struct std_array_tag;

namespace extension {
template <typename T> struct value_at_impl;

template <> struct value_at_impl<std_array_tag> {
  template <typename Sequence, typename N> struct apply {
    typedef typename Sequence::value_type type;
  };
};
} // namespace extension
} // namespace fusion
} // namespace boost

#endif
