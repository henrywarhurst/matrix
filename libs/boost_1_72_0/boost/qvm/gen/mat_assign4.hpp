// Copyright (c) 2008-2017 Emil Dotchevski and Reverge Studios, Inc.

// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_QVM_AD4F14F2444066D06BC430B7323BA122
#define BOOST_QVM_AD4F14F2444066D06BC430B7323BA122

// This file was generated by a program. Do not edit manually.

#include <boost/qvm/enable_if.hpp>
#include <boost/qvm/inline.hpp>
#include <boost/qvm/mat_traits.hpp>

namespace boost {
namespace qvm {
template <class A, class B>
BOOST_QVM_INLINE_OPERATIONS
    typename enable_if_c<mat_traits<A>::rows == 4 && mat_traits<B>::rows == 4 &&
                             mat_traits<A>::cols == 4 &&
                             mat_traits<B>::cols == 4,
                         A &>::type
    assign(A &a, B const &b) {
  mat_traits<A>::template write_element<0, 0>(a) =
      mat_traits<B>::template read_element<0, 0>(b);
  mat_traits<A>::template write_element<0, 1>(a) =
      mat_traits<B>::template read_element<0, 1>(b);
  mat_traits<A>::template write_element<0, 2>(a) =
      mat_traits<B>::template read_element<0, 2>(b);
  mat_traits<A>::template write_element<0, 3>(a) =
      mat_traits<B>::template read_element<0, 3>(b);
  mat_traits<A>::template write_element<1, 0>(a) =
      mat_traits<B>::template read_element<1, 0>(b);
  mat_traits<A>::template write_element<1, 1>(a) =
      mat_traits<B>::template read_element<1, 1>(b);
  mat_traits<A>::template write_element<1, 2>(a) =
      mat_traits<B>::template read_element<1, 2>(b);
  mat_traits<A>::template write_element<1, 3>(a) =
      mat_traits<B>::template read_element<1, 3>(b);
  mat_traits<A>::template write_element<2, 0>(a) =
      mat_traits<B>::template read_element<2, 0>(b);
  mat_traits<A>::template write_element<2, 1>(a) =
      mat_traits<B>::template read_element<2, 1>(b);
  mat_traits<A>::template write_element<2, 2>(a) =
      mat_traits<B>::template read_element<2, 2>(b);
  mat_traits<A>::template write_element<2, 3>(a) =
      mat_traits<B>::template read_element<2, 3>(b);
  mat_traits<A>::template write_element<3, 0>(a) =
      mat_traits<B>::template read_element<3, 0>(b);
  mat_traits<A>::template write_element<3, 1>(a) =
      mat_traits<B>::template read_element<3, 1>(b);
  mat_traits<A>::template write_element<3, 2>(a) =
      mat_traits<B>::template read_element<3, 2>(b);
  mat_traits<A>::template write_element<3, 3>(a) =
      mat_traits<B>::template read_element<3, 3>(b);
  return a;
}

namespace sfinae {
using ::boost::qvm::assign;
}

namespace qvm_detail {
template <int R, int C> struct assign_mm_defined;

template <> struct assign_mm_defined<4, 4> { static bool const value = true; };
} // namespace qvm_detail

template <class A, class B>
BOOST_QVM_INLINE_OPERATIONS
    typename enable_if_c<mat_traits<A>::rows == 4 && mat_traits<B>::rows == 4 &&
                             mat_traits<A>::cols == 1 &&
                             mat_traits<B>::cols == 1,
                         A &>::type
    assign(A &a, B const &b) {
  mat_traits<A>::template write_element<0, 0>(a) =
      mat_traits<B>::template read_element<0, 0>(b);
  mat_traits<A>::template write_element<1, 0>(a) =
      mat_traits<B>::template read_element<1, 0>(b);
  mat_traits<A>::template write_element<2, 0>(a) =
      mat_traits<B>::template read_element<2, 0>(b);
  mat_traits<A>::template write_element<3, 0>(a) =
      mat_traits<B>::template read_element<3, 0>(b);
  return a;
}

namespace sfinae {
using ::boost::qvm::assign;
}

namespace qvm_detail {
template <int R, int C> struct assign_mm_defined;

template <> struct assign_mm_defined<4, 1> { static bool const value = true; };
} // namespace qvm_detail

template <class A, class B>
BOOST_QVM_INLINE_OPERATIONS
    typename enable_if_c<mat_traits<A>::rows == 1 && mat_traits<B>::rows == 1 &&
                             mat_traits<A>::cols == 4 &&
                             mat_traits<B>::cols == 4,
                         A &>::type
    assign(A &a, B const &b) {
  mat_traits<A>::template write_element<0, 0>(a) =
      mat_traits<B>::template read_element<0, 0>(b);
  mat_traits<A>::template write_element<0, 1>(a) =
      mat_traits<B>::template read_element<0, 1>(b);
  mat_traits<A>::template write_element<0, 2>(a) =
      mat_traits<B>::template read_element<0, 2>(b);
  mat_traits<A>::template write_element<0, 3>(a) =
      mat_traits<B>::template read_element<0, 3>(b);
  return a;
}

namespace sfinae {
using ::boost::qvm::assign;
}

namespace qvm_detail {
template <int R, int C> struct assign_mm_defined;

template <> struct assign_mm_defined<1, 4> { static bool const value = true; };
} // namespace qvm_detail

} // namespace qvm
} // namespace boost

#endif
