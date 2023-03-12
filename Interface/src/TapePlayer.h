//
// Created by Usuario on 20/3/2022.
//

#ifndef INTERFACE_TAPEPLAYER_H
#define INTERFACE_TAPEPLAYER_H
#include "IRecorder.h"

class TapePlayer: public IRecorder{
public:
    std::string play() override;
    std::string stop() override;
    std::string pause() override;
    std::string reverse() override;
    std::string record() override;
};


#endif //INTERFACE_TAPEPLAYER_H
