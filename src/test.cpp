#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");

    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear(sf::Color(0x00,0x00,0x00,0xff));
        sf::Vertex point(sf::Vector2f(10, 10), sf::Color::Green);
window.draw(&point, 100, sf::Points);
        window.display();
    }

    return 0;
}