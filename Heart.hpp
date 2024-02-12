#ifndef HEART_HPP
#define HEART_HPP

#include <SFML/Graphics.hpp>

class Heart {
private:
    sf::CircleShape outerHeart;
    sf::CircleShape innerHeart;
    float rotationAngle;

public:
    Heart(float x, float y);
    void update();
    void draw(sf::RenderWindow& window);
};

#endif 
