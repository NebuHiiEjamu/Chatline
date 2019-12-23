#include "bitmaps.hpp"
#include "toolbar.hpp"
#include "../id.hpp"

wxBEGIN_EVENT_TABLE(CLToolbar, wxFrame)
	EVT_BUTTON(idConnect, CLToolbar::onConnectButton)
	EVT_BUTTON(idFiles, CLToolbar::onFilesButton)
	EVT_BUTTON(idUsers, CLToolbar::onUsersButton)
	EVT_BUTTON(idChat, CLToolbar::onChatButton)
	EVT_BUTTON(idBroadcast, CLToolbar::onBroadcastButton)
	EVT_BUTTON(idNews, CLToolbar::onNewsButton)
	EVT_BUTTON(idInfo, CLToolbar::onServerInfoButton)
	EVT_BUTTON(idTransfers, CLToolbar::onTransfersButton)
	EVT_BUTTON(idProfile, CLToolbar::onProfileButton)
	EVT_BUTTON(idTracker, CLToolbar::onTrackerButton)
	EVT_BUTTON(idBookmarks, CLToolbar::onBookmarksButton)
	EVT_BUTTON(wxID_PREFERENCES, CLToolbar::onPrefsButton)
	EVT_BUTTON(wxID_EXIT, CLToolbar::onQuitButton)
wxEND_EVENT_TABLE()

CLToolbar::CLToolbar():
	wxFrame(nullptr, wxID_ANY, wxT("Chatline Toolbar"), wxDefaultPosition, wxDefaultSize,
		wxCAPTION | wxCLOSE_BOX | wxSTAY_ON_TOP | wxFRAME_TOOL_WINDOW)
{
	wxBitmapButton *connectButton = new wxBitmapButton(this, idConnect, connectBmp);
	filesButton = new wxBitmapButton(this, idFiles, fileBmp);
	wxBitmapButton *usersButton = new wxBitmapButton(this, idUsers, usersbuttonBmp);
	wxBitmapButton *chatButton = new wxBitmapButton(this, idChat, chatbuttonBmp);
	broadcastButton = new wxBitmapButton(this, idBroadcast, broadcastbuttonBmp);
	newsButton = new wxBitmapButton(this, idNews, newsBmp);
	serverInfoButton = new wxBitmapButton(this, idInfo, infoBmp);
	wxBitmapButton *transfersButton = new wxBitmapButton(this, idTransfers, network224Bmp);
	wxBitmapButton *profileButton = new wxBitmapButton(this, idProfile, glassesBmp);
	wxBitmapButton *trackerButton = new wxBitmapButton(this, idTracker, network132Bmp);
	wxBitmapButton *bookmarksButton = new wxBitmapButton(this, idBookmarks, cicn209Bmp);
	wxBitmapButton *prefsButton = new wxBitmapButton(this, wxID_PREFERENCES, optionsBmp);
	wxBitmapButton *quitButton = new wxBitmapButton(this, wxID_EXIT, stopsmlBmp);

	connectButton->SetToolTip(wxT("Connect to a Server"));
	filesButton->SetToolTip(wxT("Displays the File List"));
	usersButton->SetToolTip(wxT("Shows the Userlist"));
	chatButton->SetToolTip(wxT("Shows the Public Chat window"));
	broadcastButton->SetToolTip(wxT("Lets you Broadcast a message to all connected users"));
	newsButton->SetToolTip(wxT("Displays a list of all News categories"));
	serverInfoButton->SetToolTip(wxT("Shows the Server Info"));
	transfersButton->SetToolTip(wxT("Shows the Transfer Manager"));
	profileButton->SetToolTip(wxT("Opens the Profile editor"));
	trackerButton->SetToolTip(wxT("Opens the Tracker window"));
	bookmarksButton->SetToolTip(wxT("Opens the Bookmark Manager"));
	prefsButton->SetToolTip(wxT("Opens the Preferences Dialog"));
	quitButton->SetToolTip(wxT("Quit Chatline Client"));

	filesButton->Disable();
	broadcastButton->Disable();
	newsButton->Disable();
	serverInfoButton->Disable();

	wxBoxSizer *sizer = new wxBoxSizer(wxHORIZONTAL);
	sizer->Add(connectButton);
	sizer->Add(filesButton);
	sizer->Add(usersButton);
	sizer->Add(chatButton);
	sizer->Add(broadcastButton);
	sizer->Add(newsButton);
	sizer->Add(serverInfoButton);
	sizer->Add(transfersButton);
	sizer->Add(profileButton);
	sizer->Add(trackerButton);
	sizer->Add(bookmarksButton);
	sizer->Add(prefsButton);
	sizer->Add(quitButton);
	
	CreateStatusBar();
	SetStatusText(wxT("Not Connected"));
	SetSizerAndFit(sizer);
	SetSizeHints(this);
}
