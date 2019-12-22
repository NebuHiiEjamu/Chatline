#ifndef _LOGINWINDOW_H
#define _LOGINWINDOW_H

#include <wx/wx.h>

class LoginWindow : public wxFrame
{
public:
	LoginWindow();

	void onConnectButton(wxCommandEvent&);
private:
	wxTextCtrl *addressField;
	wxTextCtrl *loginField;
	wxTextCtrl *passwordField;
	
	wxDECLARE_EVENT_TABLE();
};

#endif // _LOGINWINDOW_H
