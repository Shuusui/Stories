#pragma once

#pragma region Internal Includes
#include "OutputManager.h"
#include "InputManager.h"
#pragma endregion

#pragma region External Includes 


#pragma endregion



namespace Stories
{
	namespace Mainframe
	{
		class RuntimeManager
		{
		public:
			RuntimeManager();
			void RunApplication();
			void ExitApplication();
			~RuntimeManager();
		private:
			//private methods
			void RuntimeLogic();

			//private member variables
			bool m_appIsRunning;
			unsigned int m_currentTurn;
			OutputManager* m_outputMng;
			InputManager* m_inputMng;
		};
	}
}