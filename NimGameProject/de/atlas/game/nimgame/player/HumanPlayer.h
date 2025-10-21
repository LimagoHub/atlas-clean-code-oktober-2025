//
// Created by JoachimWagner on 21.10.2025.
//

#pragma once

#include <iostream>
#include "AbstractNimGamePlayer.h"
namespace de::atlas::game::nimgame::player {

    class HumanPlayer : public AbstractNimGamePlayer {

    public:
        explicit HumanPlayer(const std::string &name) : AbstractNimGamePlayer(name) {}

        ~HumanPlayer() override = default;

        int doTurn(const int &stones) const override {
            int turn;

            std::cout << "Es gibt " << stones << " Steine. Bitte nehmen Sie 1,2 oder 3!\n";
            std::cin >> turn;

            return turn;
        }
    };
}