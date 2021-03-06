#ifndef PYTHONIC_NUMPY_FMIN_HPP
#define PYTHONIC_NUMPY_FMIN_HPP

#include "pythonic/include/numpy/fmin.hpp"

#include "pythonic/utils/functor.hpp"
#include "pythonic/types/ndarray.hpp"
#include "pythonic/types/numpy_broadcast.hpp"
#include "pythonic/utils/numpy_traits.hpp"

PYTHONIC_NS_BEGIN

namespace numpy
{
#define NUMPY_NARY_FUNC_NAME fmin
#define NUMPY_NARY_FUNC_SYM boost::simd::min
#include "pythonic/types/numpy_nary_expr.hpp"
}
PYTHONIC_NS_END

#endif
