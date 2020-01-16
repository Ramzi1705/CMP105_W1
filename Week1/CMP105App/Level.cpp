#include "Level.h"

Level::Level(sf::RenderWindow* hwnd)
{
	window = hwnd;

	// initialise game objects
	rect.setSize(sf::Vector2f(25, 25));
	rect.setPosition(112.5, 112.5);
	rect.setFillColor(sf::Color::Green);

	
	rect2.setSize(sf::Vector2f(50, 50));
	rect2.setPosition(100, 100);
	rect2.setFillColor(sf::Color::Red);

	rect3.setSize(sf::Vector2f(12.5, 12.5));
	rect3.setPosition(118.25, 118.25);
	rect3.setFillColor(sf::Color::Blue);
	
	rect4.setSize(sf::Vector2f(75, 55));
	rect4.setFillColor(sf::Color::Yellow);
	rect4.setPosition(100, 100);

	//render text
	if (!font.loadFromFile("font/arial.ttf"))
	{
		std::cout << "Error loading font\n";
	}

	text.setFont(font);
	text.setString("Hello World");
	text.setCharacterSize(18);
	text.setFillColor(sf::Color::Red);
	text.setPosition(500, 0);
	
	
	circle.setRadius(15);
	circle.setPosition(300, 300);
	circle.setFillColor(sf::Color::Blue);
	circle.setOutlineColor(sf::Color::Red);
	circle.setOutlineThickness(2.f);
}

Level::~Level()
{
}

// handle user input
void Level::handleInput()
{

}

// Update game objects
void Level::update()
{
	sf::Vector2u pos = window->getSize();
	rect4.setPosition(600-100, 600-100);
}

// Render level
void Level::render()
{
	beginDraw();
	
	//window->draw(rect2);
	//window->draw(rect);
	//window->draw(rect3);
	//window->draw(circle);
	window->draw(rect4);
	window->draw(text);
	
	endDraw();
}

void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}

