#include <iostream>
#include <SFML/Graphics.hpp>
#include <Box2D/Box2D.h>
void pollEvent(sf::Window& window)
{
sf::Event event;

// while there are pending events...
while (window.pollEvent(event))
{
    // check the type of the event...
    switch (event.type)
    {
        // window closed
        case sf::Event::Closed:
            window.close();
            break;

        // key pressed
        case sf::Event::KeyPressed:

            break;

        // we don't process other types of events
        default:
            break;
    }
}
}
int main()
{

    sf::RenderWindow* window = new sf::RenderWindow(sf::VideoMode(800, 600), "TraderGame");
    window->setFramerateLimit(60);	

    while (window->isOpen())
	{

	    pollEvent(*window);	
	    //Shape we can fuck around with
	    sf::CircleShape shape(50);
	    window->draw(shape);



	    window->display();	
	    window->clear(sf::Color(60, 60, 60));

	}

    delete window;
    return 0;
}
