
#pragma region Internal Includes
#include "include\RuntimeManager.h"
#pragma endregion 

#pragma region External Includes

#pragma endregion 

using namespace Stories::Mainframe;

int main()
{
	RuntimeManager* runtimeMng = new RuntimeManager(); 
	runtimeMng->RunApplication(); 
	return 1; 
}