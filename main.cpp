#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <iostream>


int main() {
  sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Test!");
  sf::Event event;
  sf::Keyboard kb;
  sf::CircleShape circ(50);
  sf::Text text;
  sf::CircleShape zcirc(30);
  text.setColor(sf::Color(100,250,50));
  window.draw(text);
  circ.setFillColor(sf::Color(100, 250, 50));
  zcirc.setFillColor(sf::Color(250, 0, 0));
  window.draw(zcirc);
  window.draw(circ);
  while (window.isOpen()) {
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed)
        window.close();
    }
    if (kb.isKeyPressed(kb.W)) {
      circ.move(0, -1);
    }
    if (kb.isKeyPressed(kb.D)) {
      circ.move(1, 0);
    }
    if (kb.isKeyPressed(kb.A)) {
      circ.move(-1,0);
    }
    if (kb.isKeyPressed(kb.S)) {
      circ.move(0, 1);
    }

    
    window.clear();
    window.draw(circ);
    window.draw(zcirc);
    window.display();
  }
}
