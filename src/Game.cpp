#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Window/Event.hpp>

#include "Game.hpp"
// #include "MainMenu.hpp"

Game::Game() : m_context(std::make_shared<Context>())
{
    m_context->m_window->create(sf::VideoMode({640, 352}), "Snake Game", sf::Style::Close);
    // m_context->m_states->Add(std::make_unique<MainMenu>(m_context));
}

Game::~Game()
{
}

void Game::Run()
{
    sf::CircleShape shape(20.f);
    shape.setFillColor(sf::Color::Green);

    sf::CircleShape shape2(80.f);
    shape2.setFillColor(sf::Color::Red);
    shape2.setPosition({40.f, 0.f});

    while (m_context->m_window->isOpen())
    {
        while (const auto event = m_context->m_window->pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                m_context->m_window->close();
            }
        }

        m_context->m_window->clear(sf::Color::Black);
        m_context->m_window->draw(shape);
        m_context->m_window->draw(shape2);
        m_context->m_window->display();
    }
}

bool Game::IsRunning() const
{
    return m_context->m_window->isOpen();
}