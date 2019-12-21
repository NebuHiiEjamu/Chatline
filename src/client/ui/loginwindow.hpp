#ifndef _LOGINWINDOW_H
#define _LOGINWINDOW_H

#include <wx/wx.h>

class LoginWindow : public wxFrame
{
public:
	LoginWindow();
	~LoginWindow();
private:
	void onConnectButton(wxCommandEvent&);
	
	wxDECLARE_EVENT_TABLE();
};

#endif // _LOGINWINDOW_H
