#include <iostream>
#include "de/atlas/game/nimgame/NimGameImpl.h"
#include "de/atlas/game/nimgame/player/HumanPlayer.h"
#include "de/atlas/game/nimgame/player/ComputerPlayer.h"
#include "de/atlas/client/GameClient.h"


int main() {


    de::atlas::game::nimgame::player::HumanPlayer human{"Human"};
    de::atlas::game::nimgame::player::ComputerPlayer hal{"HAL"};


    de::atlas::game::nimgame::NimGameImpl game;

    game.addPlayer(&human);
    game.addPlayer(&hal);


    de::atlas::client::GameClient client{game};

    client.go();
    return 0;
}
