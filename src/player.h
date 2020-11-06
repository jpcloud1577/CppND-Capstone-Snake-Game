#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>

class Player
{

public:
    Player(std::string nm, int scr);
    ~Player();

    //Getter and setters
    void setName(std::string name) { _name = name; }
    void setScore(unsigned int score) { _score = score; }


    std::string getName() { return _name; }
    unsigned int getScore() { return _score; }
    std::string getDateTime() { return _dat; }

    //Compute the date and time when the game was last played by this player

    

private:

    //void computeDatenTime();

    unsigned int _score;
    std::string _name;
    std::string _dat;
};

#endif