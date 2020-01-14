#ifndef _USERINFOWINDOW_H
#define _USERINFOWINDOW_H

#include <wx/wx.h>

#include "bitmaps.hpp"

class UserInfoWindow : public wxFrame
{
public:
	UserInfoWindow(const wxString&);

	void onRefreshButton(wxCommandEvent&);
	void onKickButton(wxCommandEvent&);
	void onMsgButton(wxCommandEvent&);
	void onPChatButton(wxCommandEvent&);
	void onProfileButton(wxCommandEvent&);
private:
	wxDECLARE_EVENT_TABLE();
};

#endif // _USERINFOWINDOW_H
