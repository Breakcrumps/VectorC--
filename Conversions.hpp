#pragma once

#include "GenericVector.h"

/// @brief Cast vector's generic components to int.
/// @tparam TNumeric 
template <typename TNumeric>
GenericVector<TNumeric>::operator GenericVector<int>() const
{
  return { static_cast<int>(x), static_cast<int>(y) };
}

/// @brief Cast vector's generic components to int.
/// @tparam TNumeric 
template <typename TNumeric>
GenericVector<TNumeric>::operator GenericVector<double>() const
{
  return { static_cast<double>(x), static_cast<double>(y) };
}

/// @brief Cast vector's generic components to int.
/// @tparam TNumeric 
template <typename TNumeric>
GenericVector<TNumeric>::operator GenericVector<float>() const
{
  return { static_cast<float>(x), static_cast<float>(y) };
}


/// @brief Check if the vector has a non-zero length.
/// @tparam TNumeric 
template <typename TNumeric>
GenericVector<TNumeric>::operator bool() const
{
  return Length();
}