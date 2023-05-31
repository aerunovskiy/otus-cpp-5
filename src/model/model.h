/*!
 * \author Alexey Erunovskiy
 * \file Model.h
 * \brief Model definition
 */

#pragma once

namespace model
{

struct Shape
{
    virtual ~Shape() = default;
};

struct Rectangle : Shape
{

};

struct Ellipse : Shape
{

};

};
