#pragma once

#include "GenericVector.h"

/// @brief A [0, 0] vector.
/// @tparam TNumeric 
template <typename TNumeric>
static inline GenericVector<TNumeric> Zero { 0, 0 };

/// @brief A [0, 1] vector.
/// @tparam TNumeric 
template <typename TNumeric>
static inline GenericVector<TNumeric> Up { 0, 1 };

/// @brief A [-1, 0] vector.
/// @tparam TNumeric 
template <typename TNumeric>
static inline GenericVector<TNumeric> Left { -1, 0 };

/// @brief A [0, -1] vector.
/// @tparam TNumeric 
template <typename TNumeric>
static inline GenericVector<TNumeric> Down { 0, -1 };

/// @brief A [1, 0] vector.
/// @tparam TNumeric 
template <typename TNumeric>
static inline GenericVector<TNumeric> Right { 1, 0 };

/// @brief A [1, 1] vector.
/// @tparam TNumeric 
template <typename TNumeric>
static inline GenericVector<TNumeric> One { 1, 1 };