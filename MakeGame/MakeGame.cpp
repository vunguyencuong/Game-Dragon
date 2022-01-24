//#include <SFML/Graphics.hpp>
//#include<iostream>
//using namespace std;
//int main()
//{
//    sf::Sprite sprite;
//    sf::Texture texture;
//    if (!texture.loadFromFile("C:/Users/ACER/Downloads/Artboard 1.png"))
//    {
//        cout << "Image isn't exist!!!" << endl;
//    }
//    sprite.setTexture(texture);
//    sprite.setScale(sf::Vector2f(0.2f, 0.2f));
//    sf::RenderWindow window(sf::VideoMode(1000, 800), "Waifu");
//    auto X = window.getSize().x;
//    auto Y = window.getSize().y;
//    sprite.setPosition(sf::Vector2f(X / 2.0f, Y / 2.0f));
//    sf::FloatRect bound = sprite.getLocalBounds();
//    sprite.setOrigin(bound.left + bound.width / 2.0f, bound.top + bound.height / 2.0f);
//    while (window.isOpen())
//    {
//        sf::Event event;
//        while (window.pollEvent(event))
//        {
//            if (event.type == sf::Event::Closed)
//                window.close();
//        }
//        window.clear();
//        window.draw(sprite);
//        window.display();
//    }
//
//    return 0;
//}
//


#include<SFML/Graphics.hpp>
#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	sf::RenderWindow Window(sf::VideoMode(1920, 1080), "NewBie", sf::Style::Close | sf::Style::Resize);
	sf::Texture flow1;
	sf::Texture flow2;
	sf::Texture flow3;
	sf::Texture background;
	sf::Sprite sprite;
	sf::Sprite sprite1;
	sf::Sprite sprite2;
	sf::Sprite sprite3;
	flow1.loadFromFile("C:/Users/ACER/OneDrive/Documents/Content Hoa/0ae24b62c3020a5c5313.jpg",sf::IntRect(100,100,400,400));
	flow2.loadFromFile("C:/Users/ACER/OneDrive/Documents/Content Hoa/01ceeb1a637aaa24f36b.jpg");
	flow3.loadFromFile("C:/Users/ACER/OneDrive/Documents/Content Hoa/1ad4cdfb429b8bc5d28a.jpg");
	background.loadFromFile("C:/Users/ACER/Downloads/Artboard 1.png");
	sprite1.setTexture(flow1);
	sprite1.setScale(sf::Vector2f(0.25f, 0.25f));
	sprite2.setTexture(flow2);
	sprite2.setScale(sf::Vector2f(0.25f, 0.25f));
	sprite3.setTexture(flow3);
	sprite3.setScale(sf::Vector2f(0.25f, 0.25f));
	sprite.setTexture(background);
	sprite.setPosition(sf::Vector2f(1.0f,1.0f));
	sprite1.setPosition(sf::Vector2f(200.0f, 500.0f));
	sprite2.setPosition(sf::Vector2f(900.0f, 500.0f));
	sprite3.setPosition(sf::Vector2f(1600.0f, 500.0f));
	while (Window.isOpen())
	{
		sf::Event event;
		while (Window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
            Window.close();
	    }
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			sf::Vector2i mouse_pos = sf::Mouse::getPosition();
			cout << sprite.getPosition().x << " "  << sprite.getPosition().y << endl;
			if (mouse_pos.x >= sprite1.getPosition().x && mouse_pos.x <= sprite1.getPosition().x + 180 && mouse_pos.y <= sprite1.getPosition().y + 240 && mouse_pos.y >= sprite1.getPosition().y)
			{
				float x = rand()%1740;
				float y = rand()%840;
				sprite1.setPosition(sf::Vector2f((float)x, (float)y));
			}
		}
		if (sprite1.getPosition().x > sprite.getPosition().x && sprite1.getPosition().y > sprite.getPosition().y)
		{
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))sprite1.move(-0.5f, 0);
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))sprite1.move(0.5f, 0);
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))sprite1.move(0.f, -0.5f);
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))sprite1.move(0.f, +0.5f);
		}
		else if(sprite1.getPosition().x > sprite.getPosition().x && sprite1.getPosition().y == sprite.getPosition().y)
		{
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))sprite1.move(-0.5f, 0);
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))sprite1.move(0.5f, 0);
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))sprite1.move(0.f, +0.5f);
		}
		else if (sprite1.getPosition().x > sprite.getPosition().x && sprite1.getPosition().y == sprite.getPosition().y+(1080-241))
		{
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))sprite1.move(-0.5f, 0);
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))sprite1.move(0.5f, 0);
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))sprite1.move(0.f, -0.5f);
			//if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))sprite1.move(0.f, +0.5f);
		}
		else if (sprite1.getPosition().x == sprite.getPosition().x && sprite1.getPosition().y > sprite.getPosition().y)
		{
			//if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))sprite1.move(-0.5f, 0);
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))sprite1.move(0.5f, 0);
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))sprite1.move(0.f, -0.5f);
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))sprite1.move(0.f, +0.5f);
		}
		else if (sprite1.getPosition().x == sprite.getPosition().x + (1920-181) && sprite1.getPosition().y > sprite.getPosition().y)
		{

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))sprite1.move(-0.5f, 0);
			//if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))sprite1.move(0.5f, 0);
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))sprite1.move(0.f, -0.5f);
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))sprite1.move(0.f, +0.5f);
		}
		else if (sprite1.getPosition().x == sprite.getPosition().x && sprite1.getPosition().y == sprite.getPosition().y)
		{
			//if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))sprite1.move(-0.5f, 0);
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))sprite1.move(0.5f, 0);
			//if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))sprite1.move(0.f, -0.5f);
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))sprite1.move(0.f, +0.5f);
		}
		else if (sprite1.getPosition().x == sprite.getPosition().x && sprite1.getPosition().y == sprite.getPosition().y + (1080-241))
		{
			//if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))sprite1.move(-0.5f, 0);
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))sprite1.move(0.5f, 0);
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))sprite1.move(0.f, -0.5f);
			//if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))sprite1.move(0.f, +0.5f);
		}
		else if (sprite1.getPosition().x == sprite.getPosition().x + (1920-181) && sprite1.getPosition().y == sprite.getPosition().y)
		{
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))sprite1.move(-0.5f, 0);
			//if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))sprite1.move(0.5f, 0);
			//if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))sprite1.move(0.f, -0.5f);
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))sprite1.move(0.f, +0.5f);
		}
		else if (sprite1.getPosition().x == sprite.getPosition().x + (1920-181) && sprite1.getPosition().y == sprite.getPosition().y + (1080-241))
		{
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))sprite1.move(-0.5f, 0);
			//if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))sprite1.move(0.5f, 0);
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))sprite1.move(0.f, -0.5f);
			//if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))sprite1.move(0.f, +0.5f);
		}
		Window.clear();
		Window.draw(sprite);
		Window.draw(sprite1);
		Window.draw(sprite2);
		Window.draw(sprite3);
		Window.display();
	}
}
