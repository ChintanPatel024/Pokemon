// Player.h
#include <string>
using namespace std;

class Pokemon;

class Player
{
public:
    string name;
    Pokemon chosenPokemon;

    Player();                                       // Default constructor
    Player(string p_name, Pokemon p_chosenPokemon); // Parameterized constructor

    void ChoosePokemon(int choice); // Method to choose a Pokemon
};