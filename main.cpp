#include <iostream>
#include <SFML/Graphics.hpp>
#include <Box2D/Box2D.h>

int main()
{

    sf::RenderWindow* window = new sf::RenderWindow(sf::VideoMode(800, 600), "TraderGame");
	window->setFramerateLimit(60);	

	while (window->isOpen())
	  {

		
	    window->clear(sf::Color(60, 60, 60));
	    window->display();





	  }

	delete window;
    return 0;
}
