#include "loginwindow.hpp"

wxBEGIN_EVENT_TABLE(LoginWindow, wxFrame)
	EVT_BUTTON(wxID_OK, LoginWindow::onConnectButton)
wxEND_EVENT_TABLE()

LoginWindow::LoginWindow():
	wxFrame(nullptr, wxID_ANY, wxT("Login"), wxDefaultPosition, wxDefaultSize,
		wxCAPTION | wxCLOSE_BOX | wxSTAY_ON_TOP | wxFRAME_NO_TASKBAR)
{
	wxButton *connectButton = new wxButton(this, wxID_OK, wxT("Connect"));
	wxStaticText *addressText = new wxStaticText(this, wxID_ANY, wxT("Address:"), wxDefaultPosition,
		wxDefaultSize, wxALIGN_LEFT);
	wxStaticText *loginText = new wxStaticText(this, wxID_ANY, wxT("Login:"), wxDefaultPosition,
		wxDefaultSize, wxALIGN_LEFT);
	wxStaticText *passwordText = new wxStaticText(this, wxID_ANY, wxT("Password:"), wxDefaultPosition,
		wxDefaultSize, wxALIGN_LEFT);
	addressField = new wxTextCtrl(this, wxID_ANY);
	loginField = new wxTextCtrl(this, wxID_ANY);
	passwordField = new wxTextCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition,
		wxDefaultSize, wxTE_PASSWORD | wxTE_LEFT);
	
	wxFlexGridSizer *formSizer = new wxFlexGridSizer(3, 2, 0, 0);
	formSizer->Add(addressText);
	formSizer->Add(addressField, 1);
	formSizer->Add(loginText);
	formSizer->Add(loginField, 1);
	formSizer->Add(passwordText);
	formSizer->Add(passwordField, 1);

	wxBoxSizer *rootSizer = new wxBoxSizer(wxVERTICAL);
	rootSizer->Add(formSizer);
	rootSizer->Add(connectButton, wxBOTTOM | wxRIGHT);
	
	connectButton->SetDefault();
	SetSizerAndFit(rootSizer);
	SetSizeHints(this);
}
