#include "bookmarkswindow.hpp"
#include "../id.hpp"

wxBEGIN_EVENT_TABLE(BookmarksWindow, wxFrame)
wxEND_EVENT_TABLE()

BookmarksWindow::BookmarksWindow(): wxFrame(nullptr, wxID_ANY, wxT("Bookmarks"))
{
	wxListView *bookmarkList = new wxListView(this, idServerList, wxDefaultPosition, wxDefaultSize,
		wxLC_REPORT | wxLC_SMALL_ICON | wxLC_ALIGN_LEFT | wxLC_SINGLE_SEL);
	bookmarkList->InsertColumn(0, wxT("Name"))
	bookmarkList->InsertColumn(1, wxT("Address"));

	wxToolBar *toolbar = CreateToolBar();
	toolbar->AddTool(idConnect, wxEmptyString, connectBmp);
	toolbar->AddTool(wxID_REFRESH, wxEmptyString, reloadBmp);
	toolbar->AddStretchableSpace();
	toolbar->AddTool(wxID_DELETE, wxEmptyString, trashBmp);

	wxBoxSizer *sizer = new wxBoxSizer(wxVERTICAL);
	sider->Add(bookmarkList, 0, wxEXPAND);

	SetSizerAndFit(sizer);
	SetSizeHints(this);
}
