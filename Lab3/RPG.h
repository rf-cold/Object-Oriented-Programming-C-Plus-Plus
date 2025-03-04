#ifndef RPG_H
#define RPG_H

#include <string>

using namespace std;

const int SKILL_SIZE = 2;

class RPG {
public:
    // Constructors
    RPG();
    RPG(string name, int health, int strength, int defense, string type);

    // Member functions
    string getName() const;
    int getHealth() const;
    int getStrength() const;
    int getDefense() const;
    bool isAlive() const;
    void setSkills();
    void printAction(string skill, RPG opponent);
    void updateHealth(int amount);
    //void attack(RPG* target);
    //void useSkill(RPG* target);

private:
    string name;
    int health;
    int strength;
    int defense;
    string type; // warrior, mage, thief, archer
    string skills[SKILL_SIZE];
};

#endif