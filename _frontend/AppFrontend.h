#ifndef SFMLOPENNUCES_APPFRONTEND_H
#define SFMLOPENNUCES_APPFRONTEND_H

#include <SFML/Graphics.hpp>

class AppFrontend {
public:
    AppFrontend();
    ~AppFrontend();

    void Initialize();
    void Start();

private:
    void createWindow();
    void setWindowIcon();

private:
    sf::RenderWindow* window;
    unsigned int width;
    unsigned int height;
    std::string title;
};


#endif