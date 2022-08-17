#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(775, 868), "Beata ma chuja :D");
    sf::Texture texture[2];
        texture[0].loadFromFile("beata.jpeg");
        texture[1].loadFromFile("xd.jpg");
    sf::Sprite sprite;
        sprite.setTexture(texture[0]);
    sf::Music music[2];
        music[0].openFromFile("music.ogg");
        music[1].openFromFile("POU.ogg");
        music[1].play();
     sf::Event event;

    while(window.isOpen())
    {   
        while(window.pollEvent(event))
        {
            switch(event.type)
            {
                case sf::Event::Closed:
                    window.close();
                    break;
                case sf::Event::KeyPressed:
                    if(event.key.code == sf::Keyboard::Escape)
                        window.close();
                    break;
                    if(event.key.code == sf::Keyboard::E)
                        sprite.setTexture(texture[0]);

                
                case sf::Event::MouseButtonPressed:
                {
                    if(event.mouseButton.button == sf::Mouse::Left)
                    {
                        music[1].stop();
                        sprite.setTexture(texture[1]);
                        music[0].play();
                    }         
                }
                break; 
            }
        }

        
        window.clear();
        window.draw(sprite);
        window.display();
    }
    

    return 0;
} 