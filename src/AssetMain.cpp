#include "AssetMain.hpp"

Engine::AssetMain::AssetMain()
{
}

Engine::AssetMain::~AssetMain()
{
}

void Engine::AssetMain::AddTexture(int id, const std::string &filePath, bool wantRepeated)
{
    auto texture = std::make_unique<sf::Texture>();

    if (texture->loadFromFile(filePath))
    {
        texture->setRepeated(wantRepeated);
        m_textures[id] = std::move(texture);
    }
}

void Engine::AssetMain::AddFont(int id, const std::string &filePath)
{
    auto font = std::make_unique<sf::Font>();

    if (font->openFromFile(filePath))
    {
        m_fonts[id] = std::move(font);
    }
}

const sf::Texture &Engine::AssetMain::GetTexture(int id) const
{
    return *(m_textures.at(id).get());
}

const sf::Font &Engine::AssetMain::GetFont(int id) const
{
    return *(m_fonts.at(id).get());
}