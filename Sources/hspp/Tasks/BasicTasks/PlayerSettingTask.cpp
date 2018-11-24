// Copyright (c) 2018 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <hspp/Tasks/BasicTasks/PlayerSettingTask.h>

namespace Hearthstonepp::BasicTasks
{
PlayerSettingTask::PlayerSettingTask(TaskAgent& agent) : m_agent(agent)
{
    // Do nothing
}

TaskID PlayerSettingTask::GetTaskID() const
{
    return TaskID::PLAYER_SETTING;
}

MetaData PlayerSettingTask::Impl(Player& player)
{
    player.id = 0;
    player.GetOpponent().id = 1;

    TaskMeta setting = Serializer::CreatePlayerSetting(
        player.GetNickname(), player.GetOpponent().GetNickname());
    m_agent.Notify(std::move(setting));

    return MetaData::PLAYER_SETTING_SUCCESS;
}
}  // namespace Hearthstonepp::BasicTasks