//
// Created by JoachimWagner on 21.10.2025.
//

#pragma once

#include <string>

namespace de::atlas::game::player {
    template<class BOARD, class TURN>
    class Player {
    public:
        virtual ~Player() = default;
        virtual auto getName() const -> const std::string = 0;
        virtual auto doTurn(const BOARD &board) const -> TURN = 0;
    };
}
