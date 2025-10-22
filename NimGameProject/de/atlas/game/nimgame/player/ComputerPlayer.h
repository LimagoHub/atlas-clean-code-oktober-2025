//
// Created by JoachimWagner on 21.10.2025.
//

#pragma once
#include <iostream>
#include "AbstractNimGamePlayer.h"
namespace de::atlas::game::nimgame::player {

    class ComputerPlayer: public AbstractNimGamePlayer{
        static inline int turns[] = {3,1,1,2};
    public:
        using AbstractNimGamePlayer::AbstractNimGamePlayer;

        int doTurn(const int &stones) const override {
            const int turn = turns[stones % 4];
            std::cout << "Computer nimmt " << turn << " Steine." << std::endl;
            return turn;
        }

    };

}
