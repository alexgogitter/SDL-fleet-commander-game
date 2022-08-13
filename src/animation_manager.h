#pragma once
#include <SDL.h>

class State
{

    public:
    
        void setStateName(const char* s) {state_name = s;}

        const char* getStateName() {return state_name;}

        void setStateID(unsigned int s) {stateID = s;}

        unsigned int getStateID() {return stateID;}


    private:
        unsigned int stateID, anim_length=1, anim_row=0, anim_duration=0, cur_anim_frame=0;
        const char* state_name;
        
        

};

class Anim_Manager
{
    public:

    private:

};