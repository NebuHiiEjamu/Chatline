#ifndef _TOOLBAR_H
#define _TOOLBAR_H

#include <wx/wx.h>

#include "bitmaps.hpp"

class CLToolbar : public wxFrame
{
public:
	enum
	{
		idConnectButton = 1,
		idFilesButton,
		idUsersButton,
		idChatButton,
		idBroadcastButton,
		idNewsButton,
		idServerInfoButton,
		idTransfersButton,
		idProfileButton,
		idTrackerButton,
		idBookmarksButton,
		idPrefsButton,
		idHelpButton,
		idQuitButton
	};

	CLToolbar();
	~CLToolbar();
private:
	wxBitmapButton *connectButton;
	wxBitmapButton *filesButton;
	wxBitmapButton *usersButton;
	wxBitmapButton *chatButton;
	wxBitmapButton *broadcastButton;
	wxBitmapButton *newsButton;
	wxBitmapButton *serverInfoButton;
	wxBitmapButton *transfersButton;
	wxBitmapButton *profileButton;
	wxBitmapButton *trackerButton;
	wxBitmapButton *bookmarksButton;
	wxBitmapButton *prefsButton;
	wxBitmapButton *helpButton;
	wxBitmapButton *quitButton;

	wxDECLARE_EVENT_TABLE();
};

#endif // _TOOLBAR_H
