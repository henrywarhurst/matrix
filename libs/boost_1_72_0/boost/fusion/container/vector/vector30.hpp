/*=============================================================================
    Copyright (c) 2014 Kohei Takahashi

    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
==============================================================================*/
#ifndef FUSION_VECTOR30_11052014_2316
#define FUSION_VECTOR30_11052014_2316

#include <boost/config.hpp>
#include <boost/fusion/container/vector/detail/config.hpp>
#include <boost/fusion/support/config.hpp>

///////////////////////////////////////////////////////////////////////////////
// Without variadics, we will use the PP version
///////////////////////////////////////////////////////////////////////////////
#if !defined(BOOST_FUSION_HAS_VARIADIC_VECTOR)
#include <boost/fusion/container/vector/detail/cpp03/vector30.hpp>
#else

///////////////////////////////////////////////////////////////////////////////
// C++11 interface
///////////////////////////////////////////////////////////////////////////////
#include <boost/fusion/container/vector/vector.hpp>
#include <boost/fusion/container/vector/vector_fwd.hpp>

#endif
#endif
