// This code is based on Sabberstone project.
// Copyright (c) 2017-2019 SabberStone Team, darkfriend77 & rnilva
// RosettaStone is hearthstone simulator using C++ with reinforcement learning.
// Copyright (c) 2019 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

#ifndef ROSETTASTONE_ATTACK_TASK_HPP
#define ROSETTASTONE_ATTACK_TASK_HPP

#include <Rosetta/Tasks/ITask.hpp>

namespace RosettaStone::SimpleTasks
{
//!
//! \brief AttackTask class.
//!
//! This class represents the task for attacking the target.
//!
class AttackTask : public ITask
{
 public:
    //! Constructs task with given \p attacker and \p defender.
    //! \param attacker The entity type of attacker.
    //! \param defender The entity type of defender.
    explicit AttackTask(EntityType attacker, EntityType defender);

 private:
    //! Processes task logic internally and returns meta data.
    //! \param player The player to run task.
    //! \return The result of task processing.
    TaskStatus Impl(Player* player) override;

    //! Internal method of Clone().
    //! \return The cloned task.
    std::unique_ptr<ITask> CloneImpl() override;

    EntityType m_attackerType;
    EntityType m_defenderType;
};
}  // namespace RosettaStone::SimpleTasks

#endif  // ROSETTASTONE_ATTACK_TASK_HPP
