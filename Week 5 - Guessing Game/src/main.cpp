#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
	// Create a window with the constructor
	sf::RenderWindow window(sf::VideoMode(800, 600), "Guessing Game");

	window.setPosition(sf::Vector2i(100, 100)); // Set the position of the window to 100,100

	window.setFramerateLimit(60); // Set the limit of the the number of frames per second

	// Run until the user closes the window
	while (window.isOpen())
	{
		// check all user events
		sf::Event event;
		while (window.pollEvent(event))
		{
			// User has pressed the close button
			if (event.type == sf::Event::Closed) window.close();
		}
	}
    return 0;
}
