#include <iostream>
using namespace std;

#ifndef CHARACTER_H
#define CHARACTER_H

class Character {

    private:
    
        string name_;

        //Stats

        int hp_ = 50;
        int strength_;
        int endurance_;
        int charisma_;
        int intelligence_;
        int agility_;
        int luck_;
        int perception_;

    public:

        //Setters
        void setName(string name);
        void setHp(int hp);
        void setStrength(int strength);
        void setEndurance(int endurance);
        void setCharsima(int charisma);
        void setIntelligence(int intelligence);
        void setAgility(int agility);
        void setLuck(int luck);
        void setPerception(int perception);

        //Getters
        string getName();
        int getHp();
        int getStrength();
        int getEndurance();
        int getCharsima();
        int getIntelligence();
        int getAgility();
        int getLuck();
        int getPerception();

};

#endif