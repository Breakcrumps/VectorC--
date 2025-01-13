#pragma once

#include "Vector2.h"

/// @brief A [0, 0] vector.
/// @tparam TNumeric 
template <typename TNumeric>
static inline Vector2<TNumeric> Zero { 0, 0 };

/// @brief A [0, 1] vector.
/// @tparam TNumeric 
template <typename TNumeric>
static inline Vector2<TNumeric> Up { 0, 1 };

/// @brief A [-1, 0] vector.
/// @tparam TNumeric 
template <typename TNumeric>
static inline Vector2<TNumeric> Left { -1, 0 };

/// @brief A [0, -1] vector.
/// @tparam TNumeric 
template <typename TNumeric>
static inline Vector2<TNumeric> Down { 0, -1 };

/// @brief A [1, 0] vector.
/// @tparam TNumeric 
template <typename TNumeric>
static inline Vector2<TNumeric> Right { 1, 0 };

/// @brief A [1, 1] vector.
/// @tparam TNumeric 
template <typename TNumeric>
static inline Vector2<TNumeric> One { 1, 1 };