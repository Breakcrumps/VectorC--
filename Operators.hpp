#pragma once

#include <iostream>
#include "Vector2.h"

using namespace std;

/// @brief Get components of the vector by indices.
/// @tparam TNumeric 
/// @param index (0 - x, 1 - y)
/// @return A TNumeric vector component.
template <typename TNumeric>
TNumeric& Vector2<TNumeric>::operator[](int index) const
{
  switch (index)
  {
    case 0:
      return X;
    case 1:
      return Y;
    default:
      throw invalid_argument(
        "Vector2 is a two-dimensional structure."
        "Please regard its components by indices 0 or 1."
      );
  }
}

/// @brief Generate the sum of two vector terms.
/// @tparam TNumeric 
/// @param other 
/// @return A TNumeric vector with each component - the sum of corresponding input vector components.
template <typename TNumeric>
Vector2<TNumeric> Vector2<TNumeric>::operator+(const Vector2<TNumeric>& other) const
{
  return { X + other.X, Y + other.Y };
}

/// @brief Generate the difference of two vector terms.
/// @tparam TNumeric 
/// @param other 
/// @return A TNumeric vector with each component - the difference of corresponding input vector components.
template <typename TNumeric>
Vector2<TNumeric> Vector2<TNumeric>::operator-(const Vector2<TNumeric>& other) const
{
  return { X - other.X, Y - other.Y };
}

/// @brief Generate the dot product of two vector terms.
/// @tparam TNumeric 
/// @param other 
/// @return The TNumeric sum of corresponding components' products.
template <typename TNumeric>
TNumeric Vector2<TNumeric>::operator*(const Vector2<TNumeric>& other) const
{
  return (X * other.X) + (Y * other.Y);
}

/// @brief Generate the scalar product of a scalar and vector terms.
/// @tparam TNumeric 
/// @param other 
/// @return A TNumeric vector with each component - the product of the original vector component and the scalar.
template <typename TNumeric>
TNumeric Vector2<TNumeric>::operator*(TNumeric other) const
{
  return { X * other, Y * other };
}

/// @brief Check if vectors are equal.
/// @tparam TNumeric 
/// @param other 
/// @return True if the vectors are equal, false otherwise.
template <typename TNumeric>
bool Vector2<TNumeric>::operator==(const Vector2<TNumeric>& other)
{
  return (X == other.X) and (Y == other.Y);
}

/// @brief Get the length of the cross product vector of two vectors.
/// @tparam TNumeric 
/// @param other 
/// @return The TNumeric length of the vector product of vectors.
template <typename TNumeric>
TNumeric Vector2<TNumeric>::operator^(const Vector2<TNumeric>& other) const
{
  return (X * other.Y) - (other.X * Y);
}
