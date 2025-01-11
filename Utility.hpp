#pragma once

#include <math.h>
#include "GenericVector.h"

/// @brief Get the length of the vector.
/// @tparam TNumeric 
/// @return The length of the vector.
template <typename TNumeric>
double GenericVector<TNumeric>::Length() const
{
  return sqrt((X * X) + (Y * Y));
}

/// @brief Create a vector with components compressed to fir the range from 0 to 1.
/// @tparam TNumeric 
/// @return A copy of the vector with its components in range (0, 1).
template <typename TNumeric>
GenericVector<double> GenericVector<TNumeric>::Normalised() const
{
  double x = X / Length();
  double y = Y / Length();

  return { x, y };
}

/// @brief Compress the components of the vector to fit the range from 0 to 1.
/// @tparam TNumeric 
template <typename TNumeric>
void GenericVector<TNumeric>::Normalise()
{
  X = (TNumeric)(X / Length());
  Y = (TNumeric)(Y / Length());
}