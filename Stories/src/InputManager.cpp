#include "include\InputManager.h"

using namespace Stories::Mainframe; 

InputManager::InputManager()
	:m_currentChoices(10)
{

}

bool InputManager::GetInput()
{
	char currentInput[127]; 
	std::cin >> currentInput; 
	unsigned short answerNumber = 0; 
	answerNumber = atoi(currentInput);
	if (answerNumber <= m_currentChoices && answerNumber != 0)
		return true;
	else
	{
		std::cout << "Bitte eine valide Antwort eintippen";
		return false;
	}
}