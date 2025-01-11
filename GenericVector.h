#pragma once

/// @brief A two-dimensional vector structure containing two numbers for generalised TNumeric numeric type.
/// @tparam TNumeric 
template <typename TNumeric>
class GenericVector
{
  public:
    /// @brief The x component of the vector.
    TNumeric X;
    /// @brief The y component of the vector.
    TNumeric Y;

    TNumeric& operator[](int index) const;
    GenericVector<TNumeric> operator+(GenericVector<TNumeric> const (&other)) const;
    GenericVector<TNumeric> operator-(GenericVector<TNumeric> const (&other)) const;
    TNumeric operator*(GenericVector<TNumeric> const (&other)) const;
    TNumeric operator*(TNumeric other) const;
    TNumeric operator^(GenericVector<TNumeric> const (&other)) const;
    operator GenericVector<int>() const;
    operator GenericVector<double>() const;
    operator GenericVector<float>() const;
    operator bool() const;
    bool operator==(GenericVector<TNumeric> const (&other));

    double Length() const;
    GenericVector<double> Normalised() const;
    void Normalise();
};

#include "Conversions.hpp"
#include "Operators.hpp"
#include "ReadyVectors.hpp"
#include "Utility.hpp"