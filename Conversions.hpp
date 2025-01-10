#pragma once

#include "GenericVector.h"

/// @brief Cast vector's generic components to int.
/// @tparam TNumeric 
template <typename TNumeric>
GenericVector<TNumeric>::operator GenericVector<int>() const
{
  return { (int)x, (int)y };
}

/// @brief Check if the vector has a non-zero length.
/// @tparam TNumeric 
template <typename TNumeric>
GenericVector<TNumeric>::operator bool() const
{
  return Length();
}