#ifndef _BOOKMARKSWINDOW_H
#define _BOOKMARKSWINDOW_H

#include <wx/wx.h>

#include "bitmaps.hpp"

class BookmarksWindow : public wxFrame
{
public:
	BookmarksWindow();

	void onConnectButton(wxCommandEvent&);
	void onRefreshButton(wxCommandEvent&);
	void onTrashButton(wxCommandEvent&);
private:
	wxDECLARE_EVENT_TABLE();
};

#endif // _BOOKMARKSWINDOW_H
