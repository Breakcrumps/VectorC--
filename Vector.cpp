#include <iostream>
#include <math.h>
#include "GenericVector.hpp"


/// @brief A [0, 0] vector.
template <typename TNumeric>
static inline GenericVector<TNumeric> GenericVector<TNumeric>::Zero { 0, 0 };

/// @brief A [0, 1] vector.
template <typename TNumeric>
static inline GenericVector<TNumeric> Up { 0, 1 };

/// @brief A [-1, 0] vector.
template <typename TNumeric>
static inline GenericVector<TNumeric> Left { -1, 0 };

/// @brief A [0, -1] vector.
template <typename TNumeric>
static inline GenericVector<TNumeric> Down { 0, -1 };

/// @brief A [1, 0] vector.
template <typename TNumeric>
static inline GenericVector<TNumeric> Right { 1, 0 };

/// @brief A [1, 1] vector.
template <typename TNumeric>
static inline GenericVector<TNumeric> One { 1, 1 };


/// @brief Get components of the vector by indices.
/// @param index (0 - x, 1 - y)
/// @return A TNumeric vector component.
template <typename TNumeric>
TNumeric& GenericVector<TNumeric>::operator[](int index) const
{
  switch (index)
  {
    case 0:
      return X;
    case 1:
      return Y;
    default:
      throw invalid_argument(
        "GenericVector is a two-dimensional structure."
        "Please regard its components by indices 0 or 1."
      );
  }
}

/// @brief Generate the sum of two vector terms.
/// @param other 
/// @return A TNumeric vector with each component - the sum of corresponding input vector components.
template <typename TNumeric>
GenericVector<TNumeric> GenericVector<TNumeric>::operator+(GenericVector<TNumeric> other) const
{
  return { X + other.X, Y + other.Y };
}
/// @brief Generate the difference of two vector terms.
/// @param other 
/// @return A TNumeric vector with each component - the difference of corresponding input vector components.
template <typename TNumeric>
GenericVector<TNumeric> GenericVector<TNumeric>::operator-(GenericVector<TNumeric> other) const
{
  return { X - other.X, Y - other.Y };
}
/// @brief Generate the dot product of two vector terms.
/// @param other 
/// @return The TNumeric sum of corresponding components' products.
template <typename TNumeric>
TNumeric GenericVector<TNumeric>::operator*(GenericVector<TNumeric> other) const
{
  return (X * other.X) + (Y * other.Y);
}
/// @brief Generate the scalar product of a scalar and vector terms.
/// @param other 
/// @return A TNumeric vector with each component - the product of the original vector component and the scalar.
template <typename TNumeric>
TNumeric GenericVector<TNumeric>::operator*(TNumeric other) const
{
  return { X * other, Y * other };
}

template <typename TNumeric>
GenericVector<TNumeric>::operator GenericVector<int>() const
{
  return { (int)X, (int)Y };
}
template <typename TNumeric>
GenericVector<TNumeric>::operator bool() const
{
  return Length();
}

template <typename TNumeric>
double GenericVector<TNumeric>::Length() const
{
  return sqrt((X * X) + (Y * Y));
}

template <typename TNumeric>
GenericVector<double> GenericVector<TNumeric>::Normalise() const
{
  double x = X / Length();
  double y = Y / Length();

  return { x, y };
}

int main()
{
  GenericVector<double> const a {2.25, 7.8};
  auto const b = GenericVector<int>::Zero;

  if (a[0])
  {
    cout << "YES\n";
  }
  if (b)
  {
    cout << "NO\n";
  }

  return 0;
}