/*
* sfall
* Copyright (C) 2008-2016 The sfall team
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program. If not, see <http://www.gnu.org/licenses/>.
*/
#pragma once

#include <string>

#include "Functions.h"

//
// Various utility functions, based on FO engine functions
//

namespace fo
{

// returns weapon animation code
long AnimCodeByWeapon(GameObject* weapon);

inline void DisplayPrint(const std::string& str) {
	fo::func::display_print(str.c_str());
}

// returns message string from given file
const char* _stdcall GetMessageStr(const MessageList* fileAddr, int messageId);

// returns pointer to prototype by PID, or nullptr on failure
Proto* GetProto(int pid);

// wrapper for skill_get_tags with bounds checking
void SkillGetTags(int* result, long num);

// wrapper for skill_set_tags with bounds checking
void SkillSetTags(int* tags, long num);

}