#pragma once

#include "GenericVector.h"

/// @brief Cast the generic components of the vector to int.
/// @tparam TNumeric 
template <typename TNumeric>
GenericVector<TNumeric>::operator GenericVector<int>() const
{
  return { static_cast<int>(X), static_cast<int>(Y) };
}

/// @brief Cast the generic components of the vector to int.
/// @tparam TNumeric 
template <typename TNumeric>
GenericVector<TNumeric>::operator GenericVector<double>() const
{
  return { static_cast<double>(X), static_cast<double>(Y) };
}

/// @brief Cast the generic components of the vector to int.
/// @tparam TNumeric 
template <typename TNumeric>
GenericVector<TNumeric>::operator GenericVector<float>() const
{
  return { static_cast<float>(X), static_cast<float>(Y) };
}


/// @brief Check if the vector has a non-zero length.
/// @tparam TNumeric 
template <typename TNumeric>
GenericVector<TNumeric>::operator bool() const
{
  return Length();
}