////////////////////////////////////////////////////////////
//
// SFML - Simple and Fast Multimedia Library
// Copyright (C) 2007-2017 Laurent Gomila (laurent@sfml-dev.org)
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
////////////////////////////////////////////////////////////

#ifndef SFML_VECTOR3_HPP
#define SFML_VECTOR3_HPP

#include <glm/vec3.hpp>

namespace sf
{
////////////////////////////////////////////////////////////
/// \brief Utility template class for manipulating
///        3-dimensional vectors
///
////////////////////////////////////////////////////////////
template <typename T>
using Vector3 = glm::vec<3, T, glm::highp>;

// Define the most common types
typedef Vector3<int>   Vector3i;
typedef Vector3<float> Vector3f;

} // namespace sf


#endif // SFML_VECTOR3_HPP


////////////////////////////////////////////////////////////
/// \class sf::Vector3
/// \ingroup system
///
/// sf::Vector3 is a simple class that defines a mathematical
/// vector with three coordinates (x, y and z). It can be used to
/// represent anything that has three dimensions: a size, a point,
/// a velocity, etc.
///
/// The template parameter T is the type of the coordinates. It
/// can be any type that supports arithmetic operations (+, -, /, *)
/// and comparisons (==, !=), for example int or float.
///
/// You generally don't have to care about the templated form (sf::Vector3<T>),
/// the most common specializations have special typedefs:
/// \li sf::Vector3<float> is sf::Vector3f
/// \li sf::Vector3<int> is sf::Vector3i
///
/// The sf::Vector3 class has a small and simple interface, its x and y members
/// can be accessed directly (there are no accessors like setX(), getX()) and it
/// contains no mathematical function like dot product, cross product, length, etc.
///
/// Usage example:
/// \code
/// sf::Vector3f v1(16.5f, 24.f, -8.2f);
/// v1.x = 18.2f;
/// float y = v1.y;
/// float z = v1.z;
///
/// sf::Vector3f v2 = v1 * 5.f;
/// sf::Vector3f v3;
/// v3 = v1 + v2;
///
/// bool different = (v2 != v3);
/// \endcode
///
/// Note: for 2-dimensional vectors, see sf::Vector2.
///
////////////////////////////////////////////////////////////
