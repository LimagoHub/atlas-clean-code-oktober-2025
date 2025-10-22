//
// Created by JoachimWagner on 21.10.2025.
//

#pragma once
#include "Game.h"
#include "player/Player.h"

namespace de::atlas::game {
    template<class BOARD, class TURN>
    class AbstractGame :public Game{
        using PLAYER = player::Player<BOARD, TURN> *;
        using PLAYERS = std::vector<PLAYER>;

    public:

        auto addPlayer(PLAYER player) -> void {
            players.push_back(player);
        }
        auto removePlayer(PLAYER player) -> void {
            // Not implemented yet
            // TODO implememt feature
        }

        auto play()->void override {
            while(! isGameGameOver())  playRound();

        }

    private:

        BOARD board;
        TURN turn;
        PLAYERS players;
        PLAYER _currentPlayer;

        void playRound() {
            for(auto player: players) {
                setCurrentPlayer(player);
                playSingleTurn();
            }
       }
        void playSingleTurn() {

            if(isGameGameOver()) return;
            executeTurn();
            terminateTurn( );
        }

        void executeTurn()  {
            do {
                turn = _currentPlayer->doTurn(board);
            } while(turnIsNotValid());
        }


        void terminateTurn() { // Integration
            updateBoard();
            printGameOverMessageIfGameIsOver();
        }
        bool turnIsNotValid() {
            if(isTurnValid() )return false;
            std::cout <<  "Ungueltiger Zug!\n";
            return true;
        }


        void printGameOverMessageIfGameIsOver() { // Operation
            if(isGameGameOver())  std::cout   << _currentPlayer->getName() << " hat verloren";

        }

    protected:
        virtual bool isTurnValid() const = 0;
        virtual bool isGameGameOver() const = 0;
        virtual void updateBoard()  = 0;

        const PLAYERS &getPlayers() const {
            return players;
        }


        const PLAYER getCurrentPlayer() const {
            return _currentPlayer;
        }

        void setCurrentPlayer(PLAYER currentPlayer) {
            _currentPlayer = currentPlayer;
        }


        BOARD getBoard() const {
            return board;
        }

        void setBoard(BOARD board) {
            AbstractGame::board = board;
        }

        TURN getTurn() const {
            return turn;
        }

        void setTurn(TURN turn) {
            AbstractGame::turn = turn;
        }
    };
}
