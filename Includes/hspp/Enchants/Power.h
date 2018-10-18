// Copyright (c) 2018 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef HEARTHSTONEPP_POWER_H
#define HEARTHSTONEPP_POWER_H

#include <hspp/Enchants/Enchant.h>

#include <vector>

namespace Hearthstonepp
{
class ITask;
class Enchant;

//!
//! \brief Power structure.
//!
//! This structure stores task to perform power and enchant to apply it.
//!
struct Power
{
    std::vector<ITask*> powerTask;
    Enchant* enchant = nullptr;
};
}  // namespace Hearthstonepp

#endif