#pragma once
#include <scalapackpp/types.hpp>
#include <scalapackpp/util/sfinae.hpp>

namespace scalapackpp::wrappers {

template <typename T>
detail::enable_if_scalapack_supported_t<T>
  pscal( scalapack_int N, T ALPHA, T* X, scalapack_int IX, scalapack_int JX, 
         const scalapack_desc& DESCX, scalapack_int INCX );
         

}
