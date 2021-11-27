#include "AppFrontend.h"

#define WIDTH 1920
#define HEIGHT 1080
#define TITLE "SFML Starter - Open NUCES"
#define APP_ICON "../_frontend/assets/icons/global/appIcon.png"

AppFrontend::AppFrontend() {
    window = nullptr;
}

AppFrontend::~AppFrontend() {
    delete window;
}

void AppFrontend::Initialize() {
    createWindow();
    addIconToWindow();
}

void AppFrontend::Start() {


    sf::RectangleShape background;
    background.setSize(sf::Vector2f(WIDTH, HEIGHT));
    background.setFillColor(sf::Color(23,100,255));
    background.setPosition(0, 0);

    // ----

    sf::RectangleShape logoShape;
    sf::Texture logoTexture;

    logoTexture.loadFromFile(APP_ICON);
    logoShape.setTexture(&logoTexture);
    logoShape.setPosition((WIDTH / 2) - 250, (HEIGHT / 2) - 250);
    logoShape.setSize(sf::Vector2f(500, 500));

    // ----

    while(window->isOpen()){

        sf::Event event{};

        while(window->pollEvent(event)) {

            if(event.type == sf::Event::Closed){
                window->close();
            }

            window->clear();

            window->draw(background);
            window->draw(logoShape);

            window->display();

        }

    }

}

void AppFrontend::createWindow() {
    window = new sf::RenderWindow(sf::VideoMode(WIDTH,HEIGHT,32),TITLE);
}

void AppFrontend::addIconToWindow() {
    sf::Image appIcon;
    appIcon.loadFromFile(APP_ICON);
    window->setIcon(appIcon.getSize().x, appIcon.getSize().y, appIcon.getPixelsPtr());
}
