//
// Created by JoachimWagner on 20.10.2025.
//

#pragma once

namespace de::atlas::game {

    class Game {
    public:
        virtual ~Game() = default;
        virtual void play() = 0;

    };

} // game
