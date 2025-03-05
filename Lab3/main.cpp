#include "RPG.h"
#include <iostream>

using namespace std;

int main() {
    // Create an RPG object using the default constructor
    RPG defaultCharacter;

    // Create an RPG object using the overloaded constructor
    RPG customCharacter("Dragon Warrior", 1500, 2500, 2000, "warrior");

    // Display initial details of the characters
    cout << "Default Character: " << defaultCharacter.getName() << endl;
    cout << "Health: " << defaultCharacter.getHealth() << endl;
    cout << "Strength: " << defaultCharacter.getStrength() << endl;
    cout << "Defense: " << defaultCharacter.getDefense() << endl;
    cout << "Is Alive? " << (defaultCharacter.isAlive() ? "Yes" : "No") << endl;
    cout << "------------------------------------" << endl;

    cout << "Custom Character: " << customCharacter.getName() << endl;
    cout << "Health: " << customCharacter.getHealth() << endl;
    cout << "Strength: " << customCharacter.getStrength() << endl;
    cout << "Defense: " << customCharacter.getDefense() << endl;
    cout << "Is Alive? " << (customCharacter.isAlive() ? "Yes" : "No") << endl;
    cout << "------------------------------------" << endl;

    // Test updateHealth() function
    cout << "Updating Default Character's Health to 0..." << endl;
    defaultCharacter.updateHealth(0);

    // Check if the character is alive after updating health
    cout << "Default Character's Health: " << defaultCharacter.getHealth() << endl;
    cout << "Is Alive? " << (defaultCharacter.isAlive() ? "Yes" : "No") << endl;

    return 0;
}