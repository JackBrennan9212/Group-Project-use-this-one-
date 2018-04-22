//
//  Asteroid.hpp
//  Game
//
//  Created by Oliver Hodge on 4/21/18.
//  Copyright © 2018 Oliver Hodge. All rights reserved.
//

#ifndef Asteroid_hpp
#define Asteroid_hpp

#include <stdio.h>
class Asteroid : public MovingGameEntity
{
public:
	Asteroid(SDL_Renderer* renderer);
	~Asteroid();

	bool checkCollisions(SDL_Rect* mainCollider, SDL_Rect* leftCollider, SDL_Rect* rightCollider);
	void Update();
	void Render();
	void getRandomSprite();

private:
	SDL_Texture* texture;
	SDL_Rect collisionRect;
	SDL_Rect Clip;
	std::string path;
};

#endif /* Asteroid_hpp */
