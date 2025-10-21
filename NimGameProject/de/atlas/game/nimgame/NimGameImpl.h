//
// Created by JoachimWagner on 20.10.2025.
//

#pragma once

#include <iostream>
#include <vector>
#include "../AbstractGame.h"
#include "../player/Player.h"

namespace de::atlas::game::nimgame {

    class NimGameImpl : public AbstractGame<int, int>{


    public:

        explicit NimGameImpl()  {
            setBoard(23);
        }
        ~NimGameImpl() override = default;


    protected:
        bool isTurnValid() const override { return getTurn() >= 1 && getTurn() <= 3; }
        void updateBoard() override { setBoard(getBoard()-getTurn() ); }
        bool isGameGameOver() const override{
            return getBoard() < 1 || getPlayers().empty();
        }


    };



}
