#pragma once

template <typename TNumeric>
class GenericVector
{
  public:
    /// @brief The x component of the vector.
    TNumeric x;
    /// @brief The y component of the vector.
    TNumeric y;

    TNumeric& operator[](int index) const;
    GenericVector<TNumeric> operator+(GenericVector<TNumeric> other) const;
    GenericVector<TNumeric> operator-(GenericVector<TNumeric> other) const;
    TNumeric operator*(GenericVector<TNumeric> other) const;
    TNumeric operator*(TNumeric other) const;
    operator GenericVector<int>() const;
    operator bool() const;

    double Length() const;
    GenericVector<double> Normalise() const;
};

#include "Conversions.hpp"
#include "Operators.hpp"
#include "ReadyVectors.hpp"
#include "Utility.hpp"