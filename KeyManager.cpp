#include "KeyManager.h"
#include <vector>
#include <Windows.h>

char KeyManager::getPressedKey()
{
	std::vector<char> keys = { 'Z', 'S', 'Q', 'D' };

	for (auto it = keys.begin(); it < keys.end(); ++it)
	{
		if (GetKeyState(*it) & 0x8000)
			return *it;
	}

	return ' ';
}
