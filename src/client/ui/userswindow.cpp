#include "userswindow.hpp"
#include "../id.hpp"

wxBEGIN_EVENT_TABLE(UsersWindow, wxFrame)
wxEND_EVENT_TABLE()

UsersWindow::UsersWindow(): wxFrame(nullptr, wxID_ANY, wxT("Users"))
{
	userList = new wxListView(this, idUserList, wxDefaultPosition, wxDefaultSize,
		wxLC_REPORT | wxLC_SMALL_ICON | wxLC_ALIGN_LEFT | wxLC_NO_HEADER | wxLC_SINGLE_SEL);
	userList->InsertColumn(0, wxEmptyString);

	wxToolBar *toolbar = CreateToolBar();
	toolbar->AddTool(idMessage, wxEmptyString, chatbuttonBmp);
	toolbar->AddTool(idPrivateChat, wxEmptyString, peopleBmp);
	toolbar->AddTool(idInfo, wxEmptyString, infoBmp);
	toolbar->AddTool(idProfile, wxEmptyString, cicn204Bmp);
	toolbar->AddStretchableSpace();
	toolbar->AddTool(idKick, wxEmptyString, antiBmp);

	wxBoxSizer *sizer = new wxBoxSizer(wxVERTICAL);
	sider->Add(userList, 0, wxEXPAND);

	SetSizerAndFit(sizer);
	SetSizeHints(this);
}
