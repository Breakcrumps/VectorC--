#pragma once

#include <math.h>
#include "GenericVector.h"

/// @brief Get the vector's length.
/// @tparam TNumeric 
/// @return The vector's length.
template <typename TNumeric>
double GenericVector<TNumeric>::Length() const
{
  return sqrt((x * x) + (y * y));
}

/// @brief Compress vector's components to range from 0 to 1.
/// @tparam TNumeric 
/// @return A copy of the vector with its components in range (0, 1).
template <typename TNumeric>
GenericVector<double> GenericVector<TNumeric>::Normalised() const
{
  double x = static_cast<double>(x) / Length();
  double y = static_cast<double>(y) / Length();

  return { x, y };
}