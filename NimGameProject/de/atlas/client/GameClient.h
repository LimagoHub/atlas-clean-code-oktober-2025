//
// Created by JoachimWagner on 20.10.2025.
//

#pragma once

#include "../game/Game.h"
namespace de::atlas::client {
    using namespace de::atlas::game;

    class GameClient {
    public:
        explicit GameClient(Game &game) : game(game) {}

        void go() {
            game.play();
        }

    private:
        Game &game;

    };
}