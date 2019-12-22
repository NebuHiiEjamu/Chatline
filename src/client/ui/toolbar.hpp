#ifndef _TOOLBAR_H
#define _TOOLBAR_H

#include <wx/wx.h>

class CLToolbar : public wxFrame
{
public:
	CLToolbar();

	void onConnectButton(wxCommandEvent&);
	void onFilesButton(wxCommandEvent&);
	void onUsersButton(wxCommandEvent&);
	void onChatButton(wxCommandEvent&);
	void onBroadcastButton(wxCommandEvent&);
	void onNewsButton(wxCommandEvent&);
	void onServerInfoButton(wxCommandEvent&);
	void onTransfersButton(wxCommandEvent&);
	void onProfileButton(wxCommandEvent&);
	void onTrackerButton(wxCommandEvent&);
	void onBookmarksButton(wxCommandEvent&);
	void onPrefsButton(wxCommandEvent&);
	void onQuitButton(wxCommandEvent&);
private:
	wxBitmapButton *filesButton;
	wxBitmapButton *broadcastButton;
	wxBitmapButton *newsButton;
	wxBitmapButton *serverInfoButton;

	wxDECLARE_EVENT_TABLE();
};

#endif // _TOOLBAR_H
