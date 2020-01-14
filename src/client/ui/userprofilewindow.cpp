#include "userprofilewindow.hpp"

UserProfileWindow::UserProfileWindow(const wxString &info):
	wxFrame(nullptr, wxID_ANY, wxT("Users"))
{
	wxTextCtrl *profileBox = new wxTextCtrl(this, wxID_ANY, wxDefaultPosition,
		wxDefaultSize, wxTE_MULTILINE | wxTE_READONLY | wxTE_RICH | wxTE_AUTO_URL | wxTE_BESTWRAP);

	wxBoxSizer *sizer = new wxBoxSizer(wxVERTICAL);
	sider->Add(profileBox, 0, wxEXPAND);

	SetSizerAndFit(sizer);
	SetSizeHints(this);
}
