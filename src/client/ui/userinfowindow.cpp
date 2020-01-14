#include "userinfowindow.hpp"
#include "../id.hpp"

wxBEGIN_EVENT_TABLE(UserInfoWindow, wxFrame)
wxEND_EVENT_TABLE()

UserInfoWindow::UserInfoWindow(const wxString &info): wxFrame(nullptr, wxID_ANY, wxT("Users"))
{
	wxTextCtrl *infoBox = new wxTextCtrl(this, wxID_ANY, wxDefaultPosition,
		wxDefaultSize, wxTE_MULTILINE | wxTE_READONLY | wxTE_RICH | wxTE_AUTO_URL | wxTE_BESTWRAP);

	wxToolBar *toolbar = CreateToolBar();
	toolbar->AddTool(idMessage, wxEmptyString, chatbuttonBmp);
	toolbar->AddTool(idPrivateChat, wxEmptyString, peopleBmp);
	toolbar->AddTool(wxID_REFRESH, wxEmptyString, reloadBmp);
	toolbar->AddTool(idProfile, wxEmptyString, cicn204Bmp);
	toolbar->AddStretchableSpace();
	toolbar->AddTool(idKick, wxEmptyString, antiBmp);

	wxBoxSizer *sizer = new wxBoxSizer(wxVERTICAL);
	sider->Add(infoBox, 0, wxEXPAND);

	SetSizerAndFit(sizer);
	SetSizeHints(this);
}
