//
//  Player.cpp
//  TestAnimation
//
//  Created by Austin Pennington on 8/1/14.
//  Copyright (c) 2014 Austin Pennington. All rights reserved.
//

#include "Player.hpp"

void Player::initialize
{
    // load texture (spritesheet)
    sf::Texture texture;
    if (!texture.loadFromFile("/Users/Bloopton/Desktop/Programs/TestAnimation/TestAnimation/Spritesheet_Rainsford.png"))
    {
        std::cout << "Failed to load player spritesheet!" << std::endl;
        return 1;
        }
        
        // set up the animations for all four directions (set spritesheet and push frames)
        
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
        Animation disguise5;
        disguise5.setSpriteSheet(texture);
        disguise5.addFrame(sf::IntRect(0, 56, 8, 8));
        
        
        Animation* currentAnimation = &standingRight;
    
}
