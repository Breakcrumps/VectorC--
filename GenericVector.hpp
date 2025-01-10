#pragma once

template <typename TNumeric>
class GenericVector
{
  public:
    /// @brief The x component of the vector.
    TNumeric X;
    /// @brief The y component of the vector.
    TNumeric Y;

    static inline GenericVector<TNumeric> Zero;
    static inline GenericVector<TNumeric> Up;
    static inline GenericVector<TNumeric> Left;
    static inline GenericVector<TNumeric> Down;
    static inline GenericVector<TNumeric> Right;
    static inline GenericVector<TNumeric> One;

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