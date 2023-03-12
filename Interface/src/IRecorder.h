//
// Created by Usuario on 20/3/2022.
//

#ifndef INTERFACE_IRECORDER_H
#define INTERFACE_IRECORDER_H
#include "IPlayer.h"

class IRecorder: public IPlayer{
public:
    virtual std::string record() = 0;
};


#endif //INTERFACE_IRECORDER_H
