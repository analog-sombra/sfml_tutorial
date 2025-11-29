#include <SFML/Graphics.hpp>
#include "Game.hpp"

int main()
{
  // sf::RenderWindow window(sf::VideoMode({800, 600}), "SFML Tutorial",
  //                         sf::Style::Default, sf::State::Windowed);

  // sf::CircleShape shape(50.f);
  // shape.setFillColor(sf::Color(150, 50, 250));

  // while (window.isOpen())
  // {
  //   while (const std::optional event = window.pollEvent())
  //   {
  //     // "close requested" event: we close the window
  //     if (event->is<sf::Event::Closed>())
  //       window.close();
  //   }

  //   window.clear(sf::Color::Black);
  //   window.draw(shape);
  //   window.display();
  // }

  Game game;
  game.Run();

  return 0;
}