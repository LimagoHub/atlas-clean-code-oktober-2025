//
// Created by JoachimWagner on 22.10.2025.
//

#pragma once

#include <iostream>

namespace atlas::bootstrap {
    class Bootstrap {
    public:
        auto startApplication()-> void {
            std::cout << " Start Application...." << std::endl;
        }
    };
}
