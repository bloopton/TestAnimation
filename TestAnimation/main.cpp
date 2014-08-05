#include <SFML/Graphics.hpp>
#include "AnimatedSprite.hpp"
#include <iostream>

int main()
{
    // setup window
    sf::Vector2i screenDimensions(576,272);
    sf::RenderWindow window(sf::VideoMode(screenDimensions.x, screenDimensions.y), "Rainsford");
    window.setFramerateLimit(60);
    
    sf::Vector2f scaler(screenDimensions.x/72, screenDimensions.y/34);
    
    /*background setup
    There are 3 copies of each background layer (z-score), one is drawn in left and one is drawn right of
     the default background that is automatically drawn. After the any of the 3 copies moves its entire width left
     (position.x is negative width) it is assigned position.x = positive width. This "shuffles" the copies
     and gives an illusion of continuity.
     
     */
    sf::RectangleShape titlescreen (sf::Vector2f(screenDimensions.x, screenDimensions.y));
    sf::Texture title;
    if (!title.loadFromFile("/Users/warrenpennington/Desktop/Programs/TestAnimation/TestAnimation/Rainsford Titlescreen.png"))
    {
        std::cout << "Failed to load player spritesheet!" << std::endl;
        return 1;
    }
    titlescreen.setTexture(&title); // texture is a sf::Texture
    titlescreen.setTextureRect(sf::IntRect(0, 0, 576,272));

    //back1
    sf::RectangleShape back1(sf::Vector2f(72,34));
    sf::Texture textureBack1;
    if (!textureBack1.loadFromFile("/Users/warrenpennington/Desktop/Programs/TestAnimation/TestAnimation/Background1.png"))
    {
        std::cout << "Failed to load player spritesheet!" << std::endl;
        return 1;
    }
    back1.setTexture(&textureBack1); // texture is a sf::Texture
    back1.setTextureRect(sf::IntRect(0, 0, 72,34));
    
    //back2
    sf::RectangleShape back2(sf::Vector2f(128,32));
    sf::Texture textureBack2;
    if (!textureBack2.loadFromFile("/Users/warrenpennington/Desktop/Programs/TestAnimation/TestAnimation/Background2.png"))
    {
        std::cout << "Failed to load player spritesheet!" << std::endl;
        return 1;
    }
    back2.setTexture(&textureBack2); // texture is a sf::Texture
    back2.setTextureRect(sf::IntRect(0, 0, 128,32));

    sf::RectangleShape back2a(sf::Vector2f(128,32));
    back2a.setTexture(&textureBack2); // texture is a sf::Texture
    back2a.setTextureRect(sf::IntRect(0, 0, 128,32));
    back2a.setPosition(-128*8, 0);
    
    sf::RectangleShape back2b(sf::Vector2f(128,32));
    back2b.setTexture(&textureBack2); // texture is a sf::Texture
    back2b.setTextureRect(sf::IntRect(0, 0, 128,32));
    back2b.setPosition(128*8, 0);
    
    //back3
    sf::RectangleShape back3(sf::Vector2f(128,32));
    sf::Texture textureBack3;
    if (!textureBack3.loadFromFile("/Users/warrenpennington/Desktop/Programs/TestAnimation/TestAnimation/Background3.png"))
    {
        std::cout << "Failed to load player spritesheet!" << std::endl;
        return 1;
    }
    back3.setTexture(&textureBack3); // texture is a sf::Texture
    back3.setTextureRect(sf::IntRect(0, 0, 128,32));

    sf::RectangleShape back3a(sf::Vector2f(128,32));
    back3a.setTexture(&textureBack3); // texture is a sf::Texture
    back3a.setTextureRect(sf::IntRect(0, 0, 128,32));
    back3a.setPosition(-128*8, 0);
    
    sf::RectangleShape back3b(sf::Vector2f(128,32));
    back3b.setTexture(&textureBack3); // texture is a sf::Texture
    back3b.setTextureRect(sf::IntRect(0, 0, 128,32));
    back3b.setPosition(128*8, 0);
    
    //back4
    sf::RectangleShape back4(sf::Vector2f(112,32));
    sf::Texture textureBack4;
    if (!textureBack4.loadFromFile("/Users/warrenpennington/Desktop/Programs/TestAnimation/TestAnimation/Background4.png"))
    {
        std::cout << "Failed to load player spritesheet!" << std::endl;
        return 1;
    }
    back4.setTexture(&textureBack4); // texture is a sf::Texture
    back4.setTextureRect(sf::IntRect(0, 0, 112,32));

    sf::RectangleShape back4a(sf::Vector2f(112,32));
    back4a.setTexture(&textureBack4); // texture is a sf::Texture
    back4a.setTextureRect(sf::IntRect(0, 0, 112,32));
    back4a.setPosition(-112*8, 0);
    
    sf::RectangleShape back4b(sf::Vector2f(112,32));
    back4b.setTexture(&textureBack4); // texture is a sf::Texture
    back4b.setTextureRect(sf::IntRect(0, 0, 112,32));
    back4b.setPosition(112*8, 0);
    
    //back5
    sf::RectangleShape back5(sf::Vector2f(96,32));
    sf::Texture textureBack5;
    if (!textureBack5.loadFromFile("/Users/warrenpennington/Desktop/Programs/TestAnimation/TestAnimation/Background5.png"))
    {
        std::cout << "Failed to load player spritesheet!" << std::endl;
        return 1;
    }
    back5.setTexture(&textureBack5); // texture is a sf::Texture
    back5.setTextureRect(sf::IntRect(0, 0, 96,32));
    
    sf::RectangleShape back5a(sf::Vector2f(96,32));
    back5a.setTexture(&textureBack5); // texture is a sf::Texture
    back5a.setTextureRect(sf::IntRect(0, 0, 96,32));
    back5a.setPosition(-96*8, 0);
    
    sf::RectangleShape back5b(sf::Vector2f(96,32));
    back5b.setTexture(&textureBack5); // texture is a sf::Texture
    back5b.setTextureRect(sf::IntRect(0, 0, 96,32));
    back5b.setPosition(96*8, 0);
    
    //back6
    sf::RectangleShape back6(sf::Vector2f(72,32));
    sf::Texture textureBack6;
    if (!textureBack6.loadFromFile("/Users/warrenpennington/Desktop/Programs/TestAnimation/TestAnimation/Background6.png"))
    {
        std::cout << "Failed to load player spritesheet!" << std::endl;
        return 1;
    }
    back6.setTexture(&textureBack6); // texture is a sf::Texture
    back6.setTextureRect(sf::IntRect(0, 0, 72,32));

    sf::RectangleShape back6a(sf::Vector2f(72,32));
    back6a.setTexture(&textureBack6); // texture is a sf::Texture
    back6a.setTextureRect(sf::IntRect(0, 0, 72,32));
    back6a.setPosition(-72*8, 0);
    
    sf::RectangleShape back6b(sf::Vector2f(72,32));
    back6b.setTexture(&textureBack6); // texture is a sf::Texture
    back6b.setTextureRect(sf::IntRect(0, 0, 72,32));
    back6b.setPosition(72*8, 0);
    
    //moonlight
    sf::RectangleShape moonlight(sf::Vector2f(96,32));
    sf::Texture textureMoon;
    if (!textureMoon.loadFromFile("/Users/warrenpennington/Desktop/Programs/TestAnimation/TestAnimation/Moonlight.png"))
    {
        std::cout << "Failed to load player spritesheet!" << std::endl;
        return 1;
    }
    moonlight.setTexture(&textureMoon); // texture is a sf::Texture
    moonlight.setTextureRect(sf::IntRect(0, 0, 96,32));
    
    sf::RectangleShape moonlighta(sf::Vector2f(96,32));
    moonlighta.setTexture(&textureBack6); // texture is a sf::Texture
    moonlighta.setTextureRect(sf::IntRect(0, 0, 96,32));
    moonlighta.setPosition(-96*8, 0);
    
    sf::RectangleShape moonlightb(sf::Vector2f(96,32));
    moonlightb.setTexture(&textureMoon); // texture is a sf::Texture
    moonlightb.setTextureRect(sf::IntRect(0, 0, 96,32));
    moonlightb.setPosition(96*8, 0);

    
    //vines
    sf::RectangleShape vines(sf::Vector2f(96,32));
    sf::Texture textureVines;
    if (!textureVines.loadFromFile("/Users/warrenpennington/Desktop/Programs/TestAnimation/TestAnimation/Vines.png"))
    {
        std::cout << "Failed to load player spritesheet!" << std::endl;
        return 1;
    }
    vines.setTexture(&textureVines); // texture is a sf::Texture
    vines.setTextureRect(sf::IntRect(0, 0, 96,32));
    
    sf::RectangleShape vinesa(sf::Vector2f(96,32));
    vinesa.setTexture(&textureVines); // texture is a sf::Texture
    vinesa.setTextureRect(sf::IntRect(0, 0, 96,32));
    vinesa.setPosition(-96*8, 0);
    
    sf::RectangleShape vinesb(sf::Vector2f(96,32));
    vinesb.setTexture(&textureVines); // texture is a sf::Texture
    vinesb.setTextureRect(sf::IntRect(0, 0, 96,32));
    vinesb.setPosition(96*8, 0);

    
    //end of backgrounds ***********************************************************
    
    back1.scale(scaler);
    back2.scale(scaler);
    back3.scale(scaler);
    back4.scale(scaler);
    back5.scale(scaler);
    back6.scale(scaler);
    vines.scale(scaler);
    back2a.scale(scaler);
    back3a.scale(scaler);
    back4a.scale(scaler);
    back5a.scale(scaler);
    back6a.scale(scaler);
    vinesa.scale(scaler);
    back2b.scale(scaler);
    back3b.scale(scaler);
    back4b.scale(scaler);
    back5b.scale(scaler);
    back6b.scale(scaler);
    vinesb.scale(scaler);
    moonlight.scale(scaler);
    moonlighta.scale(scaler);
    moonlightb.scale(scaler);
    
    //flickering stormlamp spritesheet
    sf::Texture stormLamp;
    
    if (!stormLamp.loadFromFile("/Users/warrenpennington/Desktop/Programs/TestAnimation/TestAnimation/RainsfordStormLamp_Spritesheet.png"))
    {
        std::cout << "Failed to load player spritesheet!" << std::endl;
        return 1;
    }
    
    Animation flicker;
    flicker.setSpriteSheet(stormLamp);
    flicker.addFrame(sf::IntRect (0, 0, 160, 90));
    flicker.addFrame(sf::IntRect (0, 90, 160, 90));
    flicker.addFrame(sf::IntRect (0, 180, 160, 90));
    flicker.addFrame(sf::IntRect (0, 90, 160, 90));


    AnimatedSprite flickerSprite(sf::seconds(.3), true, false);
    flickerSprite.scale(scaler);
    flickerSprite.setPosition(((-160/scaler.x)*18), -120*scaler.y/4);
    
    //IVAN STUFF
    // load texture (spritesheet)
    sf::Texture textureIvan;
    if (!textureIvan.loadFromFile("/Users/warrenpennington/Desktop/Programs/TestAnimation/TestAnimation/Spritesheet_Ivan.png"))
    {
        std::cout << "Failed to load player spritesheet!" << std::endl;
        return 1;
    }
    
    // set up the animations for all four directions (set spritesheet and push frames)
    
    Animation ivan_standingRight;
    ivan_standingRight.setSpriteSheet(textureIvan);
    ivan_standingRight.addFrame(sf::IntRect(0, 0, 8, 8));
    ivan_standingRight.addFrame(sf::IntRect(8, 0, 8, 8));
    ivan_standingRight.addFrame(sf::IntRect(16, 0, 8, 8));
    ivan_standingRight.addFrame(sf::IntRect( 24, 0, 8, 8));
    ivan_standingRight.addFrame(sf::IntRect(32, 0, 8, 8));
    ivan_standingRight.addFrame(sf::IntRect( 40, 0, 8, 8));
    
    Animation ivan_standingLeft;
    ivan_standingLeft.setSpriteSheet(textureIvan);
    ivan_standingLeft.addFrame(sf::IntRect(0, 8, 8, 8));
    ivan_standingLeft.addFrame(sf::IntRect(8, 8, 8, 8));
    ivan_standingLeft.addFrame(sf::IntRect(16, 8, 8, 8));
    ivan_standingLeft.addFrame(sf::IntRect( 24, 8, 8, 8));
    ivan_standingLeft.addFrame(sf::IntRect(32, 8, 8, 8));
    ivan_standingLeft.addFrame(sf::IntRect(40, 8, 8, 8));
    
    Animation ivan_walkingRight;
    ivan_walkingRight.setSpriteSheet(textureIvan);
    ivan_walkingRight.addFrame(sf::IntRect(0, 16, 8, 8));
    ivan_walkingRight.addFrame(sf::IntRect(8, 16, 8, 8));
    ivan_walkingRight.addFrame(sf::IntRect(16, 16, 8, 8));
    ivan_walkingRight.addFrame(sf::IntRect( 24, 16, 8, 8));
    ivan_walkingRight.addFrame(sf::IntRect(32, 16, 8, 8));
    ivan_walkingRight.addFrame(sf::IntRect( 40, 16, 8, 8));
    
    Animation ivan_walkingLeft;
    ivan_walkingLeft.setSpriteSheet(textureIvan);
    ivan_walkingLeft.addFrame(sf::IntRect(0, 24, 8, 8));
    ivan_walkingLeft.addFrame(sf::IntRect(8, 24, 8, 8));
    ivan_walkingLeft.addFrame(sf::IntRect(16, 24, 8, 8));
    ivan_walkingLeft.addFrame(sf::IntRect( 24, 24, 8, 8));
    ivan_walkingLeft.addFrame(sf::IntRect(32, 24, 8, 8));
    ivan_walkingLeft.addFrame(sf::IntRect( 40, 24, 8, 8));

    Animation* currentIvanAnimation = &ivan_standingRight;
    
    AnimatedSprite ivan(sf::seconds(.07), true, false);
    ivan.setPosition(sf::Vector2f(screenDimensions.x / 2 - 264, 192));
    ivan.scale(scaler);
    
    
    // DOG load texture (spritesheet)
    sf::Texture textureDog;
    if (!textureDog.loadFromFile("/Users/warrenpennington/Desktop/Programs/TestAnimation/TestAnimation/Spritesheet_Dog.png"))
    {
        std::cout << "Failed to load player spritesheet!" << std::endl;
        return 1;
    }
    

    //dog spritesheet animation setup
    Animation dog_standingRight;
    dog_standingRight.setSpriteSheet(textureDog);
    dog_standingRight.addFrame(sf::IntRect(0, 0, 8, 8));
    dog_standingRight.addFrame(sf::IntRect(8, 0, 8, 8));
    dog_standingRight.addFrame(sf::IntRect(16, 0, 8, 8));
    dog_standingRight.addFrame(sf::IntRect( 24, 0, 8, 8));
    
    Animation dog_standingLeft;
    dog_standingLeft.setSpriteSheet(textureDog);
    dog_standingLeft.addFrame(sf::IntRect(0, 8, 8, 8));
    dog_standingLeft.addFrame(sf::IntRect(8, 8, 8, 8));
    dog_standingLeft.addFrame(sf::IntRect(16, 8, 8, 8));
    dog_standingLeft.addFrame(sf::IntRect( 24, 8, 8, 8));

    Animation dog_walkingRight;
    dog_walkingRight.setSpriteSheet(textureDog);
    dog_walkingRight.addFrame(sf::IntRect(0, 16, 8, 8));
    dog_walkingRight.addFrame(sf::IntRect(8, 16, 8, 8));
    dog_walkingRight.addFrame(sf::IntRect(16, 16, 8, 8));
    dog_walkingRight.addFrame(sf::IntRect( 24, 16, 8, 8));
    
    Animation dog_walkingLeft;
    dog_walkingLeft.setSpriteSheet(textureDog);
    dog_walkingLeft.addFrame(sf::IntRect(0, 24, 8, 8));
    dog_walkingLeft.addFrame(sf::IntRect(8, 24, 8, 8));
    dog_walkingLeft.addFrame(sf::IntRect(16, 24, 8, 8));
    dog_walkingLeft.addFrame(sf::IntRect( 24, 24, 8, 8));

    Animation dog_walkingRightHostile;
    dog_walkingRightHostile.setSpriteSheet(textureDog);
    dog_walkingRightHostile.addFrame(sf::IntRect(0, 32, 8, 8));
    dog_walkingRightHostile.addFrame(sf::IntRect(8, 32, 8, 8));
    dog_walkingRightHostile.addFrame(sf::IntRect(16, 32, 8, 8));
    dog_walkingRightHostile.addFrame(sf::IntRect( 24, 32, 8, 8));
    
    Animation dog_walkingLeftHostile;
    dog_walkingLeftHostile.setSpriteSheet(textureDog);
    dog_walkingLeftHostile.addFrame(sf::IntRect(0, 40, 8, 8));
    dog_walkingLeftHostile.addFrame(sf::IntRect(8, 40, 8, 8));
    dog_walkingLeftHostile.addFrame(sf::IntRect(16, 40, 8, 8));
    dog_walkingLeftHostile.addFrame(sf::IntRect( 24, 40, 8, 8));

    Animation* currentDogAnimation = &dog_standingRight;
    
    AnimatedSprite dog(sf::seconds(.07), true, false);
    dog.setPosition(sf::Vector2f(screenDimensions.x / 2 - 200, 192));
    dog.scale(scaler);
    
    
    // load texture (spritesheet)
    sf::Texture texture;
    if (!texture.loadFromFile("/Users/warrenpennington/Desktop/Programs/TestAnimation/TestAnimation/Spritesheet_Rainsford.png"))
    {
        std::cout << "Failed to load player spritesheet!" << std::endl;
        return 1;
    }
    
    // set up the animations for all directions (set spritesheet and push frames)
    
    Animation standingRight;
    standingRight.setSpriteSheet(texture);
    standingRight.addFrame(sf::IntRect(0, 0, 8, 8));
    standingRight.addFrame(sf::IntRect(8, 0, 8, 8));
    standingRight.addFrame(sf::IntRect(16, 0, 8, 8));
    standingRight.addFrame(sf::IntRect( 24, 0, 8, 8));
   // standingRight.addFrame(sf::IntRect(32, 0, 8, 8));
   // standingRight.addFrame(sf::IntRect( 40, 0, 8, 8));
    
    Animation standingLeft;
    standingLeft.setSpriteSheet(texture);
    standingLeft.addFrame(sf::IntRect(0, 8, 8, 8));
    standingLeft.addFrame(sf::IntRect(8, 8, 8, 8));
    standingLeft.addFrame(sf::IntRect(16, 8, 8, 8));
    standingLeft.addFrame(sf::IntRect( 24, 8, 8, 8));
   // standingLeft.addFrame(sf::IntRect(32, 8, 8, 8));
   // standingLeft.addFrame(sf::IntRect(40, 8, 8, 8));

    Animation walkingRight;
    walkingRight.setSpriteSheet(texture);
    walkingRight.addFrame(sf::IntRect(0, 16, 8, 8));
    walkingRight.addFrame(sf::IntRect(8, 16, 8, 8));
    walkingRight.addFrame(sf::IntRect(16, 16, 8, 8));
    walkingRight.addFrame(sf::IntRect( 24, 16, 8, 8));
    //walkingRight.addFrame(sf::IntRect(32, 16, 8, 8));
    //walkingRight.addFrame(sf::IntRect( 40, 16, 8, 8));
    
    Animation walkingLeft;
    walkingLeft.setSpriteSheet(texture);
    walkingLeft.addFrame(sf::IntRect(0, 24, 8, 8));
    walkingLeft.addFrame(sf::IntRect(8, 24, 8, 8));
    walkingLeft.addFrame(sf::IntRect(16, 24, 8, 8));
    walkingLeft.addFrame(sf::IntRect( 24, 24, 8, 8));
    //walkingLeft.addFrame(sf::IntRect(32, 24, 8, 8));
    //walkingLeft.addFrame(sf::IntRect( 40, 24, 8, 8));
  
    Animation jumpingRight;
    jumpingRight.setSpriteSheet(texture);
    jumpingRight.addFrame(sf::IntRect(0, 32, 8, 8));
    jumpingRight.addFrame(sf::IntRect(8, 32, 8, 8));
    jumpingRight.addFrame(sf::IntRect(16, 32, 8, 8));
    jumpingRight.addFrame(sf::IntRect( 24, 32, 8, 8));
    //jumpingRight.addFrame(sf::IntRect(32, 32, 8, 8));
    //jumpingRight.addFrame(sf::IntRect( 40, 32, 8, 8));

    
    Animation jumpingLeft;
    jumpingLeft.setSpriteSheet(texture);
    jumpingLeft.addFrame(sf::IntRect(0, 40, 8, 8));
    jumpingLeft.addFrame(sf::IntRect(8, 40, 8, 8));
    jumpingLeft.addFrame(sf::IntRect(16, 40, 8, 8));
    jumpingLeft.addFrame(sf::IntRect( 24, 40, 8, 8));
    //jumpingLeft.addFrame(sf::IntRect(32, 40, 8, 8));
    //jumpingLeft.addFrame(sf::IntRect( 40, 40, 8, 8));

    
    Animation crawlingRight;
    crawlingRight.setSpriteSheet(texture);
    crawlingRight.addFrame(sf::IntRect(0, 64, 8, 8));
    crawlingRight.addFrame(sf::IntRect(8, 64, 8, 8));
    crawlingRight.addFrame(sf::IntRect(16, 64, 8, 8));
    crawlingRight.addFrame(sf::IntRect( 24, 64, 8, 8));
    //jumpingRight.addFrame(sf::IntRect(32, 32, 8, 8));
    //jumpingRight.addFrame(sf::IntRect( 40, 32, 8, 8));
    
    
    Animation crawlingLeft;
    crawlingLeft.setSpriteSheet(texture);
    crawlingLeft.addFrame(sf::IntRect(0, 72, 8, 8));
    crawlingLeft.addFrame(sf::IntRect(8, 72, 8, 8));
    crawlingLeft.addFrame(sf::IntRect(16, 72, 8, 8));
    crawlingLeft.addFrame(sf::IntRect( 24, 72, 8, 8));
    //jumpingLeft.addFrame(sf::IntRect(32, 40, 8, 8));
    //jumpingLeft.addFrame(sf::IntRect( 40, 40, 8, 8));

    
    Animation disguise1;
    disguise1.setSpriteSheet(texture);
    disguise1.addFrame(sf::IntRect(0, 48, 8, 8));
    Animation disguise2;
    disguise2.setSpriteSheet(texture);
    disguise2.addFrame(sf::IntRect(8, 48, 8, 8));
    Animation disguise3;
    disguise3.setSpriteSheet(texture);
    disguise3.addFrame(sf::IntRect(16, 48, 8, 8));
    Animation disguise4;
    disguise4.setSpriteSheet(texture);
    disguise4.addFrame(sf::IntRect(24, 48, 8, 8));
    
    Animation crouchedRight;
    crouchedRight.setSpriteSheet(texture);
    crouchedRight.addFrame(sf::IntRect(0, 56, 8, 8));
    
    Animation crouchedLeft;
    crouchedLeft.setSpriteSheet(texture);
    crouchedLeft.addFrame(sf::IntRect(8, 56, 8, 8));


    Animation* currentAnimation = &standingRight;
    
    
    
    float rainsfordAnimationSpeed = .07;
    
    
    // set up AnimatedSprite
    AnimatedSprite animatedSprite(sf::seconds(rainsfordAnimationSpeed), true, false);
    animatedSprite.setPosition(sf::Vector2f(screenDimensions.x / 2 - 64, 192));
    animatedSprite.scale(scaler);
    sf::Clock frameClock;
    
    float speed = 650.f;
    bool noKeyWasPressed = true;
    
    
    enum direction { left, right};
    direction currentDir = right;
    
    
       while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
                window.close();
        }
        
        sf::Time frameTime = frameClock.restart();
        
        
        // if a key was pressed set the correct animation and move correctly
        sf::Vector2f movement(0.f, 0.f);
        
        
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
        {
            if(currentDir == left)
            {
                currentAnimation = &jumpingLeft;
                noKeyWasPressed = false;
            }
            if(currentDir == right)
            {
                currentAnimation = &jumpingRight;
                noKeyWasPressed = false;
            }
 
        }
        
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) || sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        {
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
            {
                currentAnimation = &crawlingLeft;
                currentDogAnimation = &dog_walkingLeft; //DOG ANIMATION
                currentIvanAnimation = &ivan_walkingLeft; //Ivan ANIMATION

                movement.x += .2*speed;
                noKeyWasPressed = false;
                currentDir = left;
            }
            else
            {
                currentAnimation = &walkingLeft;
                currentDogAnimation = &dog_walkingLeftHostile; //DOG ANIMATION
                currentIvanAnimation = &ivan_walkingLeft; //Ivan ANIMATION

                movement.x += speed;
                noKeyWasPressed = false;
                currentDir = left;

            }
        }
        
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        {
           

            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
            {
                currentAnimation = &crawlingRight;
                currentDogAnimation = &dog_walkingRight; //DOG ANIMATION
                currentIvanAnimation = &ivan_walkingRight; //Ivan ANIMATION

                movement.x -= .2*speed;
                noKeyWasPressed = false;
                currentDir = right;
            }
            else
            {
                currentAnimation = &walkingRight;
                currentDogAnimation = &dog_walkingRightHostile; //DOG ANIMATION
                currentIvanAnimation = &ivan_walkingRight; //Ivan ANIMATION

                movement.x -= speed;
                noKeyWasPressed = false;
                currentDir = right;
            }
        }
        
    }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
        {
            if(currentDir == left)
            {
                currentAnimation = &crouchedLeft;
                noKeyWasPressed = false;
            }
            if(currentDir == right)
            {
                currentAnimation = &crouchedRight;
                noKeyWasPressed = false;
            }
            
        }
        

        
        
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::E))
        {
            currentAnimation = &disguise1;
            noKeyWasPressed = false;
            movement.x = 0;
        }
        
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
        {
            currentAnimation = &disguise2;
            noKeyWasPressed = false;
            movement.x = 0;
        }
        
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::T))
        {
            currentAnimation = &disguise3;
            noKeyWasPressed = false;
            movement.x = 0;
        }
        
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Y))
        {
            currentAnimation = &disguise4;
            noKeyWasPressed = false;
            movement.x = 0;
        }
        
        

        
        // if no key was pressed
        if (noKeyWasPressed)
        {
            sf::Time slowerFrameTime = sf::seconds(.3);
            
            animatedSprite.setFrameTime(slowerFrameTime);
            dog.setFrameTime(slowerFrameTime); //DOG WUZ HERE
            ivan.setFrameTime(slowerFrameTime); //IVAn

            if (currentDir == left)
            {
                currentAnimation = &standingLeft;
                currentDogAnimation = &dog_standingLeft;// DAWG HERE TOO DOG
                currentIvanAnimation = &ivan_standingLeft;// IVAN

            }
            if (currentDir == right)
            {
                currentAnimation = &standingRight;
                currentDogAnimation = &dog_standingRight; // DAWG HERE TOO 2 DOG
                currentIvanAnimation = &ivan_standingRight;// IVAN

            }
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
        {
            animatedSprite.setFrameTime(sf::seconds(.15));
            dog.setFrameTime(sf::seconds(.15));//DOOOOOOOGGGGEEE DOG
            ivan.setFrameTime(sf::seconds(.15));//IVAN

        }
        else
        {
            animatedSprite.setFrameTime(sf::seconds(.07));
            dog.setFrameTime(sf::seconds(.07));//DOOOOOOOGGGGEEEDOOOOOOOGGGGEEEDOOOOOOOGGGGEEE DOG
            ivan.setFrameTime(sf::seconds(.07));//IVAN
        }
        
        
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
               //EDGE EFFECT HERE
        if (back2.getPosition().x <= back2.getSize().x*-8)
        {
            back2.setPosition(back2.getSize().x*8, 0);
        }
        if (back2a.getPosition().x <= back2a.getSize().x*-8)
        {
            back2a.setPosition(back2a.getSize().x*8, 0);
        }
 
        if (back2b.getPosition().x <= back2b.getSize().x*-8)
        {
            back2b.setPosition(back2b.getSize().x*8, 0);
        }
        
        if (back3.getPosition().x <= back3.getSize().x*-8)
        {
            back3.setPosition(back3.getSize().x*8, 0);
        }
        if (back3a.getPosition().x <= back3a.getSize().x*-8)
        {
            back3a.setPosition(back3a.getSize().x*8, 0);
        }
        
        if (back3b.getPosition().x <= back3b.getSize().x*-8)
        {
            back3b.setPosition(back3b.getSize().x*8, 0);
        }

        
        if (back4.getPosition().x <= back4.getSize().x*-8)
        {
            back4.setPosition(back4.getSize().x*8, 0);
        }
        if (back4a.getPosition().x <= back4a.getSize().x*-8)
        {
            back4a.setPosition(back4a.getSize().x*8, 0);
        }
        
        if (back4b.getPosition().x <= back4b.getSize().x*-8)
        {
            back4b.setPosition(back4b.getSize().x*8, 0);
        }

        
        if (back5.getPosition().x <= back5.getSize().x*-8)
        {
            back5.setPosition(back5.getSize().x*8, 0);
        }
        if (back5a.getPosition().x <= back5a.getSize().x*-8)
        {
            back5a.setPosition(back5a.getSize().x*8, 0);
        }
        
        if (back5b.getPosition().x <= back5b.getSize().x*-8)
        {
            back5b.setPosition(back5b.getSize().x*8, 0);
        }

        
        if (back6.getPosition().x <= back6.getSize().x*-8)
        {
            back6.setPosition(back6.getSize().x*8, 0);
        }
        if (back6a.getPosition().x <= back6a.getSize().x*-8)
        {
            back6a.setPosition(back6a.getSize().x*8, 0);
        }
        
        if (back6b.getPosition().x <= back6b.getSize().x*-8)
        {
            back6b.setPosition(back6b.getSize().x*8, 0);
        }
        
        
            //vines
        if (vines.getPosition().x <= vines.getSize().x*-8)
        {
            vines.setPosition(vines.getSize().x*8, 0);
        }
        if (vinesa.getPosition().x <= vinesa.getSize().x*-8)
        {
            vinesa.setPosition(vinesa.getSize().x*8, 0);
        }
        
        if (vinesb.getPosition().x <= vinesb.getSize().x*-8)
        {
            vinesb.setPosition(vinesb.getSize().x*8, 0);
        }

            //moonlight
        if (moonlight.getPosition().x <= moonlight.getSize().x*-8)
        {
            moonlight.setPosition(moonlight.getSize().x*8, 0);
        }
        if (moonlighta.getPosition().x <= moonlighta.getSize().x*-8)
        {
            moonlighta.setPosition(moonlighta.getSize().x*8, 0);
        }
        
        if (moonlightb.getPosition().x <= moonlightb.getSize().x*-8)
        {
            moonlightb.setPosition(moonlightb.getSize().x*8, 0);
        }

        
    }
        
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        
        //positive
        /*
        if (back2.getPosition().x >= back2.getSize().x*8)
        {
            back2.setPosition(back2.getSize().x*-8, 0);
        }
        if (back2a.getPosition().x >= back2a.getSize().x*8)
        {
            back2a.setPosition(back2a.getSize().x*-8, 0);
        }
        
        if (back2b.getPosition().x >= back2b.getSize().x*8)
        {
            back2b.setPosition(back2b.getSize().x*-8, 0);
        }
        
        if (back3.getPosition().x >= back3.getSize().x*8)
        {
            back3.setPosition(back3.getSize().x*-8, 0);
        }
        if (back3a.getPosition().x >= back3a.getSize().x*8)
        {
            back3a.setPosition(back3a.getSize().x*-8, 0);
        }
        
        if (back3b.getPosition().x >= back3b.getSize().x*8)
        {
            back3b.setPosition(back3b.getSize().x*-8, 0);
        }
        */
        
        if (back4.getPosition().x >= back4.getSize().x*8)
        {
            back4.setPosition(back4.getSize().x*-8, 0);
        }
        if (back4a.getPosition().x >= back4a.getSize().x*8)
        {
            back4a.setPosition(back4a.getSize().x*-8, 0);
        }
        
        if (back4b.getPosition().x >= back4b.getSize().x*8)
        {
            back4b.setPosition(back4b.getSize().x*-8, 0);
        }
        
        
        if (back5.getPosition().x >= back5.getSize().x*8)
        {
            back5.setPosition(back5.getSize().x*-8, 0);
        }
        if (back5a.getPosition().x >= back5a.getSize().x*8)
        {
            back5a.setPosition(back5a.getSize().x*-8, 0);
        }
        
        if (back5b.getPosition().x >= back5b.getSize().x*8)
        {
            back5b.setPosition(back5b.getSize().x*-8, 0);
        }
        
        
        if (back6.getPosition().x >= back6.getSize().x*8)
        {
            back6.setPosition(back6.getSize().x*-8, 0);
        }
        if (back6a.getPosition().x >= back6a.getSize().x*8)
        {
            back6a.setPosition(back6a.getSize().x*-8, 0);
        }
        
        if (back6b.getPosition().x >= back6b.getSize().x*8)
        {
            back6b.setPosition(back6b.getSize().x*-8, 0);
        }
            //vines
         if (vines.getPosition().x >= vines.getSize().x*8)
         {
         vines.setPosition(vines.getSize().x*-8, 0);
         }
         if (vinesa.getPosition().x >= vinesa.getSize().x*8)
         {
         vinesa.setPosition(vinesa.getSize().x*-8, 0);
         }
         
         if (vinesb.getPosition().x >= vinesb.getSize().x*8)
         {
         vinesb.setPosition(vinesb.getSize().x*-8, 0);
         }
        
        //moonlight
        if (moonlight.getPosition().x >= moonlight.getSize().x*8)
        {
            moonlight.setPosition(moonlight.getSize().x*-8, 0);
        }
        if (moonlighta.getPosition().x >= moonlighta.getSize().x*8)
        {
            moonlighta.setPosition(moonlighta.getSize().x*-8, 0);
        }
        
        if (moonlightb.getPosition().x >= moonlightb.getSize().x*8)
        {
            moonlightb.setPosition(moonlightb.getSize().x*-8, 0);
        }

        
    }
        
        
        float timeMov = 1;
        timeMov = frameTime.asSeconds();
        
        ivan.play(*currentIvanAnimation);
        dog.play(*currentDogAnimation);//dog animation here
        animatedSprite.play(*currentAnimation);
        flickerSprite.play(flicker);
        animatedSprite.move(0,0);
        back2.move(-16 * timeMov, 0);
        back3.move(-32 * timeMov, 0);
        back4.move(.3*movement.x * timeMov, 0);
        moonlight.move(.45*movement.x * timeMov, 0);
        back5.move(.55*movement.x * timeMov, 0);
        vines.move(.65*movement.x * timeMov, 0);
        back6.move(.8*movement.x * timeMov, 0);
        back2a.move(-16 * timeMov, 0);
        back3a.move(-32 * timeMov, 0);
        back4a.move(.3*movement.x * timeMov, 0);
        moonlighta.move(.45*movement.x * timeMov, 0);
        back5a.move(.55*movement.x * timeMov, 0);
        vinesa.move(.65*movement.x * timeMov, 0);
        back6a.move(.8*movement.x * timeMov, 0);
        back2b.move(-16 * timeMov, 0);
        back3b.move(-32 * timeMov, 0);
        back4b.move(.3*movement.x * timeMov, 0);
        moonlightb.move(.45*movement.x * timeMov, 0);
        back5b.move(.55*movement.x * timeMov, 0);
        vinesb.move(.65*movement.x * timeMov, 0);
        back6b.move(.8*movement.x * timeMov, 0);
        
        noKeyWasPressed = true;

        
        // update AnimatedSprite
        dog.update(frameTime);//dog
        ivan.update(frameTime);//ivan
        animatedSprite.update(frameTime);
        flickerSprite.update(sf::seconds(.03f));
        
        
        // draw
        window.clear();
        window.draw(back1);
        window.draw(back2);
        window.draw(back2a);
        window.draw(back2b);
        window.draw(back3);
        window.draw(back3a);
        window.draw(back3b);
        window.draw(back4);
        window.draw(back4a);
        window.draw(back4b);
        window.draw(back5);
        window.draw(back5a);
        window.draw(back5b);
        window.draw(back6);
        window.draw(back6a);
        window.draw(back6b);
        window.draw(animatedSprite);
        window.draw(dog);//dog
        window.draw(ivan);//ivan
        window.draw(titlescreen);
        
        int flickerCounter = 0;
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::F))
        {
            if(flickerCounter==0) flickerCounter++;
            else flickerCounter--;
        }
        if(flickerCounter!=0)
        window.draw(flickerSprite);
        
        window.display();
    }
    
    return 0;
}



