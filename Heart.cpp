#include "Heart.hpp"

Heart::Heart(float x, float y) {
    
    outerHeart.setRadius(100);
    outerHeart.setFillColor(sf::Color::Red);
    outerHeart.setOrigin(outerHeart.getRadius(), outerHeart.getRadius());
    outerHeart.setPosition(x, y);

    
    innerHeart.setRadius(50);
    innerHeart.setFillColor(sf::Color::White);
    innerHeart.setOrigin(innerHeart.getRadius(), innerHeart.getRadius());
    innerHeart.setPosition(x, y);

    rotationAngle = 0;
}

void Heart::update() {
    rotationAngle += 0.5f;
    if (rotationAngle >= 360)
        rotationAngle -= 360;

    outerHeart.setRotation(rotationAngle);
    innerHeart.setRotation(rotationAngle);
}

void Heart::draw(sf::RenderWindow& window) {
    window.draw(outerHeart);
    window.draw(innerHeart);
}
