// Copyright David Abrahams 2003.
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
#ifndef COPY_CTOR_MUTATES_RHS_DWA2003219_HPP
#define COPY_CTOR_MUTATES_RHS_DWA2003219_HPP

#include <boost/mpl/bool.hpp>
#include <boost/python/detail/is_auto_ptr.hpp>

namespace boost {
namespace python {
namespace detail {

template <class T> struct copy_ctor_mutates_rhs : is_auto_ptr<T> {};

} // namespace detail
} // namespace python
} // namespace boost

#endif // COPY_CTOR_MUTATES_RHS_DWA2003219_HPP
