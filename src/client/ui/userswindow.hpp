#ifndef _USERSWINDOW_H
#define _USERSWINDOW_H

#include <wx/wx.h>

#include "bitmaps.hpp"

class UsersWindow : public wxFrame
{
public:
	UsersWindow();

	void onInfoButton(wxCommandEvent&);
	void onKickButton(wxCommandEvent&);
	void onMsgButton(wxCommandEvent&);
	void onPChatButton(wxCommandEvent&);
	void onProfileButton(wxCommandEvent&);
private:
	wxListView *userList;
	
	wxDECLARE_EVENT_TABLE();
};

#endif // _USERSWINDOW_H
