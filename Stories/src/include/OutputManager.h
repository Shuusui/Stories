#pragma once

#pragma region Internal Includes

#pragma endregion

#pragma region External Includes 
#include <string>
#include <fstream>
#include <iostream>
#pragma endregion



namespace Stories
{
	namespace Mainframe
	{
		class OutputManager
		{
		public: 
			OutputManager();
			bool InitOutput(); 
			void CurrentOutput(); 
		};
	}
}
