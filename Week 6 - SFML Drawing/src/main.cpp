#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

int main()
{
	// Create a window with the constructor
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Drawing Window");

	window.setFramerateLimit(60); // Set the limit of the the number of frames per second

	sf::Clock timer;

	bool bUp = true;

	sf::RectangleShape myRectA;
	myRectA.setSize(sf::Vector2f(200.f, 120.0f));
	myRectA.setPosition(200,250);
	myRectA.setOrigin(myRectA.getSize().x / 2.0f, myRectA.getSize().y / 2.0f);
	myRectA.setFillColor(sf::Color::Red);

	sf::RectangleShape myRectB;
	myRectB.setSize(sf::Vector2f(150.f, 175.0f));
	myRectB.setPosition(400,350);
	myRectB.setOrigin(myRectB.getSize().x / 2.0f, myRectB.getSize().y / 2.0f);
	myRectB.setFillColor(sf::Color::Blue);

	sf::CircleShape myCircle;
	myCircle.setRadius(60.0f);
	myCircle.setOrigin(60.0f, 60.0f);
	myCircle.setPosition(650.f,300.f);
	myCircle.setPointCount(50);
	myCircle.setFillColor(sf::Color::Magenta);

	// Run until the user closes the window
	while (window.isOpen())
	{
		// check all user events
		sf::Event event;
		while (window.pollEvent(event))
		{
			// User has pressed the close button
			if (event.type == sf::Event::Closed) window.close();

			// Process key presses
			if(event.type == sf::Event::KeyPressed)
			{
				if(event.key.code == sf::Keyboard::Up) myRectB.move(0.f, -10.f); // move RectB 10 pixels up
				if(event.key.code == sf::Keyboard::Down) myRectB.move(0.f, 10.f); // move RectB 10 pixels down
				if(event.key.code == sf::Keyboard::Left) myRectB.move(-10.f, 0.f); // move RectB 10 pixels left
				if(event.key.code == sf::Keyboard::Right) myRectB.move(10.f, 0.f); // move RectB 10 pixels right
				if(event.key.code == sf::Keyboard::Tab && !event.key.shift) myRectB.rotate(5.0f); // Rotate RectB 5 degrees clockwise
				if(event.key.code == sf::Keyboard::Tab && event.key.shift) myRectB.rotate(-5.0f); // Rotate RectB 5 degrees counter clockwise
			}

			// Process mouse clicks
			if(event.type == sf::Event::MouseButtonPressed)
			{
				// user has done a left click
				if(event.mouseButton.button == sf::Mouse::Left)
				{
					sf::FloatRect rectABoundingBox = myRectA.getGlobalBounds();
					sf::Vector2f clickLocation((float) event.mouseButton.x, (float) event.mouseButton.y);

					if(rectABoundingBox.contains(clickLocation))
					{
						if(myRectA.getFillColor() == sf::Color::Red)
						{
							myRectA.setFillColor(sf::Color::Green);
						}
						else
						{
							myRectA.setFillColor(sf::Color::Red);
						}
					}
				}
			}
		}

		// Move circle
		sf::Time elapsedTime = timer.getElapsedTime();
		if(elapsedTime.asSeconds() > 0.05) // A 20th of a second has passed
		{
			if(bUp)
			{
				myCircle.move(0.0f,-5.0f);
				if(myCircle.getPosition().y < 0) bUp = false;
			}
			else
			{
				myCircle.move(0.0f,5.0f);
				if(myCircle.getPosition().y > 600) bUp = true;
			}
		}

		// Check for collisions
		sf::FloatRect rectABoundingBox = myRectA.getGlobalBounds();
		sf::Vector2f location(15.f,400.f);
		bool isIn = rectABoundingBox.contains(location);

		sf::FloatRect rectBBoundingBox = myRectB.getGlobalBounds();

		if(rectABoundingBox.intersects(rectBBoundingBox))
		{
			cout << "A and B bound boxes intersect." << endl;
		}
		else
		{
			cout << "A and B bound boxes do not intersect." << endl;
		}

		// Clear the window
		window.clear(sf::Color::White);

		window.draw(myRectA);
		window.draw(myRectB);
		window.draw(myCircle);

		// Display what ever has been drawn to the screen
		window.display();
	}

	return 0;
}


