// Copyright (c) 2019 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

// It is based on peter1591's hearthstone-ai repository.
// References: https://github.com/peter1591/hearthstone-ai

#ifndef ROSETTASTONE_ACTION_PARAMS_HPP
#define ROSETTASTONE_ACTION_PARAMS_HPP

#include <Rosetta/Actions/ActionChecker.hpp>

namespace RosettaStone
{
//!
//! \brief ActionParams class.
//!
class ActionParams
{
 public:
    void Initialize(const Game& game);
    void Initialize(const ActionChecker& checker);

 private:
    ActionChecker m_checker;
};
}  // namespace RosettaStone

#endif  // ROSETTASTONE_ACTION_PARAMS_HPP
