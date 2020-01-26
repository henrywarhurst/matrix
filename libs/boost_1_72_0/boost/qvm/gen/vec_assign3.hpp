// Copyright (c) 2008-2017 Emil Dotchevski and Reverge Studios, Inc.

// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_QVM_2D7E8392C53CBC9121E33749ECF4D5
#define BOOST_QVM_2D7E8392C53CBC9121E33749ECF4D5

// This file was generated by a program. Do not edit manually.

#include <boost/qvm/enable_if.hpp>
#include <boost/qvm/inline.hpp>
#include <boost/qvm/vec_traits.hpp>

namespace boost {
namespace qvm {
template <class A, class B>
BOOST_QVM_INLINE_OPERATIONS
    typename enable_if_c<vec_traits<A>::dim == 3 && vec_traits<B>::dim == 3,
                         A &>::type
    assign(A &a, B const &b) {
  vec_traits<A>::template write_element<0>(a) =
      vec_traits<B>::template read_element<0>(b);
  vec_traits<A>::template write_element<1>(a) =
      vec_traits<B>::template read_element<1>(b);
  vec_traits<A>::template write_element<2>(a) =
      vec_traits<B>::template read_element<2>(b);
  return a;
}

namespace sfinae {
using ::boost::qvm::assign;
}

namespace qvm_detail {
template <int D> struct assign_vv_defined;

template <> struct assign_vv_defined<3> { static bool const value = true; };
} // namespace qvm_detail

} // namespace qvm
} // namespace boost

#endif
