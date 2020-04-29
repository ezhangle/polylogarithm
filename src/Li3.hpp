// ====================================================================
// This file is part of Polylogarithm.
//
// Polylogarithm is licenced under the GNU Lesser General Public
// License (GNU LGPL) version 3.
// ====================================================================

#pragma once
#include <complex>

namespace polylogarithm {

/// complex polylogarithm with n=3 (trilogarithm)
std::complex<double> Li3(const std::complex<double>&);

/// complex polylogarithm with n=3 (trilogarithm) with long double precision
std::complex<long double> Li3(const std::complex<long double>&);

} // namespace polylogarithm
