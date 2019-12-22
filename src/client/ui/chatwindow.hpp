#ifndef _CHATWINDOW_H
#define _CHATWINDOW_H

#include <wx/wx.h>

#include "bitmaps.hpp"

class ChatWindow : public wxFrame
{
public:
	ChatWindow();

	void onSaveButton(wxCommandEvent&);
	void onPrefsButton(wxCommandEvent&);
	void onTrashButton(wxCommandEvent&);
	void onChatInput(wxCommandEvent&);
private:
	wxTextCtrl *chatHistoryBox;
	
	wxDECLARE_EVENT_TABLE();
};

#endif // _CHATWINDOW_H
