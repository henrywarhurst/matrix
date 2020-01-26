/*=============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

    This is an auto-generated file. Do not edit!
==============================================================================*/
namespace boost {
namespace fusion {
struct void_;
namespace result_of {
template <typename T0 = void_, typename T1 = void_, typename T2 = void_,
          typename T3 = void_, typename T4 = void_, typename T5 = void_,
          typename T6 = void_, typename T7 = void_, typename T8 = void_,
          typename T9 = void_, typename T10 = void_, typename T11 = void_,
          typename T12 = void_, typename T13 = void_, typename T14 = void_,
          typename T15 = void_, typename T16 = void_, typename T17 = void_,
          typename T18 = void_, typename T19 = void_, typename T20 = void_,
          typename T21 = void_, typename T22 = void_, typename T23 = void_,
          typename T24 = void_, typename T25 = void_, typename T26 = void_,
          typename T27 = void_, typename T28 = void_, typename T29 = void_,
          typename Extra = void_>
struct make_deque;
template <> struct make_deque<> { typedef deque<> type; };
} // namespace result_of
BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED inline deque<> make_deque() {
  return deque<>();
}
namespace result_of {
template <typename T0>
struct make_deque<T0, void_, void_, void_, void_, void_, void_, void_, void_,
                  void_, void_, void_, void_, void_, void_, void_, void_, void_,
                  void_, void_, void_, void_, void_, void_, void_, void_, void_,
                  void_, void_, void_, void_> {
  typedef deque<typename detail::as_fusion_element<T0>::type> type;
};
} // namespace result_of
template <typename T0>
BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED inline deque<
    typename detail::as_fusion_element<T0>::type>
make_deque(T0 const &arg0) {
  return deque<typename detail::as_fusion_element<T0>::type>(arg0);
}
namespace result_of {
template <typename T0, typename T1>
struct make_deque<T0, T1, void_, void_, void_, void_, void_, void_, void_,
                  void_, void_, void_, void_, void_, void_, void_, void_, void_,
                  void_, void_, void_, void_, void_, void_, void_, void_, void_,
                  void_, void_, void_, void_> {
  typedef deque<typename detail::as_fusion_element<T0>::type,
                typename detail::as_fusion_element<T1>::type>
      type;
};
} // namespace result_of
template <typename T0, typename T1>
BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED inline deque<
    typename detail::as_fusion_element<T0>::type,
    typename detail::as_fusion_element<T1>::type>
make_deque(T0 const &arg0, T1 const &arg1) {
  return deque<typename detail::as_fusion_element<T0>::type,
               typename detail::as_fusion_element<T1>::type>(arg0, arg1);
}
namespace result_of {
template <typename T0, typename T1, typename T2>
struct make_deque<T0, T1, T2, void_, void_, void_, void_, void_, void_, void_,
                  void_, void_, void_, void_, void_, void_, void_, void_, void_,
                  void_, void_, void_, void_, void_, void_, void_, void_, void_,
                  void_, void_, void_> {
  typedef deque<typename detail::as_fusion_element<T0>::type,
                typename detail::as_fusion_element<T1>::type,
                typename detail::as_fusion_element<T2>::type>
      type;
};
} // namespace result_of
template <typename T0, typename T1, typename T2>
BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED inline deque<
    typename detail::as_fusion_element<T0>::type,
    typename detail::as_fusion_element<T1>::type,
    typename detail::as_fusion_element<T2>::type>
make_deque(T0 const &arg0, T1 const &arg1, T2 const &arg2) {
  return deque<typename detail::as_fusion_element<T0>::type,
               typename detail::as_fusion_element<T1>::type,
               typename detail::as_fusion_element<T2>::type>(arg0, arg1, arg2);
}
namespace result_of {
template <typename T0, typename T1, typename T2, typename T3>
struct make_deque<T0, T1, T2, T3, void_, void_, void_, void_, void_, void_,
                  void_, void_, void_, void_, void_, void_, void_, void_, void_,
                  void_, void_, void_, void_, void_, void_, void_, void_, void_,
                  void_, void_, void_> {
  typedef deque<typename detail::as_fusion_element<T0>::type,
                typename detail::as_fusion_element<T1>::type,
                typename detail::as_fusion_element<T2>::type,
                typename detail::as_fusion_element<T3>::type>
      type;
};
} // namespace result_of
template <typename T0, typename T1, typename T2, typename T3>
BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED inline deque<
    typename detail::as_fusion_element<T0>::type,
    typename detail::as_fusion_element<T1>::type,
    typename detail::as_fusion_element<T2>::type,
    typename detail::as_fusion_element<T3>::type>
make_deque(T0 const &arg0, T1 const &arg1, T2 const &arg2, T3 const &arg3) {
  return deque<typename detail::as_fusion_element<T0>::type,
               typename detail::as_fusion_element<T1>::type,
               typename detail::as_fusion_element<T2>::type,
               typename detail::as_fusion_element<T3>::type>(arg0, arg1, arg2,
                                                             arg3);
}
namespace result_of {
template <typename T0, typename T1, typename T2, typename T3, typename T4>
struct make_deque<T0, T1, T2, T3, T4, void_, void_, void_, void_, void_, void_,
                  void_, void_, void_, void_, void_, void_, void_, void_, void_,
                  void_, void_, void_, void_, void_, void_, void_, void_, void_,
                  void_, void_> {
  typedef deque<typename detail::as_fusion_element<T0>::type,
                typename detail::as_fusion_element<T1>::type,
                typename detail::as_fusion_element<T2>::type,
                typename detail::as_fusion_element<T3>::type,
                typename detail::as_fusion_element<T4>::type>
      type;
};
} // namespace result_of
template <typename T0, typename T1, typename T2, typename T3, typename T4>
BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED inline deque<
    typename detail::as_fusion_element<T0>::type,
    typename detail::as_fusion_element<T1>::type,
    typename detail::as_fusion_element<T2>::type,
    typename detail::as_fusion_element<T3>::type,
    typename detail::as_fusion_element<T4>::type>
make_deque(T0 const &arg0, T1 const &arg1, T2 const &arg2, T3 const &arg3,
           T4 const &arg4) {
  return deque<typename detail::as_fusion_element<T0>::type,
               typename detail::as_fusion_element<T1>::type,
               typename detail::as_fusion_element<T2>::type,
               typename detail::as_fusion_element<T3>::type,
               typename detail::as_fusion_element<T4>::type>(arg0, arg1, arg2,
                                                             arg3, arg4);
}
namespace result_of {
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5>
struct make_deque<T0, T1, T2, T3, T4, T5, void_, void_, void_, void_, void_,
                  void_, void_, void_, void_, void_, void_, void_, void_, void_,
                  void_, void_, void_, void_, void_, void_, void_, void_, void_,
                  void_, void_> {
  typedef deque<typename detail::as_fusion_element<T0>::type,
                typename detail::as_fusion_element<T1>::type,
                typename detail::as_fusion_element<T2>::type,
                typename detail::as_fusion_element<T3>::type,
                typename detail::as_fusion_element<T4>::type,
                typename detail::as_fusion_element<T5>::type>
      type;
};
} // namespace result_of
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5>
BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED inline deque<
    typename detail::as_fusion_element<T0>::type,
    typename detail::as_fusion_element<T1>::type,
    typename detail::as_fusion_element<T2>::type,
    typename detail::as_fusion_element<T3>::type,
    typename detail::as_fusion_element<T4>::type,
    typename detail::as_fusion_element<T5>::type>
make_deque(T0 const &arg0, T1 const &arg1, T2 const &arg2, T3 const &arg3,
           T4 const &arg4, T5 const &arg5) {
  return deque<typename detail::as_fusion_element<T0>::type,
               typename detail::as_fusion_element<T1>::type,
               typename detail::as_fusion_element<T2>::type,
               typename detail::as_fusion_element<T3>::type,
               typename detail::as_fusion_element<T4>::type,
               typename detail::as_fusion_element<T5>::type>(arg0, arg1, arg2,
                                                             arg3, arg4, arg5);
}
namespace result_of {
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6>
struct make_deque<T0, T1, T2, T3, T4, T5, T6, void_, void_, void_, void_, void_,
                  void_, void_, void_, void_, void_, void_, void_, void_, void_,
                  void_, void_, void_, void_, void_, void_, void_, void_, void_,
                  void_> {
  typedef deque<typename detail::as_fusion_element<T0>::type,
                typename detail::as_fusion_element<T1>::type,
                typename detail::as_fusion_element<T2>::type,
                typename detail::as_fusion_element<T3>::type,
                typename detail::as_fusion_element<T4>::type,
                typename detail::as_fusion_element<T5>::type,
                typename detail::as_fusion_element<T6>::type>
      type;
};
} // namespace result_of
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6>
BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED inline deque<
    typename detail::as_fusion_element<T0>::type,
    typename detail::as_fusion_element<T1>::type,
    typename detail::as_fusion_element<T2>::type,
    typename detail::as_fusion_element<T3>::type,
    typename detail::as_fusion_element<T4>::type,
    typename detail::as_fusion_element<T5>::type,
    typename detail::as_fusion_element<T6>::type>
make_deque(T0 const &arg0, T1 const &arg1, T2 const &arg2, T3 const &arg3,
           T4 const &arg4, T5 const &arg5, T6 const &arg6) {
  return deque<typename detail::as_fusion_element<T0>::type,
               typename detail::as_fusion_element<T1>::type,
               typename detail::as_fusion_element<T2>::type,
               typename detail::as_fusion_element<T3>::type,
               typename detail::as_fusion_element<T4>::type,
               typename detail::as_fusion_element<T5>::type,
               typename detail::as_fusion_element<T6>::type>(
      arg0, arg1, arg2, arg3, arg4, arg5, arg6);
}
namespace result_of {
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7>
struct make_deque<T0, T1, T2, T3, T4, T5, T6, T7, void_, void_, void_, void_,
                  void_, void_, void_, void_, void_, void_, void_, void_, void_,
                  void_, void_, void_, void_, void_, void_, void_, void_, void_,
                  void_> {
  typedef deque<typename detail::as_fusion_element<T0>::type,
                typename detail::as_fusion_element<T1>::type,
                typename detail::as_fusion_element<T2>::type,
                typename detail::as_fusion_element<T3>::type,
                typename detail::as_fusion_element<T4>::type,
                typename detail::as_fusion_element<T5>::type,
                typename detail::as_fusion_element<T6>::type,
                typename detail::as_fusion_element<T7>::type>
      type;
};
} // namespace result_of
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7>
BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED inline deque<
    typename detail::as_fusion_element<T0>::type,
    typename detail::as_fusion_element<T1>::type,
    typename detail::as_fusion_element<T2>::type,
    typename detail::as_fusion_element<T3>::type,
    typename detail::as_fusion_element<T4>::type,
    typename detail::as_fusion_element<T5>::type,
    typename detail::as_fusion_element<T6>::type,
    typename detail::as_fusion_element<T7>::type>
make_deque(T0 const &arg0, T1 const &arg1, T2 const &arg2, T3 const &arg3,
           T4 const &arg4, T5 const &arg5, T6 const &arg6, T7 const &arg7) {
  return deque<typename detail::as_fusion_element<T0>::type,
               typename detail::as_fusion_element<T1>::type,
               typename detail::as_fusion_element<T2>::type,
               typename detail::as_fusion_element<T3>::type,
               typename detail::as_fusion_element<T4>::type,
               typename detail::as_fusion_element<T5>::type,
               typename detail::as_fusion_element<T6>::type,
               typename detail::as_fusion_element<T7>::type>(
      arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}
namespace result_of {
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8>
struct make_deque<T0, T1, T2, T3, T4, T5, T6, T7, T8, void_, void_, void_,
                  void_, void_, void_, void_, void_, void_, void_, void_, void_,
                  void_, void_, void_, void_, void_, void_, void_, void_, void_,
                  void_> {
  typedef deque<typename detail::as_fusion_element<T0>::type,
                typename detail::as_fusion_element<T1>::type,
                typename detail::as_fusion_element<T2>::type,
                typename detail::as_fusion_element<T3>::type,
                typename detail::as_fusion_element<T4>::type,
                typename detail::as_fusion_element<T5>::type,
                typename detail::as_fusion_element<T6>::type,
                typename detail::as_fusion_element<T7>::type,
                typename detail::as_fusion_element<T8>::type>
      type;
};
} // namespace result_of
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8>
BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED inline deque<
    typename detail::as_fusion_element<T0>::type,
    typename detail::as_fusion_element<T1>::type,
    typename detail::as_fusion_element<T2>::type,
    typename detail::as_fusion_element<T3>::type,
    typename detail::as_fusion_element<T4>::type,
    typename detail::as_fusion_element<T5>::type,
    typename detail::as_fusion_element<T6>::type,
    typename detail::as_fusion_element<T7>::type,
    typename detail::as_fusion_element<T8>::type>
make_deque(T0 const &arg0, T1 const &arg1, T2 const &arg2, T3 const &arg3,
           T4 const &arg4, T5 const &arg5, T6 const &arg6, T7 const &arg7,
           T8 const &arg8) {
  return deque<typename detail::as_fusion_element<T0>::type,
               typename detail::as_fusion_element<T1>::type,
               typename detail::as_fusion_element<T2>::type,
               typename detail::as_fusion_element<T3>::type,
               typename detail::as_fusion_element<T4>::type,
               typename detail::as_fusion_element<T5>::type,
               typename detail::as_fusion_element<T6>::type,
               typename detail::as_fusion_element<T7>::type,
               typename detail::as_fusion_element<T8>::type>(
      arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}
namespace result_of {
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8, typename T9>
struct make_deque<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, void_, void_, void_,
                  void_, void_, void_, void_, void_, void_, void_, void_, void_,
                  void_, void_, void_, void_, void_, void_, void_, void_,
                  void_> {
  typedef deque<typename detail::as_fusion_element<T0>::type,
                typename detail::as_fusion_element<T1>::type,
                typename detail::as_fusion_element<T2>::type,
                typename detail::as_fusion_element<T3>::type,
                typename detail::as_fusion_element<T4>::type,
                typename detail::as_fusion_element<T5>::type,
                typename detail::as_fusion_element<T6>::type,
                typename detail::as_fusion_element<T7>::type,
                typename detail::as_fusion_element<T8>::type,
                typename detail::as_fusion_element<T9>::type>
      type;
};
} // namespace result_of
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8, typename T9>
BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED inline deque<
    typename detail::as_fusion_element<T0>::type,
    typename detail::as_fusion_element<T1>::type,
    typename detail::as_fusion_element<T2>::type,
    typename detail::as_fusion_element<T3>::type,
    typename detail::as_fusion_element<T4>::type,
    typename detail::as_fusion_element<T5>::type,
    typename detail::as_fusion_element<T6>::type,
    typename detail::as_fusion_element<T7>::type,
    typename detail::as_fusion_element<T8>::type,
    typename detail::as_fusion_element<T9>::type>
make_deque(T0 const &arg0, T1 const &arg1, T2 const &arg2, T3 const &arg3,
           T4 const &arg4, T5 const &arg5, T6 const &arg6, T7 const &arg7,
           T8 const &arg8, T9 const &arg9) {
  return deque<typename detail::as_fusion_element<T0>::type,
               typename detail::as_fusion_element<T1>::type,
               typename detail::as_fusion_element<T2>::type,
               typename detail::as_fusion_element<T3>::type,
               typename detail::as_fusion_element<T4>::type,
               typename detail::as_fusion_element<T5>::type,
               typename detail::as_fusion_element<T6>::type,
               typename detail::as_fusion_element<T7>::type,
               typename detail::as_fusion_element<T8>::type,
               typename detail::as_fusion_element<T9>::type>(
      arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
}
namespace result_of {
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8, typename T9,
          typename T10>
struct make_deque<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, void_, void_,
                  void_, void_, void_, void_, void_, void_, void_, void_, void_,
                  void_, void_, void_, void_, void_, void_, void_, void_,
                  void_> {
  typedef deque<typename detail::as_fusion_element<T0>::type,
                typename detail::as_fusion_element<T1>::type,
                typename detail::as_fusion_element<T2>::type,
                typename detail::as_fusion_element<T3>::type,
                typename detail::as_fusion_element<T4>::type,
                typename detail::as_fusion_element<T5>::type,
                typename detail::as_fusion_element<T6>::type,
                typename detail::as_fusion_element<T7>::type,
                typename detail::as_fusion_element<T8>::type,
                typename detail::as_fusion_element<T9>::type,
                typename detail::as_fusion_element<T10>::type>
      type;
};
} // namespace result_of
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8, typename T9,
          typename T10>
BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED inline deque<
    typename detail::as_fusion_element<T0>::type,
    typename detail::as_fusion_element<T1>::type,
    typename detail::as_fusion_element<T2>::type,
    typename detail::as_fusion_element<T3>::type,
    typename detail::as_fusion_element<T4>::type,
    typename detail::as_fusion_element<T5>::type,
    typename detail::as_fusion_element<T6>::type,
    typename detail::as_fusion_element<T7>::type,
    typename detail::as_fusion_element<T8>::type,
    typename detail::as_fusion_element<T9>::type,
    typename detail::as_fusion_element<T10>::type>
make_deque(T0 const &arg0, T1 const &arg1, T2 const &arg2, T3 const &arg3,
           T4 const &arg4, T5 const &arg5, T6 const &arg6, T7 const &arg7,
           T8 const &arg8, T9 const &arg9, T10 const &arg10) {
  return deque<typename detail::as_fusion_element<T0>::type,
               typename detail::as_fusion_element<T1>::type,
               typename detail::as_fusion_element<T2>::type,
               typename detail::as_fusion_element<T3>::type,
               typename detail::as_fusion_element<T4>::type,
               typename detail::as_fusion_element<T5>::type,
               typename detail::as_fusion_element<T6>::type,
               typename detail::as_fusion_element<T7>::type,
               typename detail::as_fusion_element<T8>::type,
               typename detail::as_fusion_element<T9>::type,
               typename detail::as_fusion_element<T10>::type>(
      arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
}
namespace result_of {
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8, typename T9,
          typename T10, typename T11>
struct make_deque<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, void_,
                  void_, void_, void_, void_, void_, void_, void_, void_, void_,
                  void_, void_, void_, void_, void_, void_, void_, void_,
                  void_> {
  typedef deque<typename detail::as_fusion_element<T0>::type,
                typename detail::as_fusion_element<T1>::type,
                typename detail::as_fusion_element<T2>::type,
                typename detail::as_fusion_element<T3>::type,
                typename detail::as_fusion_element<T4>::type,
                typename detail::as_fusion_element<T5>::type,
                typename detail::as_fusion_element<T6>::type,
                typename detail::as_fusion_element<T7>::type,
                typename detail::as_fusion_element<T8>::type,
                typename detail::as_fusion_element<T9>::type,
                typename detail::as_fusion_element<T10>::type,
                typename detail::as_fusion_element<T11>::type>
      type;
};
} // namespace result_of
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8, typename T9,
          typename T10, typename T11>
BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED inline deque<
    typename detail::as_fusion_element<T0>::type,
    typename detail::as_fusion_element<T1>::type,
    typename detail::as_fusion_element<T2>::type,
    typename detail::as_fusion_element<T3>::type,
    typename detail::as_fusion_element<T4>::type,
    typename detail::as_fusion_element<T5>::type,
    typename detail::as_fusion_element<T6>::type,
    typename detail::as_fusion_element<T7>::type,
    typename detail::as_fusion_element<T8>::type,
    typename detail::as_fusion_element<T9>::type,
    typename detail::as_fusion_element<T10>::type,
    typename detail::as_fusion_element<T11>::type>
make_deque(T0 const &arg0, T1 const &arg1, T2 const &arg2, T3 const &arg3,
           T4 const &arg4, T5 const &arg5, T6 const &arg6, T7 const &arg7,
           T8 const &arg8, T9 const &arg9, T10 const &arg10, T11 const &arg11) {
  return deque<typename detail::as_fusion_element<T0>::type,
               typename detail::as_fusion_element<T1>::type,
               typename detail::as_fusion_element<T2>::type,
               typename detail::as_fusion_element<T3>::type,
               typename detail::as_fusion_element<T4>::type,
               typename detail::as_fusion_element<T5>::type,
               typename detail::as_fusion_element<T6>::type,
               typename detail::as_fusion_element<T7>::type,
               typename detail::as_fusion_element<T8>::type,
               typename detail::as_fusion_element<T9>::type,
               typename detail::as_fusion_element<T10>::type,
               typename detail::as_fusion_element<T11>::type>(
      arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
}
namespace result_of {
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8, typename T9,
          typename T10, typename T11, typename T12>
struct make_deque<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, void_,
                  void_, void_, void_, void_, void_, void_, void_, void_, void_,
                  void_, void_, void_, void_, void_, void_, void_, void_> {
  typedef deque<typename detail::as_fusion_element<T0>::type,
                typename detail::as_fusion_element<T1>::type,
                typename detail::as_fusion_element<T2>::type,
                typename detail::as_fusion_element<T3>::type,
                typename detail::as_fusion_element<T4>::type,
                typename detail::as_fusion_element<T5>::type,
                typename detail::as_fusion_element<T6>::type,
                typename detail::as_fusion_element<T7>::type,
                typename detail::as_fusion_element<T8>::type,
                typename detail::as_fusion_element<T9>::type,
                typename detail::as_fusion_element<T10>::type,
                typename detail::as_fusion_element<T11>::type,
                typename detail::as_fusion_element<T12>::type>
      type;
};
} // namespace result_of
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8, typename T9,
          typename T10, typename T11, typename T12>
BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED inline deque<
    typename detail::as_fusion_element<T0>::type,
    typename detail::as_fusion_element<T1>::type,
    typename detail::as_fusion_element<T2>::type,
    typename detail::as_fusion_element<T3>::type,
    typename detail::as_fusion_element<T4>::type,
    typename detail::as_fusion_element<T5>::type,
    typename detail::as_fusion_element<T6>::type,
    typename detail::as_fusion_element<T7>::type,
    typename detail::as_fusion_element<T8>::type,
    typename detail::as_fusion_element<T9>::type,
    typename detail::as_fusion_element<T10>::type,
    typename detail::as_fusion_element<T11>::type,
    typename detail::as_fusion_element<T12>::type>
make_deque(T0 const &arg0, T1 const &arg1, T2 const &arg2, T3 const &arg3,
           T4 const &arg4, T5 const &arg5, T6 const &arg6, T7 const &arg7,
           T8 const &arg8, T9 const &arg9, T10 const &arg10, T11 const &arg11,
           T12 const &arg12) {
  return deque<typename detail::as_fusion_element<T0>::type,
               typename detail::as_fusion_element<T1>::type,
               typename detail::as_fusion_element<T2>::type,
               typename detail::as_fusion_element<T3>::type,
               typename detail::as_fusion_element<T4>::type,
               typename detail::as_fusion_element<T5>::type,
               typename detail::as_fusion_element<T6>::type,
               typename detail::as_fusion_element<T7>::type,
               typename detail::as_fusion_element<T8>::type,
               typename detail::as_fusion_element<T9>::type,
               typename detail::as_fusion_element<T10>::type,
               typename detail::as_fusion_element<T11>::type,
               typename detail::as_fusion_element<T12>::type>(
      arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11,
      arg12);
}
namespace result_of {
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8, typename T9,
          typename T10, typename T11, typename T12, typename T13>
struct make_deque<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
                  void_, void_, void_, void_, void_, void_, void_, void_, void_,
                  void_, void_, void_, void_, void_, void_, void_, void_> {
  typedef deque<typename detail::as_fusion_element<T0>::type,
                typename detail::as_fusion_element<T1>::type,
                typename detail::as_fusion_element<T2>::type,
                typename detail::as_fusion_element<T3>::type,
                typename detail::as_fusion_element<T4>::type,
                typename detail::as_fusion_element<T5>::type,
                typename detail::as_fusion_element<T6>::type,
                typename detail::as_fusion_element<T7>::type,
                typename detail::as_fusion_element<T8>::type,
                typename detail::as_fusion_element<T9>::type,
                typename detail::as_fusion_element<T10>::type,
                typename detail::as_fusion_element<T11>::type,
                typename detail::as_fusion_element<T12>::type,
                typename detail::as_fusion_element<T13>::type>
      type;
};
} // namespace result_of
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8, typename T9,
          typename T10, typename T11, typename T12, typename T13>
BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED inline deque<
    typename detail::as_fusion_element<T0>::type,
    typename detail::as_fusion_element<T1>::type,
    typename detail::as_fusion_element<T2>::type,
    typename detail::as_fusion_element<T3>::type,
    typename detail::as_fusion_element<T4>::type,
    typename detail::as_fusion_element<T5>::type,
    typename detail::as_fusion_element<T6>::type,
    typename detail::as_fusion_element<T7>::type,
    typename detail::as_fusion_element<T8>::type,
    typename detail::as_fusion_element<T9>::type,
    typename detail::as_fusion_element<T10>::type,
    typename detail::as_fusion_element<T11>::type,
    typename detail::as_fusion_element<T12>::type,
    typename detail::as_fusion_element<T13>::type>
make_deque(T0 const &arg0, T1 const &arg1, T2 const &arg2, T3 const &arg3,
           T4 const &arg4, T5 const &arg5, T6 const &arg6, T7 const &arg7,
           T8 const &arg8, T9 const &arg9, T10 const &arg10, T11 const &arg11,
           T12 const &arg12, T13 const &arg13) {
  return deque<typename detail::as_fusion_element<T0>::type,
               typename detail::as_fusion_element<T1>::type,
               typename detail::as_fusion_element<T2>::type,
               typename detail::as_fusion_element<T3>::type,
               typename detail::as_fusion_element<T4>::type,
               typename detail::as_fusion_element<T5>::type,
               typename detail::as_fusion_element<T6>::type,
               typename detail::as_fusion_element<T7>::type,
               typename detail::as_fusion_element<T8>::type,
               typename detail::as_fusion_element<T9>::type,
               typename detail::as_fusion_element<T10>::type,
               typename detail::as_fusion_element<T11>::type,
               typename detail::as_fusion_element<T12>::type,
               typename detail::as_fusion_element<T13>::type>(
      arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11,
      arg12, arg13);
}
namespace result_of {
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8, typename T9,
          typename T10, typename T11, typename T12, typename T13, typename T14>
struct make_deque<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
                  T14, void_, void_, void_, void_, void_, void_, void_, void_,
                  void_, void_, void_, void_, void_, void_, void_, void_> {
  typedef deque<typename detail::as_fusion_element<T0>::type,
                typename detail::as_fusion_element<T1>::type,
                typename detail::as_fusion_element<T2>::type,
                typename detail::as_fusion_element<T3>::type,
                typename detail::as_fusion_element<T4>::type,
                typename detail::as_fusion_element<T5>::type,
                typename detail::as_fusion_element<T6>::type,
                typename detail::as_fusion_element<T7>::type,
                typename detail::as_fusion_element<T8>::type,
                typename detail::as_fusion_element<T9>::type,
                typename detail::as_fusion_element<T10>::type,
                typename detail::as_fusion_element<T11>::type,
                typename detail::as_fusion_element<T12>::type,
                typename detail::as_fusion_element<T13>::type,
                typename detail::as_fusion_element<T14>::type>
      type;
};
} // namespace result_of
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8, typename T9,
          typename T10, typename T11, typename T12, typename T13, typename T14>
BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED inline deque<
    typename detail::as_fusion_element<T0>::type,
    typename detail::as_fusion_element<T1>::type,
    typename detail::as_fusion_element<T2>::type,
    typename detail::as_fusion_element<T3>::type,
    typename detail::as_fusion_element<T4>::type,
    typename detail::as_fusion_element<T5>::type,
    typename detail::as_fusion_element<T6>::type,
    typename detail::as_fusion_element<T7>::type,
    typename detail::as_fusion_element<T8>::type,
    typename detail::as_fusion_element<T9>::type,
    typename detail::as_fusion_element<T10>::type,
    typename detail::as_fusion_element<T11>::type,
    typename detail::as_fusion_element<T12>::type,
    typename detail::as_fusion_element<T13>::type,
    typename detail::as_fusion_element<T14>::type>
make_deque(T0 const &arg0, T1 const &arg1, T2 const &arg2, T3 const &arg3,
           T4 const &arg4, T5 const &arg5, T6 const &arg6, T7 const &arg7,
           T8 const &arg8, T9 const &arg9, T10 const &arg10, T11 const &arg11,
           T12 const &arg12, T13 const &arg13, T14 const &arg14) {
  return deque<typename detail::as_fusion_element<T0>::type,
               typename detail::as_fusion_element<T1>::type,
               typename detail::as_fusion_element<T2>::type,
               typename detail::as_fusion_element<T3>::type,
               typename detail::as_fusion_element<T4>::type,
               typename detail::as_fusion_element<T5>::type,
               typename detail::as_fusion_element<T6>::type,
               typename detail::as_fusion_element<T7>::type,
               typename detail::as_fusion_element<T8>::type,
               typename detail::as_fusion_element<T9>::type,
               typename detail::as_fusion_element<T10>::type,
               typename detail::as_fusion_element<T11>::type,
               typename detail::as_fusion_element<T12>::type,
               typename detail::as_fusion_element<T13>::type,
               typename detail::as_fusion_element<T14>::type>(
      arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11,
      arg12, arg13, arg14);
}
namespace result_of {
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8, typename T9,
          typename T10, typename T11, typename T12, typename T13, typename T14,
          typename T15>
struct make_deque<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
                  T14, T15, void_, void_, void_, void_, void_, void_, void_,
                  void_, void_, void_, void_, void_, void_, void_, void_> {
  typedef deque<typename detail::as_fusion_element<T0>::type,
                typename detail::as_fusion_element<T1>::type,
                typename detail::as_fusion_element<T2>::type,
                typename detail::as_fusion_element<T3>::type,
                typename detail::as_fusion_element<T4>::type,
                typename detail::as_fusion_element<T5>::type,
                typename detail::as_fusion_element<T6>::type,
                typename detail::as_fusion_element<T7>::type,
                typename detail::as_fusion_element<T8>::type,
                typename detail::as_fusion_element<T9>::type,
                typename detail::as_fusion_element<T10>::type,
                typename detail::as_fusion_element<T11>::type,
                typename detail::as_fusion_element<T12>::type,
                typename detail::as_fusion_element<T13>::type,
                typename detail::as_fusion_element<T14>::type,
                typename detail::as_fusion_element<T15>::type>
      type;
};
} // namespace result_of
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8, typename T9,
          typename T10, typename T11, typename T12, typename T13, typename T14,
          typename T15>
BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED inline deque<
    typename detail::as_fusion_element<T0>::type,
    typename detail::as_fusion_element<T1>::type,
    typename detail::as_fusion_element<T2>::type,
    typename detail::as_fusion_element<T3>::type,
    typename detail::as_fusion_element<T4>::type,
    typename detail::as_fusion_element<T5>::type,
    typename detail::as_fusion_element<T6>::type,
    typename detail::as_fusion_element<T7>::type,
    typename detail::as_fusion_element<T8>::type,
    typename detail::as_fusion_element<T9>::type,
    typename detail::as_fusion_element<T10>::type,
    typename detail::as_fusion_element<T11>::type,
    typename detail::as_fusion_element<T12>::type,
    typename detail::as_fusion_element<T13>::type,
    typename detail::as_fusion_element<T14>::type,
    typename detail::as_fusion_element<T15>::type>
make_deque(T0 const &arg0, T1 const &arg1, T2 const &arg2, T3 const &arg3,
           T4 const &arg4, T5 const &arg5, T6 const &arg6, T7 const &arg7,
           T8 const &arg8, T9 const &arg9, T10 const &arg10, T11 const &arg11,
           T12 const &arg12, T13 const &arg13, T14 const &arg14,
           T15 const &arg15) {
  return deque<typename detail::as_fusion_element<T0>::type,
               typename detail::as_fusion_element<T1>::type,
               typename detail::as_fusion_element<T2>::type,
               typename detail::as_fusion_element<T3>::type,
               typename detail::as_fusion_element<T4>::type,
               typename detail::as_fusion_element<T5>::type,
               typename detail::as_fusion_element<T6>::type,
               typename detail::as_fusion_element<T7>::type,
               typename detail::as_fusion_element<T8>::type,
               typename detail::as_fusion_element<T9>::type,
               typename detail::as_fusion_element<T10>::type,
               typename detail::as_fusion_element<T11>::type,
               typename detail::as_fusion_element<T12>::type,
               typename detail::as_fusion_element<T13>::type,
               typename detail::as_fusion_element<T14>::type,
               typename detail::as_fusion_element<T15>::type>(
      arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11,
      arg12, arg13, arg14, arg15);
}
namespace result_of {
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8, typename T9,
          typename T10, typename T11, typename T12, typename T13, typename T14,
          typename T15, typename T16>
struct make_deque<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
                  T14, T15, T16, void_, void_, void_, void_, void_, void_,
                  void_, void_, void_, void_, void_, void_, void_, void_> {
  typedef deque<typename detail::as_fusion_element<T0>::type,
                typename detail::as_fusion_element<T1>::type,
                typename detail::as_fusion_element<T2>::type,
                typename detail::as_fusion_element<T3>::type,
                typename detail::as_fusion_element<T4>::type,
                typename detail::as_fusion_element<T5>::type,
                typename detail::as_fusion_element<T6>::type,
                typename detail::as_fusion_element<T7>::type,
                typename detail::as_fusion_element<T8>::type,
                typename detail::as_fusion_element<T9>::type,
                typename detail::as_fusion_element<T10>::type,
                typename detail::as_fusion_element<T11>::type,
                typename detail::as_fusion_element<T12>::type,
                typename detail::as_fusion_element<T13>::type,
                typename detail::as_fusion_element<T14>::type,
                typename detail::as_fusion_element<T15>::type,
                typename detail::as_fusion_element<T16>::type>
      type;
};
} // namespace result_of
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8, typename T9,
          typename T10, typename T11, typename T12, typename T13, typename T14,
          typename T15, typename T16>
BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED inline deque<
    typename detail::as_fusion_element<T0>::type,
    typename detail::as_fusion_element<T1>::type,
    typename detail::as_fusion_element<T2>::type,
    typename detail::as_fusion_element<T3>::type,
    typename detail::as_fusion_element<T4>::type,
    typename detail::as_fusion_element<T5>::type,
    typename detail::as_fusion_element<T6>::type,
    typename detail::as_fusion_element<T7>::type,
    typename detail::as_fusion_element<T8>::type,
    typename detail::as_fusion_element<T9>::type,
    typename detail::as_fusion_element<T10>::type,
    typename detail::as_fusion_element<T11>::type,
    typename detail::as_fusion_element<T12>::type,
    typename detail::as_fusion_element<T13>::type,
    typename detail::as_fusion_element<T14>::type,
    typename detail::as_fusion_element<T15>::type,
    typename detail::as_fusion_element<T16>::type>
make_deque(T0 const &arg0, T1 const &arg1, T2 const &arg2, T3 const &arg3,
           T4 const &arg4, T5 const &arg5, T6 const &arg6, T7 const &arg7,
           T8 const &arg8, T9 const &arg9, T10 const &arg10, T11 const &arg11,
           T12 const &arg12, T13 const &arg13, T14 const &arg14,
           T15 const &arg15, T16 const &arg16) {
  return deque<typename detail::as_fusion_element<T0>::type,
               typename detail::as_fusion_element<T1>::type,
               typename detail::as_fusion_element<T2>::type,
               typename detail::as_fusion_element<T3>::type,
               typename detail::as_fusion_element<T4>::type,
               typename detail::as_fusion_element<T5>::type,
               typename detail::as_fusion_element<T6>::type,
               typename detail::as_fusion_element<T7>::type,
               typename detail::as_fusion_element<T8>::type,
               typename detail::as_fusion_element<T9>::type,
               typename detail::as_fusion_element<T10>::type,
               typename detail::as_fusion_element<T11>::type,
               typename detail::as_fusion_element<T12>::type,
               typename detail::as_fusion_element<T13>::type,
               typename detail::as_fusion_element<T14>::type,
               typename detail::as_fusion_element<T15>::type,
               typename detail::as_fusion_element<T16>::type>(
      arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11,
      arg12, arg13, arg14, arg15, arg16);
}
namespace result_of {
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8, typename T9,
          typename T10, typename T11, typename T12, typename T13, typename T14,
          typename T15, typename T16, typename T17>
struct make_deque<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
                  T14, T15, T16, T17, void_, void_, void_, void_, void_, void_,
                  void_, void_, void_, void_, void_, void_, void_> {
  typedef deque<typename detail::as_fusion_element<T0>::type,
                typename detail::as_fusion_element<T1>::type,
                typename detail::as_fusion_element<T2>::type,
                typename detail::as_fusion_element<T3>::type,
                typename detail::as_fusion_element<T4>::type,
                typename detail::as_fusion_element<T5>::type,
                typename detail::as_fusion_element<T6>::type,
                typename detail::as_fusion_element<T7>::type,
                typename detail::as_fusion_element<T8>::type,
                typename detail::as_fusion_element<T9>::type,
                typename detail::as_fusion_element<T10>::type,
                typename detail::as_fusion_element<T11>::type,
                typename detail::as_fusion_element<T12>::type,
                typename detail::as_fusion_element<T13>::type,
                typename detail::as_fusion_element<T14>::type,
                typename detail::as_fusion_element<T15>::type,
                typename detail::as_fusion_element<T16>::type,
                typename detail::as_fusion_element<T17>::type>
      type;
};
} // namespace result_of
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8, typename T9,
          typename T10, typename T11, typename T12, typename T13, typename T14,
          typename T15, typename T16, typename T17>
BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED inline deque<
    typename detail::as_fusion_element<T0>::type,
    typename detail::as_fusion_element<T1>::type,
    typename detail::as_fusion_element<T2>::type,
    typename detail::as_fusion_element<T3>::type,
    typename detail::as_fusion_element<T4>::type,
    typename detail::as_fusion_element<T5>::type,
    typename detail::as_fusion_element<T6>::type,
    typename detail::as_fusion_element<T7>::type,
    typename detail::as_fusion_element<T8>::type,
    typename detail::as_fusion_element<T9>::type,
    typename detail::as_fusion_element<T10>::type,
    typename detail::as_fusion_element<T11>::type,
    typename detail::as_fusion_element<T12>::type,
    typename detail::as_fusion_element<T13>::type,
    typename detail::as_fusion_element<T14>::type,
    typename detail::as_fusion_element<T15>::type,
    typename detail::as_fusion_element<T16>::type,
    typename detail::as_fusion_element<T17>::type>
make_deque(T0 const &arg0, T1 const &arg1, T2 const &arg2, T3 const &arg3,
           T4 const &arg4, T5 const &arg5, T6 const &arg6, T7 const &arg7,
           T8 const &arg8, T9 const &arg9, T10 const &arg10, T11 const &arg11,
           T12 const &arg12, T13 const &arg13, T14 const &arg14,
           T15 const &arg15, T16 const &arg16, T17 const &arg17) {
  return deque<typename detail::as_fusion_element<T0>::type,
               typename detail::as_fusion_element<T1>::type,
               typename detail::as_fusion_element<T2>::type,
               typename detail::as_fusion_element<T3>::type,
               typename detail::as_fusion_element<T4>::type,
               typename detail::as_fusion_element<T5>::type,
               typename detail::as_fusion_element<T6>::type,
               typename detail::as_fusion_element<T7>::type,
               typename detail::as_fusion_element<T8>::type,
               typename detail::as_fusion_element<T9>::type,
               typename detail::as_fusion_element<T10>::type,
               typename detail::as_fusion_element<T11>::type,
               typename detail::as_fusion_element<T12>::type,
               typename detail::as_fusion_element<T13>::type,
               typename detail::as_fusion_element<T14>::type,
               typename detail::as_fusion_element<T15>::type,
               typename detail::as_fusion_element<T16>::type,
               typename detail::as_fusion_element<T17>::type>(
      arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11,
      arg12, arg13, arg14, arg15, arg16, arg17);
}
namespace result_of {
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8, typename T9,
          typename T10, typename T11, typename T12, typename T13, typename T14,
          typename T15, typename T16, typename T17, typename T18>
struct make_deque<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
                  T14, T15, T16, T17, T18, void_, void_, void_, void_, void_,
                  void_, void_, void_, void_, void_, void_, void_> {
  typedef deque<typename detail::as_fusion_element<T0>::type,
                typename detail::as_fusion_element<T1>::type,
                typename detail::as_fusion_element<T2>::type,
                typename detail::as_fusion_element<T3>::type,
                typename detail::as_fusion_element<T4>::type,
                typename detail::as_fusion_element<T5>::type,
                typename detail::as_fusion_element<T6>::type,
                typename detail::as_fusion_element<T7>::type,
                typename detail::as_fusion_element<T8>::type,
                typename detail::as_fusion_element<T9>::type,
                typename detail::as_fusion_element<T10>::type,
                typename detail::as_fusion_element<T11>::type,
                typename detail::as_fusion_element<T12>::type,
                typename detail::as_fusion_element<T13>::type,
                typename detail::as_fusion_element<T14>::type,
                typename detail::as_fusion_element<T15>::type,
                typename detail::as_fusion_element<T16>::type,
                typename detail::as_fusion_element<T17>::type,
                typename detail::as_fusion_element<T18>::type>
      type;
};
} // namespace result_of
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8, typename T9,
          typename T10, typename T11, typename T12, typename T13, typename T14,
          typename T15, typename T16, typename T17, typename T18>
BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED inline deque<
    typename detail::as_fusion_element<T0>::type,
    typename detail::as_fusion_element<T1>::type,
    typename detail::as_fusion_element<T2>::type,
    typename detail::as_fusion_element<T3>::type,
    typename detail::as_fusion_element<T4>::type,
    typename detail::as_fusion_element<T5>::type,
    typename detail::as_fusion_element<T6>::type,
    typename detail::as_fusion_element<T7>::type,
    typename detail::as_fusion_element<T8>::type,
    typename detail::as_fusion_element<T9>::type,
    typename detail::as_fusion_element<T10>::type,
    typename detail::as_fusion_element<T11>::type,
    typename detail::as_fusion_element<T12>::type,
    typename detail::as_fusion_element<T13>::type,
    typename detail::as_fusion_element<T14>::type,
    typename detail::as_fusion_element<T15>::type,
    typename detail::as_fusion_element<T16>::type,
    typename detail::as_fusion_element<T17>::type,
    typename detail::as_fusion_element<T18>::type>
make_deque(T0 const &arg0, T1 const &arg1, T2 const &arg2, T3 const &arg3,
           T4 const &arg4, T5 const &arg5, T6 const &arg6, T7 const &arg7,
           T8 const &arg8, T9 const &arg9, T10 const &arg10, T11 const &arg11,
           T12 const &arg12, T13 const &arg13, T14 const &arg14,
           T15 const &arg15, T16 const &arg16, T17 const &arg17,
           T18 const &arg18) {
  return deque<typename detail::as_fusion_element<T0>::type,
               typename detail::as_fusion_element<T1>::type,
               typename detail::as_fusion_element<T2>::type,
               typename detail::as_fusion_element<T3>::type,
               typename detail::as_fusion_element<T4>::type,
               typename detail::as_fusion_element<T5>::type,
               typename detail::as_fusion_element<T6>::type,
               typename detail::as_fusion_element<T7>::type,
               typename detail::as_fusion_element<T8>::type,
               typename detail::as_fusion_element<T9>::type,
               typename detail::as_fusion_element<T10>::type,
               typename detail::as_fusion_element<T11>::type,
               typename detail::as_fusion_element<T12>::type,
               typename detail::as_fusion_element<T13>::type,
               typename detail::as_fusion_element<T14>::type,
               typename detail::as_fusion_element<T15>::type,
               typename detail::as_fusion_element<T16>::type,
               typename detail::as_fusion_element<T17>::type,
               typename detail::as_fusion_element<T18>::type>(
      arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11,
      arg12, arg13, arg14, arg15, arg16, arg17, arg18);
}
namespace result_of {
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8, typename T9,
          typename T10, typename T11, typename T12, typename T13, typename T14,
          typename T15, typename T16, typename T17, typename T18, typename T19>
struct make_deque<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
                  T14, T15, T16, T17, T18, T19, void_, void_, void_, void_,
                  void_, void_, void_, void_, void_, void_, void_> {
  typedef deque<typename detail::as_fusion_element<T0>::type,
                typename detail::as_fusion_element<T1>::type,
                typename detail::as_fusion_element<T2>::type,
                typename detail::as_fusion_element<T3>::type,
                typename detail::as_fusion_element<T4>::type,
                typename detail::as_fusion_element<T5>::type,
                typename detail::as_fusion_element<T6>::type,
                typename detail::as_fusion_element<T7>::type,
                typename detail::as_fusion_element<T8>::type,
                typename detail::as_fusion_element<T9>::type,
                typename detail::as_fusion_element<T10>::type,
                typename detail::as_fusion_element<T11>::type,
                typename detail::as_fusion_element<T12>::type,
                typename detail::as_fusion_element<T13>::type,
                typename detail::as_fusion_element<T14>::type,
                typename detail::as_fusion_element<T15>::type,
                typename detail::as_fusion_element<T16>::type,
                typename detail::as_fusion_element<T17>::type,
                typename detail::as_fusion_element<T18>::type,
                typename detail::as_fusion_element<T19>::type>
      type;
};
} // namespace result_of
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8, typename T9,
          typename T10, typename T11, typename T12, typename T13, typename T14,
          typename T15, typename T16, typename T17, typename T18, typename T19>
BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED inline deque<
    typename detail::as_fusion_element<T0>::type,
    typename detail::as_fusion_element<T1>::type,
    typename detail::as_fusion_element<T2>::type,
    typename detail::as_fusion_element<T3>::type,
    typename detail::as_fusion_element<T4>::type,
    typename detail::as_fusion_element<T5>::type,
    typename detail::as_fusion_element<T6>::type,
    typename detail::as_fusion_element<T7>::type,
    typename detail::as_fusion_element<T8>::type,
    typename detail::as_fusion_element<T9>::type,
    typename detail::as_fusion_element<T10>::type,
    typename detail::as_fusion_element<T11>::type,
    typename detail::as_fusion_element<T12>::type,
    typename detail::as_fusion_element<T13>::type,
    typename detail::as_fusion_element<T14>::type,
    typename detail::as_fusion_element<T15>::type,
    typename detail::as_fusion_element<T16>::type,
    typename detail::as_fusion_element<T17>::type,
    typename detail::as_fusion_element<T18>::type,
    typename detail::as_fusion_element<T19>::type>
make_deque(T0 const &arg0, T1 const &arg1, T2 const &arg2, T3 const &arg3,
           T4 const &arg4, T5 const &arg5, T6 const &arg6, T7 const &arg7,
           T8 const &arg8, T9 const &arg9, T10 const &arg10, T11 const &arg11,
           T12 const &arg12, T13 const &arg13, T14 const &arg14,
           T15 const &arg15, T16 const &arg16, T17 const &arg17,
           T18 const &arg18, T19 const &arg19) {
  return deque<typename detail::as_fusion_element<T0>::type,
               typename detail::as_fusion_element<T1>::type,
               typename detail::as_fusion_element<T2>::type,
               typename detail::as_fusion_element<T3>::type,
               typename detail::as_fusion_element<T4>::type,
               typename detail::as_fusion_element<T5>::type,
               typename detail::as_fusion_element<T6>::type,
               typename detail::as_fusion_element<T7>::type,
               typename detail::as_fusion_element<T8>::type,
               typename detail::as_fusion_element<T9>::type,
               typename detail::as_fusion_element<T10>::type,
               typename detail::as_fusion_element<T11>::type,
               typename detail::as_fusion_element<T12>::type,
               typename detail::as_fusion_element<T13>::type,
               typename detail::as_fusion_element<T14>::type,
               typename detail::as_fusion_element<T15>::type,
               typename detail::as_fusion_element<T16>::type,
               typename detail::as_fusion_element<T17>::type,
               typename detail::as_fusion_element<T18>::type,
               typename detail::as_fusion_element<T19>::type>(
      arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11,
      arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19);
}
namespace result_of {
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8, typename T9,
          typename T10, typename T11, typename T12, typename T13, typename T14,
          typename T15, typename T16, typename T17, typename T18, typename T19,
          typename T20>
struct make_deque<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
                  T14, T15, T16, T17, T18, T19, T20, void_, void_, void_, void_,
                  void_, void_, void_, void_, void_, void_> {
  typedef deque<typename detail::as_fusion_element<T0>::type,
                typename detail::as_fusion_element<T1>::type,
                typename detail::as_fusion_element<T2>::type,
                typename detail::as_fusion_element<T3>::type,
                typename detail::as_fusion_element<T4>::type,
                typename detail::as_fusion_element<T5>::type,
                typename detail::as_fusion_element<T6>::type,
                typename detail::as_fusion_element<T7>::type,
                typename detail::as_fusion_element<T8>::type,
                typename detail::as_fusion_element<T9>::type,
                typename detail::as_fusion_element<T10>::type,
                typename detail::as_fusion_element<T11>::type,
                typename detail::as_fusion_element<T12>::type,
                typename detail::as_fusion_element<T13>::type,
                typename detail::as_fusion_element<T14>::type,
                typename detail::as_fusion_element<T15>::type,
                typename detail::as_fusion_element<T16>::type,
                typename detail::as_fusion_element<T17>::type,
                typename detail::as_fusion_element<T18>::type,
                typename detail::as_fusion_element<T19>::type,
                typename detail::as_fusion_element<T20>::type>
      type;
};
} // namespace result_of
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8, typename T9,
          typename T10, typename T11, typename T12, typename T13, typename T14,
          typename T15, typename T16, typename T17, typename T18, typename T19,
          typename T20>
BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED inline deque<
    typename detail::as_fusion_element<T0>::type,
    typename detail::as_fusion_element<T1>::type,
    typename detail::as_fusion_element<T2>::type,
    typename detail::as_fusion_element<T3>::type,
    typename detail::as_fusion_element<T4>::type,
    typename detail::as_fusion_element<T5>::type,
    typename detail::as_fusion_element<T6>::type,
    typename detail::as_fusion_element<T7>::type,
    typename detail::as_fusion_element<T8>::type,
    typename detail::as_fusion_element<T9>::type,
    typename detail::as_fusion_element<T10>::type,
    typename detail::as_fusion_element<T11>::type,
    typename detail::as_fusion_element<T12>::type,
    typename detail::as_fusion_element<T13>::type,
    typename detail::as_fusion_element<T14>::type,
    typename detail::as_fusion_element<T15>::type,
    typename detail::as_fusion_element<T16>::type,
    typename detail::as_fusion_element<T17>::type,
    typename detail::as_fusion_element<T18>::type,
    typename detail::as_fusion_element<T19>::type,
    typename detail::as_fusion_element<T20>::type>
make_deque(T0 const &arg0, T1 const &arg1, T2 const &arg2, T3 const &arg3,
           T4 const &arg4, T5 const &arg5, T6 const &arg6, T7 const &arg7,
           T8 const &arg8, T9 const &arg9, T10 const &arg10, T11 const &arg11,
           T12 const &arg12, T13 const &arg13, T14 const &arg14,
           T15 const &arg15, T16 const &arg16, T17 const &arg17,
           T18 const &arg18, T19 const &arg19, T20 const &arg20) {
  return deque<typename detail::as_fusion_element<T0>::type,
               typename detail::as_fusion_element<T1>::type,
               typename detail::as_fusion_element<T2>::type,
               typename detail::as_fusion_element<T3>::type,
               typename detail::as_fusion_element<T4>::type,
               typename detail::as_fusion_element<T5>::type,
               typename detail::as_fusion_element<T6>::type,
               typename detail::as_fusion_element<T7>::type,
               typename detail::as_fusion_element<T8>::type,
               typename detail::as_fusion_element<T9>::type,
               typename detail::as_fusion_element<T10>::type,
               typename detail::as_fusion_element<T11>::type,
               typename detail::as_fusion_element<T12>::type,
               typename detail::as_fusion_element<T13>::type,
               typename detail::as_fusion_element<T14>::type,
               typename detail::as_fusion_element<T15>::type,
               typename detail::as_fusion_element<T16>::type,
               typename detail::as_fusion_element<T17>::type,
               typename detail::as_fusion_element<T18>::type,
               typename detail::as_fusion_element<T19>::type,
               typename detail::as_fusion_element<T20>::type>(
      arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11,
      arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20);
}
namespace result_of {
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8, typename T9,
          typename T10, typename T11, typename T12, typename T13, typename T14,
          typename T15, typename T16, typename T17, typename T18, typename T19,
          typename T20, typename T21>
struct make_deque<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
                  T14, T15, T16, T17, T18, T19, T20, T21, void_, void_, void_,
                  void_, void_, void_, void_, void_, void_> {
  typedef deque<typename detail::as_fusion_element<T0>::type,
                typename detail::as_fusion_element<T1>::type,
                typename detail::as_fusion_element<T2>::type,
                typename detail::as_fusion_element<T3>::type,
                typename detail::as_fusion_element<T4>::type,
                typename detail::as_fusion_element<T5>::type,
                typename detail::as_fusion_element<T6>::type,
                typename detail::as_fusion_element<T7>::type,
                typename detail::as_fusion_element<T8>::type,
                typename detail::as_fusion_element<T9>::type,
                typename detail::as_fusion_element<T10>::type,
                typename detail::as_fusion_element<T11>::type,
                typename detail::as_fusion_element<T12>::type,
                typename detail::as_fusion_element<T13>::type,
                typename detail::as_fusion_element<T14>::type,
                typename detail::as_fusion_element<T15>::type,
                typename detail::as_fusion_element<T16>::type,
                typename detail::as_fusion_element<T17>::type,
                typename detail::as_fusion_element<T18>::type,
                typename detail::as_fusion_element<T19>::type,
                typename detail::as_fusion_element<T20>::type,
                typename detail::as_fusion_element<T21>::type>
      type;
};
} // namespace result_of
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8, typename T9,
          typename T10, typename T11, typename T12, typename T13, typename T14,
          typename T15, typename T16, typename T17, typename T18, typename T19,
          typename T20, typename T21>
BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED inline deque<
    typename detail::as_fusion_element<T0>::type,
    typename detail::as_fusion_element<T1>::type,
    typename detail::as_fusion_element<T2>::type,
    typename detail::as_fusion_element<T3>::type,
    typename detail::as_fusion_element<T4>::type,
    typename detail::as_fusion_element<T5>::type,
    typename detail::as_fusion_element<T6>::type,
    typename detail::as_fusion_element<T7>::type,
    typename detail::as_fusion_element<T8>::type,
    typename detail::as_fusion_element<T9>::type,
    typename detail::as_fusion_element<T10>::type,
    typename detail::as_fusion_element<T11>::type,
    typename detail::as_fusion_element<T12>::type,
    typename detail::as_fusion_element<T13>::type,
    typename detail::as_fusion_element<T14>::type,
    typename detail::as_fusion_element<T15>::type,
    typename detail::as_fusion_element<T16>::type,
    typename detail::as_fusion_element<T17>::type,
    typename detail::as_fusion_element<T18>::type,
    typename detail::as_fusion_element<T19>::type,
    typename detail::as_fusion_element<T20>::type,
    typename detail::as_fusion_element<T21>::type>
make_deque(T0 const &arg0, T1 const &arg1, T2 const &arg2, T3 const &arg3,
           T4 const &arg4, T5 const &arg5, T6 const &arg6, T7 const &arg7,
           T8 const &arg8, T9 const &arg9, T10 const &arg10, T11 const &arg11,
           T12 const &arg12, T13 const &arg13, T14 const &arg14,
           T15 const &arg15, T16 const &arg16, T17 const &arg17,
           T18 const &arg18, T19 const &arg19, T20 const &arg20,
           T21 const &arg21) {
  return deque<typename detail::as_fusion_element<T0>::type,
               typename detail::as_fusion_element<T1>::type,
               typename detail::as_fusion_element<T2>::type,
               typename detail::as_fusion_element<T3>::type,
               typename detail::as_fusion_element<T4>::type,
               typename detail::as_fusion_element<T5>::type,
               typename detail::as_fusion_element<T6>::type,
               typename detail::as_fusion_element<T7>::type,
               typename detail::as_fusion_element<T8>::type,
               typename detail::as_fusion_element<T9>::type,
               typename detail::as_fusion_element<T10>::type,
               typename detail::as_fusion_element<T11>::type,
               typename detail::as_fusion_element<T12>::type,
               typename detail::as_fusion_element<T13>::type,
               typename detail::as_fusion_element<T14>::type,
               typename detail::as_fusion_element<T15>::type,
               typename detail::as_fusion_element<T16>::type,
               typename detail::as_fusion_element<T17>::type,
               typename detail::as_fusion_element<T18>::type,
               typename detail::as_fusion_element<T19>::type,
               typename detail::as_fusion_element<T20>::type,
               typename detail::as_fusion_element<T21>::type>(
      arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11,
      arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21);
}
namespace result_of {
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8, typename T9,
          typename T10, typename T11, typename T12, typename T13, typename T14,
          typename T15, typename T16, typename T17, typename T18, typename T19,
          typename T20, typename T21, typename T22>
struct make_deque<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
                  T14, T15, T16, T17, T18, T19, T20, T21, T22, void_, void_,
                  void_, void_, void_, void_, void_, void_> {
  typedef deque<typename detail::as_fusion_element<T0>::type,
                typename detail::as_fusion_element<T1>::type,
                typename detail::as_fusion_element<T2>::type,
                typename detail::as_fusion_element<T3>::type,
                typename detail::as_fusion_element<T4>::type,
                typename detail::as_fusion_element<T5>::type,
                typename detail::as_fusion_element<T6>::type,
                typename detail::as_fusion_element<T7>::type,
                typename detail::as_fusion_element<T8>::type,
                typename detail::as_fusion_element<T9>::type,
                typename detail::as_fusion_element<T10>::type,
                typename detail::as_fusion_element<T11>::type,
                typename detail::as_fusion_element<T12>::type,
                typename detail::as_fusion_element<T13>::type,
                typename detail::as_fusion_element<T14>::type,
                typename detail::as_fusion_element<T15>::type,
                typename detail::as_fusion_element<T16>::type,
                typename detail::as_fusion_element<T17>::type,
                typename detail::as_fusion_element<T18>::type,
                typename detail::as_fusion_element<T19>::type,
                typename detail::as_fusion_element<T20>::type,
                typename detail::as_fusion_element<T21>::type,
                typename detail::as_fusion_element<T22>::type>
      type;
};
} // namespace result_of
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8, typename T9,
          typename T10, typename T11, typename T12, typename T13, typename T14,
          typename T15, typename T16, typename T17, typename T18, typename T19,
          typename T20, typename T21, typename T22>
BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED inline deque<
    typename detail::as_fusion_element<T0>::type,
    typename detail::as_fusion_element<T1>::type,
    typename detail::as_fusion_element<T2>::type,
    typename detail::as_fusion_element<T3>::type,
    typename detail::as_fusion_element<T4>::type,
    typename detail::as_fusion_element<T5>::type,
    typename detail::as_fusion_element<T6>::type,
    typename detail::as_fusion_element<T7>::type,
    typename detail::as_fusion_element<T8>::type,
    typename detail::as_fusion_element<T9>::type,
    typename detail::as_fusion_element<T10>::type,
    typename detail::as_fusion_element<T11>::type,
    typename detail::as_fusion_element<T12>::type,
    typename detail::as_fusion_element<T13>::type,
    typename detail::as_fusion_element<T14>::type,
    typename detail::as_fusion_element<T15>::type,
    typename detail::as_fusion_element<T16>::type,
    typename detail::as_fusion_element<T17>::type,
    typename detail::as_fusion_element<T18>::type,
    typename detail::as_fusion_element<T19>::type,
    typename detail::as_fusion_element<T20>::type,
    typename detail::as_fusion_element<T21>::type,
    typename detail::as_fusion_element<T22>::type>
make_deque(T0 const &arg0, T1 const &arg1, T2 const &arg2, T3 const &arg3,
           T4 const &arg4, T5 const &arg5, T6 const &arg6, T7 const &arg7,
           T8 const &arg8, T9 const &arg9, T10 const &arg10, T11 const &arg11,
           T12 const &arg12, T13 const &arg13, T14 const &arg14,
           T15 const &arg15, T16 const &arg16, T17 const &arg17,
           T18 const &arg18, T19 const &arg19, T20 const &arg20,
           T21 const &arg21, T22 const &arg22) {
  return deque<typename detail::as_fusion_element<T0>::type,
               typename detail::as_fusion_element<T1>::type,
               typename detail::as_fusion_element<T2>::type,
               typename detail::as_fusion_element<T3>::type,
               typename detail::as_fusion_element<T4>::type,
               typename detail::as_fusion_element<T5>::type,
               typename detail::as_fusion_element<T6>::type,
               typename detail::as_fusion_element<T7>::type,
               typename detail::as_fusion_element<T8>::type,
               typename detail::as_fusion_element<T9>::type,
               typename detail::as_fusion_element<T10>::type,
               typename detail::as_fusion_element<T11>::type,
               typename detail::as_fusion_element<T12>::type,
               typename detail::as_fusion_element<T13>::type,
               typename detail::as_fusion_element<T14>::type,
               typename detail::as_fusion_element<T15>::type,
               typename detail::as_fusion_element<T16>::type,
               typename detail::as_fusion_element<T17>::type,
               typename detail::as_fusion_element<T18>::type,
               typename detail::as_fusion_element<T19>::type,
               typename detail::as_fusion_element<T20>::type,
               typename detail::as_fusion_element<T21>::type,
               typename detail::as_fusion_element<T22>::type>(
      arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11,
      arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21,
      arg22);
}
namespace result_of {
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8, typename T9,
          typename T10, typename T11, typename T12, typename T13, typename T14,
          typename T15, typename T16, typename T17, typename T18, typename T19,
          typename T20, typename T21, typename T22, typename T23>
struct make_deque<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
                  T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, void_,
                  void_, void_, void_, void_, void_, void_> {
  typedef deque<typename detail::as_fusion_element<T0>::type,
                typename detail::as_fusion_element<T1>::type,
                typename detail::as_fusion_element<T2>::type,
                typename detail::as_fusion_element<T3>::type,
                typename detail::as_fusion_element<T4>::type,
                typename detail::as_fusion_element<T5>::type,
                typename detail::as_fusion_element<T6>::type,
                typename detail::as_fusion_element<T7>::type,
                typename detail::as_fusion_element<T8>::type,
                typename detail::as_fusion_element<T9>::type,
                typename detail::as_fusion_element<T10>::type,
                typename detail::as_fusion_element<T11>::type,
                typename detail::as_fusion_element<T12>::type,
                typename detail::as_fusion_element<T13>::type,
                typename detail::as_fusion_element<T14>::type,
                typename detail::as_fusion_element<T15>::type,
                typename detail::as_fusion_element<T16>::type,
                typename detail::as_fusion_element<T17>::type,
                typename detail::as_fusion_element<T18>::type,
                typename detail::as_fusion_element<T19>::type,
                typename detail::as_fusion_element<T20>::type,
                typename detail::as_fusion_element<T21>::type,
                typename detail::as_fusion_element<T22>::type,
                typename detail::as_fusion_element<T23>::type>
      type;
};
} // namespace result_of
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8, typename T9,
          typename T10, typename T11, typename T12, typename T13, typename T14,
          typename T15, typename T16, typename T17, typename T18, typename T19,
          typename T20, typename T21, typename T22, typename T23>
BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED inline deque<
    typename detail::as_fusion_element<T0>::type,
    typename detail::as_fusion_element<T1>::type,
    typename detail::as_fusion_element<T2>::type,
    typename detail::as_fusion_element<T3>::type,
    typename detail::as_fusion_element<T4>::type,
    typename detail::as_fusion_element<T5>::type,
    typename detail::as_fusion_element<T6>::type,
    typename detail::as_fusion_element<T7>::type,
    typename detail::as_fusion_element<T8>::type,
    typename detail::as_fusion_element<T9>::type,
    typename detail::as_fusion_element<T10>::type,
    typename detail::as_fusion_element<T11>::type,
    typename detail::as_fusion_element<T12>::type,
    typename detail::as_fusion_element<T13>::type,
    typename detail::as_fusion_element<T14>::type,
    typename detail::as_fusion_element<T15>::type,
    typename detail::as_fusion_element<T16>::type,
    typename detail::as_fusion_element<T17>::type,
    typename detail::as_fusion_element<T18>::type,
    typename detail::as_fusion_element<T19>::type,
    typename detail::as_fusion_element<T20>::type,
    typename detail::as_fusion_element<T21>::type,
    typename detail::as_fusion_element<T22>::type,
    typename detail::as_fusion_element<T23>::type>
make_deque(T0 const &arg0, T1 const &arg1, T2 const &arg2, T3 const &arg3,
           T4 const &arg4, T5 const &arg5, T6 const &arg6, T7 const &arg7,
           T8 const &arg8, T9 const &arg9, T10 const &arg10, T11 const &arg11,
           T12 const &arg12, T13 const &arg13, T14 const &arg14,
           T15 const &arg15, T16 const &arg16, T17 const &arg17,
           T18 const &arg18, T19 const &arg19, T20 const &arg20,
           T21 const &arg21, T22 const &arg22, T23 const &arg23) {
  return deque<typename detail::as_fusion_element<T0>::type,
               typename detail::as_fusion_element<T1>::type,
               typename detail::as_fusion_element<T2>::type,
               typename detail::as_fusion_element<T3>::type,
               typename detail::as_fusion_element<T4>::type,
               typename detail::as_fusion_element<T5>::type,
               typename detail::as_fusion_element<T6>::type,
               typename detail::as_fusion_element<T7>::type,
               typename detail::as_fusion_element<T8>::type,
               typename detail::as_fusion_element<T9>::type,
               typename detail::as_fusion_element<T10>::type,
               typename detail::as_fusion_element<T11>::type,
               typename detail::as_fusion_element<T12>::type,
               typename detail::as_fusion_element<T13>::type,
               typename detail::as_fusion_element<T14>::type,
               typename detail::as_fusion_element<T15>::type,
               typename detail::as_fusion_element<T16>::type,
               typename detail::as_fusion_element<T17>::type,
               typename detail::as_fusion_element<T18>::type,
               typename detail::as_fusion_element<T19>::type,
               typename detail::as_fusion_element<T20>::type,
               typename detail::as_fusion_element<T21>::type,
               typename detail::as_fusion_element<T22>::type,
               typename detail::as_fusion_element<T23>::type>(
      arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11,
      arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21,
      arg22, arg23);
}
namespace result_of {
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8, typename T9,
          typename T10, typename T11, typename T12, typename T13, typename T14,
          typename T15, typename T16, typename T17, typename T18, typename T19,
          typename T20, typename T21, typename T22, typename T23, typename T24>
struct make_deque<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
                  T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, void_,
                  void_, void_, void_, void_, void_> {
  typedef deque<typename detail::as_fusion_element<T0>::type,
                typename detail::as_fusion_element<T1>::type,
                typename detail::as_fusion_element<T2>::type,
                typename detail::as_fusion_element<T3>::type,
                typename detail::as_fusion_element<T4>::type,
                typename detail::as_fusion_element<T5>::type,
                typename detail::as_fusion_element<T6>::type,
                typename detail::as_fusion_element<T7>::type,
                typename detail::as_fusion_element<T8>::type,
                typename detail::as_fusion_element<T9>::type,
                typename detail::as_fusion_element<T10>::type,
                typename detail::as_fusion_element<T11>::type,
                typename detail::as_fusion_element<T12>::type,
                typename detail::as_fusion_element<T13>::type,
                typename detail::as_fusion_element<T14>::type,
                typename detail::as_fusion_element<T15>::type,
                typename detail::as_fusion_element<T16>::type,
                typename detail::as_fusion_element<T17>::type,
                typename detail::as_fusion_element<T18>::type,
                typename detail::as_fusion_element<T19>::type,
                typename detail::as_fusion_element<T20>::type,
                typename detail::as_fusion_element<T21>::type,
                typename detail::as_fusion_element<T22>::type,
                typename detail::as_fusion_element<T23>::type,
                typename detail::as_fusion_element<T24>::type>
      type;
};
} // namespace result_of
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8, typename T9,
          typename T10, typename T11, typename T12, typename T13, typename T14,
          typename T15, typename T16, typename T17, typename T18, typename T19,
          typename T20, typename T21, typename T22, typename T23, typename T24>
BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED inline deque<
    typename detail::as_fusion_element<T0>::type,
    typename detail::as_fusion_element<T1>::type,
    typename detail::as_fusion_element<T2>::type,
    typename detail::as_fusion_element<T3>::type,
    typename detail::as_fusion_element<T4>::type,
    typename detail::as_fusion_element<T5>::type,
    typename detail::as_fusion_element<T6>::type,
    typename detail::as_fusion_element<T7>::type,
    typename detail::as_fusion_element<T8>::type,
    typename detail::as_fusion_element<T9>::type,
    typename detail::as_fusion_element<T10>::type,
    typename detail::as_fusion_element<T11>::type,
    typename detail::as_fusion_element<T12>::type,
    typename detail::as_fusion_element<T13>::type,
    typename detail::as_fusion_element<T14>::type,
    typename detail::as_fusion_element<T15>::type,
    typename detail::as_fusion_element<T16>::type,
    typename detail::as_fusion_element<T17>::type,
    typename detail::as_fusion_element<T18>::type,
    typename detail::as_fusion_element<T19>::type,
    typename detail::as_fusion_element<T20>::type,
    typename detail::as_fusion_element<T21>::type,
    typename detail::as_fusion_element<T22>::type,
    typename detail::as_fusion_element<T23>::type,
    typename detail::as_fusion_element<T24>::type>
make_deque(T0 const &arg0, T1 const &arg1, T2 const &arg2, T3 const &arg3,
           T4 const &arg4, T5 const &arg5, T6 const &arg6, T7 const &arg7,
           T8 const &arg8, T9 const &arg9, T10 const &arg10, T11 const &arg11,
           T12 const &arg12, T13 const &arg13, T14 const &arg14,
           T15 const &arg15, T16 const &arg16, T17 const &arg17,
           T18 const &arg18, T19 const &arg19, T20 const &arg20,
           T21 const &arg21, T22 const &arg22, T23 const &arg23,
           T24 const &arg24) {
  return deque<typename detail::as_fusion_element<T0>::type,
               typename detail::as_fusion_element<T1>::type,
               typename detail::as_fusion_element<T2>::type,
               typename detail::as_fusion_element<T3>::type,
               typename detail::as_fusion_element<T4>::type,
               typename detail::as_fusion_element<T5>::type,
               typename detail::as_fusion_element<T6>::type,
               typename detail::as_fusion_element<T7>::type,
               typename detail::as_fusion_element<T8>::type,
               typename detail::as_fusion_element<T9>::type,
               typename detail::as_fusion_element<T10>::type,
               typename detail::as_fusion_element<T11>::type,
               typename detail::as_fusion_element<T12>::type,
               typename detail::as_fusion_element<T13>::type,
               typename detail::as_fusion_element<T14>::type,
               typename detail::as_fusion_element<T15>::type,
               typename detail::as_fusion_element<T16>::type,
               typename detail::as_fusion_element<T17>::type,
               typename detail::as_fusion_element<T18>::type,
               typename detail::as_fusion_element<T19>::type,
               typename detail::as_fusion_element<T20>::type,
               typename detail::as_fusion_element<T21>::type,
               typename detail::as_fusion_element<T22>::type,
               typename detail::as_fusion_element<T23>::type,
               typename detail::as_fusion_element<T24>::type>(
      arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11,
      arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21,
      arg22, arg23, arg24);
}
namespace result_of {
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8, typename T9,
          typename T10, typename T11, typename T12, typename T13, typename T14,
          typename T15, typename T16, typename T17, typename T18, typename T19,
          typename T20, typename T21, typename T22, typename T23, typename T24,
          typename T25>
struct make_deque<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
                  T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25,
                  void_, void_, void_, void_, void_> {
  typedef deque<typename detail::as_fusion_element<T0>::type,
                typename detail::as_fusion_element<T1>::type,
                typename detail::as_fusion_element<T2>::type,
                typename detail::as_fusion_element<T3>::type,
                typename detail::as_fusion_element<T4>::type,
                typename detail::as_fusion_element<T5>::type,
                typename detail::as_fusion_element<T6>::type,
                typename detail::as_fusion_element<T7>::type,
                typename detail::as_fusion_element<T8>::type,
                typename detail::as_fusion_element<T9>::type,
                typename detail::as_fusion_element<T10>::type,
                typename detail::as_fusion_element<T11>::type,
                typename detail::as_fusion_element<T12>::type,
                typename detail::as_fusion_element<T13>::type,
                typename detail::as_fusion_element<T14>::type,
                typename detail::as_fusion_element<T15>::type,
                typename detail::as_fusion_element<T16>::type,
                typename detail::as_fusion_element<T17>::type,
                typename detail::as_fusion_element<T18>::type,
                typename detail::as_fusion_element<T19>::type,
                typename detail::as_fusion_element<T20>::type,
                typename detail::as_fusion_element<T21>::type,
                typename detail::as_fusion_element<T22>::type,
                typename detail::as_fusion_element<T23>::type,
                typename detail::as_fusion_element<T24>::type,
                typename detail::as_fusion_element<T25>::type>
      type;
};
} // namespace result_of
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8, typename T9,
          typename T10, typename T11, typename T12, typename T13, typename T14,
          typename T15, typename T16, typename T17, typename T18, typename T19,
          typename T20, typename T21, typename T22, typename T23, typename T24,
          typename T25>
BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED inline deque<
    typename detail::as_fusion_element<T0>::type,
    typename detail::as_fusion_element<T1>::type,
    typename detail::as_fusion_element<T2>::type,
    typename detail::as_fusion_element<T3>::type,
    typename detail::as_fusion_element<T4>::type,
    typename detail::as_fusion_element<T5>::type,
    typename detail::as_fusion_element<T6>::type,
    typename detail::as_fusion_element<T7>::type,
    typename detail::as_fusion_element<T8>::type,
    typename detail::as_fusion_element<T9>::type,
    typename detail::as_fusion_element<T10>::type,
    typename detail::as_fusion_element<T11>::type,
    typename detail::as_fusion_element<T12>::type,
    typename detail::as_fusion_element<T13>::type,
    typename detail::as_fusion_element<T14>::type,
    typename detail::as_fusion_element<T15>::type,
    typename detail::as_fusion_element<T16>::type,
    typename detail::as_fusion_element<T17>::type,
    typename detail::as_fusion_element<T18>::type,
    typename detail::as_fusion_element<T19>::type,
    typename detail::as_fusion_element<T20>::type,
    typename detail::as_fusion_element<T21>::type,
    typename detail::as_fusion_element<T22>::type,
    typename detail::as_fusion_element<T23>::type,
    typename detail::as_fusion_element<T24>::type,
    typename detail::as_fusion_element<T25>::type>
make_deque(T0 const &arg0, T1 const &arg1, T2 const &arg2, T3 const &arg3,
           T4 const &arg4, T5 const &arg5, T6 const &arg6, T7 const &arg7,
           T8 const &arg8, T9 const &arg9, T10 const &arg10, T11 const &arg11,
           T12 const &arg12, T13 const &arg13, T14 const &arg14,
           T15 const &arg15, T16 const &arg16, T17 const &arg17,
           T18 const &arg18, T19 const &arg19, T20 const &arg20,
           T21 const &arg21, T22 const &arg22, T23 const &arg23,
           T24 const &arg24, T25 const &arg25) {
  return deque<typename detail::as_fusion_element<T0>::type,
               typename detail::as_fusion_element<T1>::type,
               typename detail::as_fusion_element<T2>::type,
               typename detail::as_fusion_element<T3>::type,
               typename detail::as_fusion_element<T4>::type,
               typename detail::as_fusion_element<T5>::type,
               typename detail::as_fusion_element<T6>::type,
               typename detail::as_fusion_element<T7>::type,
               typename detail::as_fusion_element<T8>::type,
               typename detail::as_fusion_element<T9>::type,
               typename detail::as_fusion_element<T10>::type,
               typename detail::as_fusion_element<T11>::type,
               typename detail::as_fusion_element<T12>::type,
               typename detail::as_fusion_element<T13>::type,
               typename detail::as_fusion_element<T14>::type,
               typename detail::as_fusion_element<T15>::type,
               typename detail::as_fusion_element<T16>::type,
               typename detail::as_fusion_element<T17>::type,
               typename detail::as_fusion_element<T18>::type,
               typename detail::as_fusion_element<T19>::type,
               typename detail::as_fusion_element<T20>::type,
               typename detail::as_fusion_element<T21>::type,
               typename detail::as_fusion_element<T22>::type,
               typename detail::as_fusion_element<T23>::type,
               typename detail::as_fusion_element<T24>::type,
               typename detail::as_fusion_element<T25>::type>(
      arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11,
      arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21,
      arg22, arg23, arg24, arg25);
}
namespace result_of {
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8, typename T9,
          typename T10, typename T11, typename T12, typename T13, typename T14,
          typename T15, typename T16, typename T17, typename T18, typename T19,
          typename T20, typename T21, typename T22, typename T23, typename T24,
          typename T25, typename T26>
struct make_deque<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
                  T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25,
                  T26, void_, void_, void_, void_> {
  typedef deque<typename detail::as_fusion_element<T0>::type,
                typename detail::as_fusion_element<T1>::type,
                typename detail::as_fusion_element<T2>::type,
                typename detail::as_fusion_element<T3>::type,
                typename detail::as_fusion_element<T4>::type,
                typename detail::as_fusion_element<T5>::type,
                typename detail::as_fusion_element<T6>::type,
                typename detail::as_fusion_element<T7>::type,
                typename detail::as_fusion_element<T8>::type,
                typename detail::as_fusion_element<T9>::type,
                typename detail::as_fusion_element<T10>::type,
                typename detail::as_fusion_element<T11>::type,
                typename detail::as_fusion_element<T12>::type,
                typename detail::as_fusion_element<T13>::type,
                typename detail::as_fusion_element<T14>::type,
                typename detail::as_fusion_element<T15>::type,
                typename detail::as_fusion_element<T16>::type,
                typename detail::as_fusion_element<T17>::type,
                typename detail::as_fusion_element<T18>::type,
                typename detail::as_fusion_element<T19>::type,
                typename detail::as_fusion_element<T20>::type,
                typename detail::as_fusion_element<T21>::type,
                typename detail::as_fusion_element<T22>::type,
                typename detail::as_fusion_element<T23>::type,
                typename detail::as_fusion_element<T24>::type,
                typename detail::as_fusion_element<T25>::type,
                typename detail::as_fusion_element<T26>::type>
      type;
};
} // namespace result_of
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8, typename T9,
          typename T10, typename T11, typename T12, typename T13, typename T14,
          typename T15, typename T16, typename T17, typename T18, typename T19,
          typename T20, typename T21, typename T22, typename T23, typename T24,
          typename T25, typename T26>
BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED inline deque<
    typename detail::as_fusion_element<T0>::type,
    typename detail::as_fusion_element<T1>::type,
    typename detail::as_fusion_element<T2>::type,
    typename detail::as_fusion_element<T3>::type,
    typename detail::as_fusion_element<T4>::type,
    typename detail::as_fusion_element<T5>::type,
    typename detail::as_fusion_element<T6>::type,
    typename detail::as_fusion_element<T7>::type,
    typename detail::as_fusion_element<T8>::type,
    typename detail::as_fusion_element<T9>::type,
    typename detail::as_fusion_element<T10>::type,
    typename detail::as_fusion_element<T11>::type,
    typename detail::as_fusion_element<T12>::type,
    typename detail::as_fusion_element<T13>::type,
    typename detail::as_fusion_element<T14>::type,
    typename detail::as_fusion_element<T15>::type,
    typename detail::as_fusion_element<T16>::type,
    typename detail::as_fusion_element<T17>::type,
    typename detail::as_fusion_element<T18>::type,
    typename detail::as_fusion_element<T19>::type,
    typename detail::as_fusion_element<T20>::type,
    typename detail::as_fusion_element<T21>::type,
    typename detail::as_fusion_element<T22>::type,
    typename detail::as_fusion_element<T23>::type,
    typename detail::as_fusion_element<T24>::type,
    typename detail::as_fusion_element<T25>::type,
    typename detail::as_fusion_element<T26>::type>
make_deque(T0 const &arg0, T1 const &arg1, T2 const &arg2, T3 const &arg3,
           T4 const &arg4, T5 const &arg5, T6 const &arg6, T7 const &arg7,
           T8 const &arg8, T9 const &arg9, T10 const &arg10, T11 const &arg11,
           T12 const &arg12, T13 const &arg13, T14 const &arg14,
           T15 const &arg15, T16 const &arg16, T17 const &arg17,
           T18 const &arg18, T19 const &arg19, T20 const &arg20,
           T21 const &arg21, T22 const &arg22, T23 const &arg23,
           T24 const &arg24, T25 const &arg25, T26 const &arg26) {
  return deque<typename detail::as_fusion_element<T0>::type,
               typename detail::as_fusion_element<T1>::type,
               typename detail::as_fusion_element<T2>::type,
               typename detail::as_fusion_element<T3>::type,
               typename detail::as_fusion_element<T4>::type,
               typename detail::as_fusion_element<T5>::type,
               typename detail::as_fusion_element<T6>::type,
               typename detail::as_fusion_element<T7>::type,
               typename detail::as_fusion_element<T8>::type,
               typename detail::as_fusion_element<T9>::type,
               typename detail::as_fusion_element<T10>::type,
               typename detail::as_fusion_element<T11>::type,
               typename detail::as_fusion_element<T12>::type,
               typename detail::as_fusion_element<T13>::type,
               typename detail::as_fusion_element<T14>::type,
               typename detail::as_fusion_element<T15>::type,
               typename detail::as_fusion_element<T16>::type,
               typename detail::as_fusion_element<T17>::type,
               typename detail::as_fusion_element<T18>::type,
               typename detail::as_fusion_element<T19>::type,
               typename detail::as_fusion_element<T20>::type,
               typename detail::as_fusion_element<T21>::type,
               typename detail::as_fusion_element<T22>::type,
               typename detail::as_fusion_element<T23>::type,
               typename detail::as_fusion_element<T24>::type,
               typename detail::as_fusion_element<T25>::type,
               typename detail::as_fusion_element<T26>::type>(
      arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11,
      arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21,
      arg22, arg23, arg24, arg25, arg26);
}
namespace result_of {
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8, typename T9,
          typename T10, typename T11, typename T12, typename T13, typename T14,
          typename T15, typename T16, typename T17, typename T18, typename T19,
          typename T20, typename T21, typename T22, typename T23, typename T24,
          typename T25, typename T26, typename T27>
struct make_deque<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
                  T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25,
                  T26, T27, void_, void_, void_> {
  typedef deque<typename detail::as_fusion_element<T0>::type,
                typename detail::as_fusion_element<T1>::type,
                typename detail::as_fusion_element<T2>::type,
                typename detail::as_fusion_element<T3>::type,
                typename detail::as_fusion_element<T4>::type,
                typename detail::as_fusion_element<T5>::type,
                typename detail::as_fusion_element<T6>::type,
                typename detail::as_fusion_element<T7>::type,
                typename detail::as_fusion_element<T8>::type,
                typename detail::as_fusion_element<T9>::type,
                typename detail::as_fusion_element<T10>::type,
                typename detail::as_fusion_element<T11>::type,
                typename detail::as_fusion_element<T12>::type,
                typename detail::as_fusion_element<T13>::type,
                typename detail::as_fusion_element<T14>::type,
                typename detail::as_fusion_element<T15>::type,
                typename detail::as_fusion_element<T16>::type,
                typename detail::as_fusion_element<T17>::type,
                typename detail::as_fusion_element<T18>::type,
                typename detail::as_fusion_element<T19>::type,
                typename detail::as_fusion_element<T20>::type,
                typename detail::as_fusion_element<T21>::type,
                typename detail::as_fusion_element<T22>::type,
                typename detail::as_fusion_element<T23>::type,
                typename detail::as_fusion_element<T24>::type,
                typename detail::as_fusion_element<T25>::type,
                typename detail::as_fusion_element<T26>::type,
                typename detail::as_fusion_element<T27>::type>
      type;
};
} // namespace result_of
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8, typename T9,
          typename T10, typename T11, typename T12, typename T13, typename T14,
          typename T15, typename T16, typename T17, typename T18, typename T19,
          typename T20, typename T21, typename T22, typename T23, typename T24,
          typename T25, typename T26, typename T27>
BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED inline deque<
    typename detail::as_fusion_element<T0>::type,
    typename detail::as_fusion_element<T1>::type,
    typename detail::as_fusion_element<T2>::type,
    typename detail::as_fusion_element<T3>::type,
    typename detail::as_fusion_element<T4>::type,
    typename detail::as_fusion_element<T5>::type,
    typename detail::as_fusion_element<T6>::type,
    typename detail::as_fusion_element<T7>::type,
    typename detail::as_fusion_element<T8>::type,
    typename detail::as_fusion_element<T9>::type,
    typename detail::as_fusion_element<T10>::type,
    typename detail::as_fusion_element<T11>::type,
    typename detail::as_fusion_element<T12>::type,
    typename detail::as_fusion_element<T13>::type,
    typename detail::as_fusion_element<T14>::type,
    typename detail::as_fusion_element<T15>::type,
    typename detail::as_fusion_element<T16>::type,
    typename detail::as_fusion_element<T17>::type,
    typename detail::as_fusion_element<T18>::type,
    typename detail::as_fusion_element<T19>::type,
    typename detail::as_fusion_element<T20>::type,
    typename detail::as_fusion_element<T21>::type,
    typename detail::as_fusion_element<T22>::type,
    typename detail::as_fusion_element<T23>::type,
    typename detail::as_fusion_element<T24>::type,
    typename detail::as_fusion_element<T25>::type,
    typename detail::as_fusion_element<T26>::type,
    typename detail::as_fusion_element<T27>::type>
make_deque(T0 const &arg0, T1 const &arg1, T2 const &arg2, T3 const &arg3,
           T4 const &arg4, T5 const &arg5, T6 const &arg6, T7 const &arg7,
           T8 const &arg8, T9 const &arg9, T10 const &arg10, T11 const &arg11,
           T12 const &arg12, T13 const &arg13, T14 const &arg14,
           T15 const &arg15, T16 const &arg16, T17 const &arg17,
           T18 const &arg18, T19 const &arg19, T20 const &arg20,
           T21 const &arg21, T22 const &arg22, T23 const &arg23,
           T24 const &arg24, T25 const &arg25, T26 const &arg26,
           T27 const &arg27) {
  return deque<typename detail::as_fusion_element<T0>::type,
               typename detail::as_fusion_element<T1>::type,
               typename detail::as_fusion_element<T2>::type,
               typename detail::as_fusion_element<T3>::type,
               typename detail::as_fusion_element<T4>::type,
               typename detail::as_fusion_element<T5>::type,
               typename detail::as_fusion_element<T6>::type,
               typename detail::as_fusion_element<T7>::type,
               typename detail::as_fusion_element<T8>::type,
               typename detail::as_fusion_element<T9>::type,
               typename detail::as_fusion_element<T10>::type,
               typename detail::as_fusion_element<T11>::type,
               typename detail::as_fusion_element<T12>::type,
               typename detail::as_fusion_element<T13>::type,
               typename detail::as_fusion_element<T14>::type,
               typename detail::as_fusion_element<T15>::type,
               typename detail::as_fusion_element<T16>::type,
               typename detail::as_fusion_element<T17>::type,
               typename detail::as_fusion_element<T18>::type,
               typename detail::as_fusion_element<T19>::type,
               typename detail::as_fusion_element<T20>::type,
               typename detail::as_fusion_element<T21>::type,
               typename detail::as_fusion_element<T22>::type,
               typename detail::as_fusion_element<T23>::type,
               typename detail::as_fusion_element<T24>::type,
               typename detail::as_fusion_element<T25>::type,
               typename detail::as_fusion_element<T26>::type,
               typename detail::as_fusion_element<T27>::type>(
      arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11,
      arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21,
      arg22, arg23, arg24, arg25, arg26, arg27);
}
namespace result_of {
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8, typename T9,
          typename T10, typename T11, typename T12, typename T13, typename T14,
          typename T15, typename T16, typename T17, typename T18, typename T19,
          typename T20, typename T21, typename T22, typename T23, typename T24,
          typename T25, typename T26, typename T27, typename T28>
struct make_deque<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
                  T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25,
                  T26, T27, T28, void_, void_> {
  typedef deque<typename detail::as_fusion_element<T0>::type,
                typename detail::as_fusion_element<T1>::type,
                typename detail::as_fusion_element<T2>::type,
                typename detail::as_fusion_element<T3>::type,
                typename detail::as_fusion_element<T4>::type,
                typename detail::as_fusion_element<T5>::type,
                typename detail::as_fusion_element<T6>::type,
                typename detail::as_fusion_element<T7>::type,
                typename detail::as_fusion_element<T8>::type,
                typename detail::as_fusion_element<T9>::type,
                typename detail::as_fusion_element<T10>::type,
                typename detail::as_fusion_element<T11>::type,
                typename detail::as_fusion_element<T12>::type,
                typename detail::as_fusion_element<T13>::type,
                typename detail::as_fusion_element<T14>::type,
                typename detail::as_fusion_element<T15>::type,
                typename detail::as_fusion_element<T16>::type,
                typename detail::as_fusion_element<T17>::type,
                typename detail::as_fusion_element<T18>::type,
                typename detail::as_fusion_element<T19>::type,
                typename detail::as_fusion_element<T20>::type,
                typename detail::as_fusion_element<T21>::type,
                typename detail::as_fusion_element<T22>::type,
                typename detail::as_fusion_element<T23>::type,
                typename detail::as_fusion_element<T24>::type,
                typename detail::as_fusion_element<T25>::type,
                typename detail::as_fusion_element<T26>::type,
                typename detail::as_fusion_element<T27>::type,
                typename detail::as_fusion_element<T28>::type>
      type;
};
} // namespace result_of
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8, typename T9,
          typename T10, typename T11, typename T12, typename T13, typename T14,
          typename T15, typename T16, typename T17, typename T18, typename T19,
          typename T20, typename T21, typename T22, typename T23, typename T24,
          typename T25, typename T26, typename T27, typename T28>
BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED inline deque<
    typename detail::as_fusion_element<T0>::type,
    typename detail::as_fusion_element<T1>::type,
    typename detail::as_fusion_element<T2>::type,
    typename detail::as_fusion_element<T3>::type,
    typename detail::as_fusion_element<T4>::type,
    typename detail::as_fusion_element<T5>::type,
    typename detail::as_fusion_element<T6>::type,
    typename detail::as_fusion_element<T7>::type,
    typename detail::as_fusion_element<T8>::type,
    typename detail::as_fusion_element<T9>::type,
    typename detail::as_fusion_element<T10>::type,
    typename detail::as_fusion_element<T11>::type,
    typename detail::as_fusion_element<T12>::type,
    typename detail::as_fusion_element<T13>::type,
    typename detail::as_fusion_element<T14>::type,
    typename detail::as_fusion_element<T15>::type,
    typename detail::as_fusion_element<T16>::type,
    typename detail::as_fusion_element<T17>::type,
    typename detail::as_fusion_element<T18>::type,
    typename detail::as_fusion_element<T19>::type,
    typename detail::as_fusion_element<T20>::type,
    typename detail::as_fusion_element<T21>::type,
    typename detail::as_fusion_element<T22>::type,
    typename detail::as_fusion_element<T23>::type,
    typename detail::as_fusion_element<T24>::type,
    typename detail::as_fusion_element<T25>::type,
    typename detail::as_fusion_element<T26>::type,
    typename detail::as_fusion_element<T27>::type,
    typename detail::as_fusion_element<T28>::type>
make_deque(T0 const &arg0, T1 const &arg1, T2 const &arg2, T3 const &arg3,
           T4 const &arg4, T5 const &arg5, T6 const &arg6, T7 const &arg7,
           T8 const &arg8, T9 const &arg9, T10 const &arg10, T11 const &arg11,
           T12 const &arg12, T13 const &arg13, T14 const &arg14,
           T15 const &arg15, T16 const &arg16, T17 const &arg17,
           T18 const &arg18, T19 const &arg19, T20 const &arg20,
           T21 const &arg21, T22 const &arg22, T23 const &arg23,
           T24 const &arg24, T25 const &arg25, T26 const &arg26,
           T27 const &arg27, T28 const &arg28) {
  return deque<typename detail::as_fusion_element<T0>::type,
               typename detail::as_fusion_element<T1>::type,
               typename detail::as_fusion_element<T2>::type,
               typename detail::as_fusion_element<T3>::type,
               typename detail::as_fusion_element<T4>::type,
               typename detail::as_fusion_element<T5>::type,
               typename detail::as_fusion_element<T6>::type,
               typename detail::as_fusion_element<T7>::type,
               typename detail::as_fusion_element<T8>::type,
               typename detail::as_fusion_element<T9>::type,
               typename detail::as_fusion_element<T10>::type,
               typename detail::as_fusion_element<T11>::type,
               typename detail::as_fusion_element<T12>::type,
               typename detail::as_fusion_element<T13>::type,
               typename detail::as_fusion_element<T14>::type,
               typename detail::as_fusion_element<T15>::type,
               typename detail::as_fusion_element<T16>::type,
               typename detail::as_fusion_element<T17>::type,
               typename detail::as_fusion_element<T18>::type,
               typename detail::as_fusion_element<T19>::type,
               typename detail::as_fusion_element<T20>::type,
               typename detail::as_fusion_element<T21>::type,
               typename detail::as_fusion_element<T22>::type,
               typename detail::as_fusion_element<T23>::type,
               typename detail::as_fusion_element<T24>::type,
               typename detail::as_fusion_element<T25>::type,
               typename detail::as_fusion_element<T26>::type,
               typename detail::as_fusion_element<T27>::type,
               typename detail::as_fusion_element<T28>::type>(
      arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11,
      arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21,
      arg22, arg23, arg24, arg25, arg26, arg27, arg28);
}
namespace result_of {
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8, typename T9,
          typename T10, typename T11, typename T12, typename T13, typename T14,
          typename T15, typename T16, typename T17, typename T18, typename T19,
          typename T20, typename T21, typename T22, typename T23, typename T24,
          typename T25, typename T26, typename T27, typename T28, typename T29>
struct make_deque<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
                  T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25,
                  T26, T27, T28, T29, void_> {
  typedef deque<typename detail::as_fusion_element<T0>::type,
                typename detail::as_fusion_element<T1>::type,
                typename detail::as_fusion_element<T2>::type,
                typename detail::as_fusion_element<T3>::type,
                typename detail::as_fusion_element<T4>::type,
                typename detail::as_fusion_element<T5>::type,
                typename detail::as_fusion_element<T6>::type,
                typename detail::as_fusion_element<T7>::type,
                typename detail::as_fusion_element<T8>::type,
                typename detail::as_fusion_element<T9>::type,
                typename detail::as_fusion_element<T10>::type,
                typename detail::as_fusion_element<T11>::type,
                typename detail::as_fusion_element<T12>::type,
                typename detail::as_fusion_element<T13>::type,
                typename detail::as_fusion_element<T14>::type,
                typename detail::as_fusion_element<T15>::type,
                typename detail::as_fusion_element<T16>::type,
                typename detail::as_fusion_element<T17>::type,
                typename detail::as_fusion_element<T18>::type,
                typename detail::as_fusion_element<T19>::type,
                typename detail::as_fusion_element<T20>::type,
                typename detail::as_fusion_element<T21>::type,
                typename detail::as_fusion_element<T22>::type,
                typename detail::as_fusion_element<T23>::type,
                typename detail::as_fusion_element<T24>::type,
                typename detail::as_fusion_element<T25>::type,
                typename detail::as_fusion_element<T26>::type,
                typename detail::as_fusion_element<T27>::type,
                typename detail::as_fusion_element<T28>::type,
                typename detail::as_fusion_element<T29>::type>
      type;
};
} // namespace result_of
template <typename T0, typename T1, typename T2, typename T3, typename T4,
          typename T5, typename T6, typename T7, typename T8, typename T9,
          typename T10, typename T11, typename T12, typename T13, typename T14,
          typename T15, typename T16, typename T17, typename T18, typename T19,
          typename T20, typename T21, typename T22, typename T23, typename T24,
          typename T25, typename T26, typename T27, typename T28, typename T29>
BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED inline deque<
    typename detail::as_fusion_element<T0>::type,
    typename detail::as_fusion_element<T1>::type,
    typename detail::as_fusion_element<T2>::type,
    typename detail::as_fusion_element<T3>::type,
    typename detail::as_fusion_element<T4>::type,
    typename detail::as_fusion_element<T5>::type,
    typename detail::as_fusion_element<T6>::type,
    typename detail::as_fusion_element<T7>::type,
    typename detail::as_fusion_element<T8>::type,
    typename detail::as_fusion_element<T9>::type,
    typename detail::as_fusion_element<T10>::type,
    typename detail::as_fusion_element<T11>::type,
    typename detail::as_fusion_element<T12>::type,
    typename detail::as_fusion_element<T13>::type,
    typename detail::as_fusion_element<T14>::type,
    typename detail::as_fusion_element<T15>::type,
    typename detail::as_fusion_element<T16>::type,
    typename detail::as_fusion_element<T17>::type,
    typename detail::as_fusion_element<T18>::type,
    typename detail::as_fusion_element<T19>::type,
    typename detail::as_fusion_element<T20>::type,
    typename detail::as_fusion_element<T21>::type,
    typename detail::as_fusion_element<T22>::type,
    typename detail::as_fusion_element<T23>::type,
    typename detail::as_fusion_element<T24>::type,
    typename detail::as_fusion_element<T25>::type,
    typename detail::as_fusion_element<T26>::type,
    typename detail::as_fusion_element<T27>::type,
    typename detail::as_fusion_element<T28>::type,
    typename detail::as_fusion_element<T29>::type>
make_deque(T0 const &arg0, T1 const &arg1, T2 const &arg2, T3 const &arg3,
           T4 const &arg4, T5 const &arg5, T6 const &arg6, T7 const &arg7,
           T8 const &arg8, T9 const &arg9, T10 const &arg10, T11 const &arg11,
           T12 const &arg12, T13 const &arg13, T14 const &arg14,
           T15 const &arg15, T16 const &arg16, T17 const &arg17,
           T18 const &arg18, T19 const &arg19, T20 const &arg20,
           T21 const &arg21, T22 const &arg22, T23 const &arg23,
           T24 const &arg24, T25 const &arg25, T26 const &arg26,
           T27 const &arg27, T28 const &arg28, T29 const &arg29) {
  return deque<typename detail::as_fusion_element<T0>::type,
               typename detail::as_fusion_element<T1>::type,
               typename detail::as_fusion_element<T2>::type,
               typename detail::as_fusion_element<T3>::type,
               typename detail::as_fusion_element<T4>::type,
               typename detail::as_fusion_element<T5>::type,
               typename detail::as_fusion_element<T6>::type,
               typename detail::as_fusion_element<T7>::type,
               typename detail::as_fusion_element<T8>::type,
               typename detail::as_fusion_element<T9>::type,
               typename detail::as_fusion_element<T10>::type,
               typename detail::as_fusion_element<T11>::type,
               typename detail::as_fusion_element<T12>::type,
               typename detail::as_fusion_element<T13>::type,
               typename detail::as_fusion_element<T14>::type,
               typename detail::as_fusion_element<T15>::type,
               typename detail::as_fusion_element<T16>::type,
               typename detail::as_fusion_element<T17>::type,
               typename detail::as_fusion_element<T18>::type,
               typename detail::as_fusion_element<T19>::type,
               typename detail::as_fusion_element<T20>::type,
               typename detail::as_fusion_element<T21>::type,
               typename detail::as_fusion_element<T22>::type,
               typename detail::as_fusion_element<T23>::type,
               typename detail::as_fusion_element<T24>::type,
               typename detail::as_fusion_element<T25>::type,
               typename detail::as_fusion_element<T26>::type,
               typename detail::as_fusion_element<T27>::type,
               typename detail::as_fusion_element<T28>::type,
               typename detail::as_fusion_element<T29>::type>(
      arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11,
      arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21,
      arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29);
}
} // namespace fusion
} // namespace boost
