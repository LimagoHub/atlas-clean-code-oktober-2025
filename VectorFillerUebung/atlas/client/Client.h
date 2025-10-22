//
// Created by JoachimWagner on 22.10.2025.
//

#pragma once

namespace atlas::client {

    class Client {
    public:
        virtual ~Client() = default;
        virtual auto doSomethingWithLargeVector() noexcept -> void = 0;
    };

} // client