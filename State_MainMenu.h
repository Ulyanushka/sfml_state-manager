#pragma once
#include <SFML/Graphics.hpp>
#include "BaseState.h"
#include "EventManager.h"

class State_MainMenu :public BaseState {
public:
	State_MainMenu(StateManager* l_stateManager);
	~State_MainMenu();

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

	void MouseClick(EventDetails* l_details);

private:
	sf::Text m_text;
	sf::Font m_font;

	sf::Vector2f m_buttonSize;
	sf::Vector2f m_buttonPos;
	unsigned int m_buttonPadding;

	sf::RectangleShape m_rects[3];
	sf::Text m_labels[3];
};