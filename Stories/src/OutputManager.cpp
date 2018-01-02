#include "include\OutputManager.h"

using namespace Stories::Mainframe; 

OutputManager::OutputManager()
{

}

bool OutputManager::InitOutput()
{
	std::string currentSentence; 
	std::fstream file; 
	file.open("../StoryFiles/InitializationText(Ger).txt");
	if (file.is_open())
	{
		while (!file.eof())
		{
			std::getline(file, currentSentence);
			if (currentSentence.size() > 50)
				currentSentence.append("\n");

			std::cout << currentSentence;
		}
		file.close();
		return true;
	}
	else
		return false; 
}

void OutputManager::CurrentOutput()
{

}