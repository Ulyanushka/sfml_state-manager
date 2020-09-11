#pragma once
#include <SFML/Graphics.hpp>
#include "BaseState.h"
#include "EventManager.h"

class State_Intro : public BaseState
{
public:
	State_Intro(StateManager* l_stateManager);
	~State_Intro();

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

	void Continue(EventDetails* l_details);

private:
	sf::Texture m_introTexture;
	sf::Sprite m_introSprite;
	sf::Font m_font;
	sf::Text m_text;
	float m_timePassed;
};