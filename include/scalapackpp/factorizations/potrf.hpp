#pragma once
#include <scalapackpp/wrappers/factorizations/potrf.hpp>
#include <blacspp/util/type_conversions.hpp>

namespace scalapackpp {

template <typename T>
detail::enable_if_scalapack_supported_t<T, scalapack_int>
  ppotrf( blacspp::Triangle uplo, scalapack_int N, T* A, scalapack_int IA, 
          scalapack_int JA, const scalapack_desc& DESCA ) {

  auto UPLO = blacspp::detail::type_string( uplo );
  return wrappers::ppotrf( UPLO.c_str(), N, A, IA, JA, DESCA );

}



}
