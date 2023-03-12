//
// Created by Usuario on 20/3/2022.
//

#ifndef INTERFACE_IPLAYER_H
#define INTERFACE_IPLAYER_H
#include<string>

class IPlayer {
public:
    virtual std::string play() = 0;
    virtual std::string stop() = 0;
    virtual std::string pause() = 0;
    virtual std::string reverse() = 0;
};


#endif //INTERFACE_IPLAYER_H
