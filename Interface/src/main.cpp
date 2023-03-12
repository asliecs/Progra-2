//
// Created by Usuario on 20/3/2022.
//
#include<iostream>
#include "TapePlayer.h"
int main() {
    std::cout << "Welcome to the UNA! (VIRTUAL)" << std::endl;

    TapePlayer tapePlayer;

    std::cout << tapePlayer.play() << std::endl;
    std::cout << tapePlayer.stop() << std::endl;
    std::cout << tapePlayer.pause() << std::endl;
    std::cout << tapePlayer.reverse() << std::endl;
    std::cout << tapePlayer.record() << std::endl;


    // IPlayer iPlayer; // Error because it's an abstract class

    // using pointers it's possible to associate the implementation, because the Pointer not create the instance
    IPlayer *player;
    player = &tapePlayer;
    std::cout << player->play() << std::endl;

    return 0;
}


