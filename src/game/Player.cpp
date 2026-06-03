
#include "Player.hpp"

Player::Player()
{
  Material material(glm::vec3(0.012f, 0.012f, 0.012f), glm::vec3(0.1f, 0.1f, 0.1f), glm::vec3(0.11f, 0.11f, 0.11f), 2);
  changeWholeMaterial(material);
}
