//
// Created by lifka on 6/07/17.
//

#ifndef PROJECT_PLAYERINPUT_H
#define PROJECT_PLAYERINPUT_H


#include "keycode.h"
#include "../Controller/Subject.h"
#include <map>
#include <allegro5/allegro.h>

class PlayerInput : public Subject {
private:
    static PlayerInput* instance;
    PlayerInput& operator=(PlayerInput const&){};
    PlayerInput(PlayerInput const&){};
    PlayerInput(){};

    std::map<KeyCode, bool > keys;

public:
    static PlayerInput* getInstance();
    void updateInput(ALLEGRO_EVENT&);
    bool getKeyState(KeyCode);
    bool getUpState();
    bool getDownState();
    bool getRightState();
    bool getLeftState();
    bool getEscapeState();

};


#endif //PROJECT_PLAYERINPUT_H
