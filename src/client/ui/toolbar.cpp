#include "toolbar.hpp"

wxBEGIN_EVENT_TABLE(CLToolbar, wxFrame)

wxEND_EVENT_TABLE()

CLToolbar::CLToolbar():
	wxFrame(nullptr, wxID_ANY, wxT("Chatline"), wxDefaultPosition, wxDefaultSize,
		wxCAPTION | wxCLOSE_BOX | wxSTAY_ON_TOP | wxFRAME_TOOL_WINDOW)
{
	connectButton = new wxBitmapButton(this, idConnectButton, connectBmp);
	filesButton = new wxBitmapButton(this, idFilesButton, fileBmp);
	usersButton = new wxBitmapButton(this, idUsersButton, usersbuttonBmp);
	chatButton = new wxBitmapButton(this, idConnectButton, chatbuttonBmp);
	broadcastButton = new wxBitmapButton(this, idBroadcastButton, broadcastbuttonBmp);
	newsButton = new wxBitmapButton(this, idNewsButton, newsBmp);
	serverInfoButton = new wxBitmapButton(this, idServerInfoButton, infoBmp);
	transfersButton = new wxBitmapButton(this, idTransfersButton, network224Bmp);
	profileButton = new wxBitmapButton(this, idProfileButton, glassesBmp);
	trackerButton = new wxBitmapButton(this, idTrackerButton, network132Bmp);
	bookmarksButton	= new wxBitmapButton(this, idBookmarksButton, cicn209Bmp);
	prefsButton = new wxBitmapButton(this, idPrefsButton, optionsBmp);
	helpButton = new wxBitmapButton(this, idHelpButton, cicn227Bmp);
	quitButton = new wxBitmapButton(this, idQuitButton, stopsmlBmp);

	wxBoxSizer *sizer = new wxBoxSizer(wxHORIZONTAL);
	wxSizerFlags sizerFlags;
	sizer->Add(connectButton, sizerFlags.Center());
	sizer->Add(filesButton, sizerFlags.Center());
	sizer->Add(usersButton, sizerFlags.Center());
	sizer->Add(chatButton, sizerFlags.Center());
	sizer->Add(broadcastButton, sizerFlags.Center());
	sizer->Add(newsButton, sizerFlags.Center());
	sizer->Add(serverInfoButton, sizerFlags.Center());
	sizer->Add(transfersButton, sizerFlags.Center());
	sizer->Add(profileButton, sizerFlags.Center());
	sizer->Add(trackerButton, sizerFlags.Center());
	sizer->Add(bookmarksButton, sizerFlags.Center());
	sizer->Add(prefsButton, sizerFlags.Center());
	sizer->Add(helpButton, sizerFlags.Center());
	sizer->Add(quitButton, sizerFlags.Center());
	
	CreateStatusBar();
	SetStatusText(wxT("Not connected"));
}

CLToolbar::~CLToolbar()
{
	delete connectButton;
	delete filesButton;
	delete usersButton;
	delete chatButton;
	delete broadcastButton;
	delete newsButton;
	delete serverInfoButton;
	delete transfersButton;
	delete profileButton;
	delete trackerButton;
	delete bookmarksButton;
	delete prefsButton;
	delete helpButton;
	delete quitButton;
}
