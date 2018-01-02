#pragma once

#pragma region Internal Includes

#pragma endregion

#pragma region External Includes 
#include <string>
#include <iostream>
#pragma endregion



namespace Stories
{
	namespace Mainframe
	{
		class InputManager
		{
		public:
			InputManager();
			bool GetInput();
		private: 
			unsigned int m_currentChoices; 
		};
	}
}