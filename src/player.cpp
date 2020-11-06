#include <iostream>
#include <chrono>
#include <ctime>

#include "player.h"

Player::Player(std::string nm, int scr) : _name(nm), _score(scr) {
  
  auto timenow = std::chrono::system_clock::now();
    std::time_t end_time = std::chrono::system_clock::to_time_t(timenow);

    _dat= std::ctime(&end_time);

}

Player::~Player(){};

/*

void Player::computeDatenTime()
{

    auto timenow = std::chrono::system_clock::now();
    std::time_t end_time = std::chrono::system_clock::to_time_t(timenow);

    _dat= std::ctime(&end_time);

    //return (std::ctime(&end_time));
}
*/