#include <iostream>
using namespace std;

class Character {

    private:
    
        string name_;

        //Stats

        int hp_;
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
        void setCharsima(int charisma);
        void setAgility(int agility);
        void setLuck(int luck);
        void setPerception(int perception);

        //Getters
        string getName();
        int getHp();
        int getStrength();
        int getCharsima();
        int getAgility();
        int getLuck();
        int getPerception();

};