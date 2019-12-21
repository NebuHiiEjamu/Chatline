#include "loginwindow.hpp"
#include "../id.hpp"

wxBEGIN_EVENT_TABLE(LoginWindow, wxFrame)
	EVT_BUTTON(idConnect, LoginWindow::onConnectButton)
wxEND_EVENT_TABLE()

LoginWindow::LoginWindow():
	wxFrame(nullptr, wxID_ANY, wxT("Login"), wxDefaultPosition, wxDefaultSize,
		wxCAPTION | wxCLOSE_BOX | wxSTAY_ON_TOP | wxFRAME_NO_TASKBAR)
{
}

LoginWindow::~LoginWindow()
{
}
