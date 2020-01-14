#ifndef _IMWINDOW_H
#define _IMWINDOW_H

#include <wx/wx.h>

#include "bitmaps.hpp"

class IMWindow : public wxFrame
{
public:
	IMWindow();

	void onBoldButton(wxCommandEvent&);
	void onItalicButton(wxCommandEvent&);
	void onUnderlineButton(wxCommandEvent&);
	void onGetInfoButton(wxCommandEvent&);
	void onProfileButton(wxCommandEvent&);
	void onSendButton(wxCommandEvent&);
private:
	wxTextCtrl *imHistoryBox;
	
	wxDECLARE_EVENT_TABLE();
};

#endif // _IMWINDOW_H
