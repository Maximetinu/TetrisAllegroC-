//
// Created by lifka on 18/06/17.
//

#ifndef PROJECT_OBSERVER_H
#define PROJECT_OBSERVER_H


#include "../Model/NotifyCode.h"
#include "../Model/Piece.h"

class Observer {
public:
    virtual void update(NotifyCode, Piece piece);
    virtual void update(NotifyCode);
    virtual void updateScore(NotifyCode);
};


#endif //PROJECT_OBSERVER_H