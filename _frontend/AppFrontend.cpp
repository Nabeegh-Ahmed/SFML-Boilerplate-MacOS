#include "Config.h"
#include "AppFrontend.h"
#include "Components.h"


AppFrontend::AppFrontend() {
    window = nullptr;
}

AppFrontend::~AppFrontend() {
    delete window;
}

void AppFrontend::Initialize() {
    createWindow();
    setWindowIcon();
}

void AppFrontend::Start() {

    while(window->isOpen()){

        sf::Event event{};

        while(window->pollEvent(event)) {

            if(event.type == sf::Event::Closed){
                window->close();
            }

            window->clear();

            window->draw(Components::SplashScreenBackground());
            window->draw(Components::SplashScreenLogo());

            window->display();

        }

    }

}

void AppFrontend::createWindow() {
    window = new sf::RenderWindow(sf::VideoMode(WIDTH,HEIGHT,32),TITLE);
}

void AppFrontend::setWindowIcon() {
    sf::Image appIcon;
    appIcon.loadFromFile(APP_ICON);
    window->setIcon(appIcon.getSize().x, appIcon.getSize().y, appIcon.getPixelsPtr());
}
