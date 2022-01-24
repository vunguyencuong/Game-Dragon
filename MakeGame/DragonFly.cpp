/*
#include<SFML/Graphics.hpp>
#include<iostream>
using namespace std;

int main()
{
	sf::RenderWindow window(sf::VideoMode(640, 360), "Dragon");
	sf::Texture texture;
	texture.loadFromFile("C:/Users/ACER/OneDrive/Documents/Anh - Game/Rong - Tim - Den.png");
	sf::IntRect intRect(0, 0, 160, 160);
	sf::Sprite sprite;
	sprite.setTexture(texture);
	sprite.setTextureRect(intRect);
	sf::Clock clock;
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) window.close();
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		{
			intRect.top = 0;
			if (clock.getElapsedTime().asSeconds() >= 0.20f)
			{
				if (intRect.left == 212)
				{
					intRect.left = 0;
				}
				else intRect.left += 160;
				sprite.setTextureRect(intRect);
				sprite.move(0, 10);
				if (sprite.getPosition().y >= 360) sprite.setPosition(0, 0);
				clock.restart();
			}
		}

		window.clear();
		window.draw(sprite);
		window.display();
	}
}
*/