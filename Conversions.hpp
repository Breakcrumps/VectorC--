#pragma once

#include "Vector2.h"

/// @brief Cast the generic components of the vector to int.
/// @tparam TNumeric 
template <typename TNumeric>
Vector2<TNumeric>::operator Vector2<int>() const
{
  return { static_cast<int>(X), static_cast<int>(Y) };
}

/// @brief Cast the generic components of the vector to int.
/// @tparam TNumeric 
template <typename TNumeric>
Vector2<TNumeric>::operator Vector2<double>() const
{
  return { static_cast<double>(X), static_cast<double>(Y) };
}

/// @brief Cast the generic components of the vector to int.
/// @tparam TNumeric 
template <typename TNumeric>
Vector2<TNumeric>::operator Vector2<float>() const
{
  return { static_cast<float>(X), static_cast<float>(Y) };
}


/// @brief Check if the vector has a non-zero length.
/// @tparam TNumeric 
template <typename TNumeric>
Vector2<TNumeric>::operator bool() const
{
  return Length();
}