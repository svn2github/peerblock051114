/*
	Copyright (C) 2009 PeerBlock, LLC
	PeerBlock modifications copyright (C) 2009-2010 PeerBlock, LLC

	This software is provided 'as-is', without any express or implied
	warranty.  In no event will the authors be held liable for any damages
	arising from the use of this software.

	Permission is granted to anyone to use this software for any purpose,
	including commercial applications, and to alter it and redistribute it
	freely, subject to the following restrictions:

	1. The origin of this software must not be misrepresented; you must not
		claim that you wrote the original software. If you use this software
		in a product, an acknowledgment in the product documentation would be
		appreciated but is not required.
	2. Altered source versions must be plainly marked as such, and must not be
		misrepresented as being the original software.
	3. This notice may not be removed or altered from any source distribution.

*/

//================================================================================================
//  portprofile.h
//
//  This file defines the PortProfile window dialog-proc, used to handle the editing of port sets: 
//  the window that pops up after you click the "Ports" button on the Settings screen.
//================================================================================================


#pragma once

#include <windows.h>

INT_PTR CALLBACK PortProfile_DlgProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);