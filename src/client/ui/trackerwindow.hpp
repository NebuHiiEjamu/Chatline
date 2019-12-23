#ifndef _TRACKERWINDOW_H
#define _TRACKERWINDOW_H

#include <wx/wx.h>

#include "bitmaps.hpp"

class TrackerWindow : public wxFrame
{
public:
	TrackerWindow();

	void onConnectButton(wxCommandEvent&);
	void onRefreshButton(wxCommandEvent&);
private:
	wxTextCtrl *addressField;
	wxListView *serverList;
	
	wxDECLARE_EVENT_TABLE();
};

#endif // _TRACKERWINDOW_H
