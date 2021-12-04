//
// Created by Saqib Ali on 04/12/2021.
//

#ifndef SFMLOPENNUCES_COMPONENTS_H
#define SFMLOPENNUCES_COMPONENTS_H

#include <SFML/Graphics.hpp>
#include "Config.h"

class Components {
public:

    static sf::RectangleShape SplashScreenBackground() {
        sf::RectangleShape background;
        background.setSize(sf::Vector2f(WIDTH, HEIGHT));
        background.setFillColor(sf::Color(23,100,255));
        background.setPosition(0, 0);
        return background;
    }

    static sf::Texture* logoTexture;
    static sf::RectangleShape SplashScreenLogo() {

        sf::RectangleShape logoShape;

        logoTexture->loadFromFile(APP_ICON);
        logoShape.setTexture(logoTexture);
        logoShape.setPosition((WIDTH / 2) - 250, (HEIGHT / 2) - 250);
        logoShape.setSize(sf::Vector2f(500, 500));

        return logoShape;
    }
};


sf::Texture* Components::logoTexture = new sf::Texture;

#endif //SFMLOPENNUCES_COMPONENTS_H
