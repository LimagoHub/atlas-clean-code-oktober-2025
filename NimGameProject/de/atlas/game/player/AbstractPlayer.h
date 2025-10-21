//
// Created by JoachimWagner on 21.10.2025.
//

#pragma once

#include <string>
#include "Player.h"
namespace de::atlas::game::player {

    template<class BOARD, class TURN>
    class AbstractPlayer: public Player<BOARD, TURN>{
    public:
        explicit AbstractPlayer(const std::string &name) : name(name) {}

        ~AbstractPlayer() override = default;

        const std::string getName() const override{
            return name;
        }

    private:
        std::string name;
    };
}
