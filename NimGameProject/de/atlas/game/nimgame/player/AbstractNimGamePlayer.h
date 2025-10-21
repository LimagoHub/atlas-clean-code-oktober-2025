//
// Created by JoachimWagner on 21.10.2025.
//

#pragma once
#include "../../player/AbstractPlayer.h"
namespace de::atlas::game::nimgame::player {

    class AbstractNimGamePlayer : public de::atlas::game::player::AbstractPlayer<int, int> {
    public:
        explicit AbstractNimGamePlayer(const std::string &name) : AbstractPlayer(name) {}

    };
}