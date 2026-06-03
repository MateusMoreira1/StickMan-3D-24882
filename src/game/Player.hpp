
#ifndef PLAYER_HPP
#define PLAYER_HPP 1
#include "stickman/StickMan.hpp"

class Player: public StickMan
{
  StickMan * target;

public:
  Player();
};
#endif
