#pragma once
#include <SFML/Graphics.hpp>
#include "BaseState.h"
#include "EventManager.h"

class State_Game :public BaseState {
public:
	State_Game(StateManager* l_stateManager);
	~State_Game();

	//the state is created and pushed on the stack:
	void OnCreate();
	//the state is removed from the stack:
	void OnDestroy();

	//the state is moved to the top of the stack:
	void Activate();
	//the state is removed from the top of the stack
	void Deactivate();

	void Update(const sf::Time& l_time);
	void Draw();

	void MainMenu(EventDetails* l_details);
	void Pause(EventDetails* l_details);

private:
	sf::Texture m_texture;
	sf::Sprite m_sprite;
	sf::Vector2f m_increment;
};