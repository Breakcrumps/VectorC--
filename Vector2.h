#pragma once

/// @brief A two-dimensional vector structure containing two numbers for generalised TNumeric numeric type.
/// @tparam TNumeric 
template <typename TNumeric>
class Vector2
{
  public:
    /// @brief The x component of the vector.
    TNumeric X;
    /// @brief The y component of the vector.
    TNumeric Y;

    TNumeric& operator[](int index) const;
    Vector2<TNumeric> operator+(const Vector2<TNumeric>& other) const;
    Vector2<TNumeric> operator-(const Vector2<TNumeric>& other) const;
    TNumeric operator*(const Vector2<TNumeric>& other) const;
    TNumeric operator*(TNumeric other) const;
    TNumeric operator^(const Vector2<TNumeric>& other) const;
    operator Vector2<int>() const;
    operator Vector2<double>() const;
    operator Vector2<float>() const;
    operator bool() const;
    bool operator==(const Vector2<TNumeric>& other);

    double Length() const;
    Vector2<double> Normalised() const;
    void Normalise();
};

#include "Conversions.hpp"
#include "Operators.hpp"
#include "ReadyVectors.hpp"
#include "Utility.hpp"
