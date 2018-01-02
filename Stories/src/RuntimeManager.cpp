#include "include\RuntimeManager.h"

using namespace Stories::Mainframe;


RuntimeManager::RuntimeManager()
	:m_appIsRunning(false)
	,m_currentTurn(0)
{
	m_outputMng = new OutputManager();
	m_inputMng = new InputManager();
}

void RuntimeManager::RunApplication()
{
	m_appIsRunning = true; 
	while(m_appIsRunning)
	{
		RuntimeLogic();
	}
}
void RuntimeManager::RuntimeLogic()
{
	if (m_currentTurn % 2 == 0)
	{
		if (m_currentTurn == 0)
			m_outputMng->InitOutput();
		else
			m_outputMng->CurrentOutput();

		m_currentTurn++;
	}
	else
	{
		if (m_inputMng->GetInput())
			m_currentTurn++;
		else
			RuntimeLogic();
	}
}



void RuntimeManager::ExitApplication()
{
	m_appIsRunning = false; 
}

RuntimeManager::~RuntimeManager()
{
	delete m_outputMng;
	delete m_inputMng;
}