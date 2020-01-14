#include "serverinfowindow.hpp"

ServerInfoWindow::ServerInfoWindow(const wxString &name, const wxString &speed,
		const wxString &location, const wxString &description, const wxString &uptime,
		const wxString &version):
	wxFrame(nullptr, wxID_ANY, wxT("Server Information"), wxDefaultPosition, wxDefaultSize,
		wxCAPTION | wxCLOSE_BOX | wxFRAME_NO_TASKBAR)
{
	wxStaticText *nameLabel = new wxStaticText(this, wxID_ANY, wxT("Name:"), wxDefaultPosition,
		wxDefaultSize, wxALIGN_LEFT);
	wxStaticText *nameText = new wxStaticText(this, wxID_ANY, name, wxDefaultPosition,
		wxDefaultSize, wxALIGN_LEFT);
	wxStaticText *speedLabel = new wxStaticText(this, wxID_ANY, wxT("Speed:"), wxDefaultPosition,
		wxDefaultSize, wxALIGN_LEFT);
	wxStaticText *speedText = new wxStaticText(this, wxID_ANY, speed, wxDefaultPosition,
		wxDefaultSize, wxALIGN_LEFT);
	wxStaticText *locationLabel = new wxStaticText(this, wxID_ANY, wxT("Location:"),
		wxDefaultPosition, wxDefaultSize, wxALIGN_LEFT);
	wxStaticText *locationText = new wxStaticText(this, wxID_ANY, location, wxDefaultPosition,
		wxDefaultSize, wxALIGN_LEFT);
	wxStaticText *descriptionLabel = new wxStaticText(this, wxID_ANY, wxT("Description:"),
		wxDefaultPosition, wxDefaultSize, wxALIGN_LEFT);
	wxStaticText *descriptionText = new wxStaticText(this, wxID_ANY, description, wxDefaultPosition,
		wxDefaultSize, wxALIGN_LEFT);
	wxStaticText *uptimeLabel = new wxStaticText(this, wxID_ANY, wxT("Server Uptime:"),
		wxDefaultPosition, wxDefaultSize, wxALIGN_LEFT);
	wxStaticText *uptimeText = new wxStaticText(this, wxID_ANY, uptime, wxDefaultPosition,
		wxDefaultSize, wxALIGN_LEFT);
	wxStaticText *versionLabel = new wxStaticText(this, wxID_ANY, wxT("Server Version:"),
		wxDefaultPosition, wxDefaultSize, wxALIGN_LEFT);
	wxStaticText *versionText = new wxStaticText(this, wxID_ANY, version, wxDefaultPosition,
		wxDefaultSize, wxALIGN_LEFT);
	
	wxFlexGridSizer *sizer = new wxFlexGridSizer(6, 2, 0, 0);
	sizer->Add(nameLabel);
	sizer->Add(nameText, 1);
	sizer->Add(speedLabel);
	sizer->Add(speedText, 1);
	sizer->Add(locationLabel);
	sizer->Add(locationText, 1);
	sizer->Add(descriptionLabel);
	sizer->Add(descriptionText, 1);
	sizer->Add(uptimeLabel);
	sizer->Add(uptimeText, 1);
	sizer->Add(versionLabel);
	sizer->Add(versionText, 1);
	
	SetSizerAndFit(sizer);
	SetSizeHints(this);
}
