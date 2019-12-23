#include "trackerwindow.hpp"
#include "../id.hpp"

wxBEGIN_EVENT_TABLE(TrackerWindow, wxFrame)
wxEND_EVENT_TABLE()

TrackerWindow::TrackerWindow(): wxFrame(nullptr, wxID_ANY, wxT("Tracker"))
{
	addressField = new wxTextCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition,
		wxDefaultSize, wxTE_PROCESS_ENTER | wxTE_LEFT);

	serverList = new wxListView(this, idUserList, wxDefaultPosition, wxDefaultSize,
		wxLC_REPORT | wxLC_SMALL_ICON | wxLC_ALIGN_LEFT | wxLC_SINGLE_SEL);
	userList->InsertColumn(0, wxT("Name"))
	userList->InsertColumn(1, wxT("Users"));
	userList->InsertColumn(2, wxT("Description"));

	wxToolBar *toolbar = CreateToolBar();
	toolbar->AddTool(idConnect, wxEmptyString, connectBmp);
	toolbar->AddControl(addressField, wxT("Address:"));
	toolbar->AddTool(wxID_REFRESH, wxEmptyString, reloadBmp);

	wxBoxSizer *sizer = new wxBoxSizer(wxVERTICAL);
	sider->Add(serverList, 0, wxEXPAND);

	SetSizerAndFit(sizer);
	SetSizeHints(this);
}
