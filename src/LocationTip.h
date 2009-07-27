// Copyright (C) 2005-2009
// BaxZzZz (bauer_v AT mail DOT ru)
// Nex (nex AT otaku DOT ru)
// Shchannikov Dmitry (rrock DOT ru AT gmail DOT com)
// Valeriy Argunov (nporep AT mail DOT ru)
/*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
*/

#ifndef _QUEST_GENERATOR_LOCATION_TIP_H
	#define _QUEST_GENERATOR_LOCATION_TIP_H

#include <wx/wx.h>
#include "IControls.h"
#include "SyntaxTextBox.h"

#define TIP_SIZE_X 300
#define TIP_SIZE_Y 350

class LocationTip :	public wxFrame
{
	DECLARE_CLASS(LocationTip)
private:
	wxWindow *_mainFrame;
	IControls *_controls;
	wxString _locName;
	wxStaticText *_title;
	wxStaticText *_desc;
	wxStaticText *_code;
	SyntaxTextBox *_locDesc;
	SyntaxTextBox *_locCode;

	void LoadTip(const wxString &locationName);

public:
	LocationTip(wxWindow *parent, IControls *controls);

	void MoveTip(const wxPoint &pos);
	void HideTip();
	void SetLocName(const wxString &name);
	wxString GetLocName() const
	{
		return _locName;
	}
};

#endif
