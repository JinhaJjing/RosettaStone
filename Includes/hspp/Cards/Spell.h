// Copyright (c) 2018 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef HEARTHSTONEPP_SPELL_H
#define HEARTHSTONEPP_SPELL_H

#include <hspp/Cards/Entity.h>

namespace Hearthstonepp
{
//!
//! \brief Spell structure.
//!
//! This structure inherits from Entity structure.
//!
struct Spell : public Entity
{
    //! Copy constructor.
    Spell(const Spell& spell);

    //! Copy assignment operator.
    Spell& operator=(const Spell& spell);

    //! Clones member variables.
    Spell* Clone() const override;
};
}  // namespace Hearthstonepp

#endif