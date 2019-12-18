#include "toolbar.hpp"

wxBEGIN_EVENT_TABLE(CLToolbar, wxFrame)

wxEND_EVENT_TABLE()

CLToolbar::CLToolbar():
	wxFrame(nullptr, wxID_ANY, wxT("Chatline"), wxDefaultPosition, wxDefaultSize,
		wxCAPTION | wxCLOSE_BOX | wxSTAY_ON_TOP | wxFRAME_TOOL_WINDOW)
{
	wxBoxSizer *sizer = new wxBoxSizer(wxHORIZONTAL);
	sizer->Add(new wxBitmapButton(this, 
	
	CreateStatusBar();
	SetStatusText(wxT("Not connected"));
}
