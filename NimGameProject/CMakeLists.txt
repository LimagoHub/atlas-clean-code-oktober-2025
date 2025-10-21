cmake_minimum_required(VERSION 3.31)
project(NimGameProject)

set(CMAKE_CXX_STANDARD 17)

add_executable(NimGameProject main.cpp
        de/atlas/game/Game.h
        de/atlas/client/GameClient.h
        de/atlas/game/nimgame/NimGameImpl.h
        de/atlas/game/nimgame/player/AbstractNimGamePlayer.h
        de/atlas/game/nimgame/player/HumanPlayer.h
        de/atlas/game/nimgame/player/ComputerPlayer.h
        de/atlas/game/player/Player.h
        de/atlas/game/player/AbstractPlayer.h
        de/atlas/game/AbstractGame.h
)
