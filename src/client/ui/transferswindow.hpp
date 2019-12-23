#ifndef _TRANSFERSWINDOW_H
#define _TRANSFERSWINDOW_H

#include <wx/wx.h>

#include "bitmaps.hpp"

class TransfersWindow : public wxFrame
{
public:
	TransfersWindow();

	void onStopButton(wxCommandEvent&);
	void onGoButton(wxCommandEvent&);
	void onFolderButton(wxCommandEvent&);
private:
	wxScrolledWindow *scrollPane;
	
	wxDECLARE_EVENT_TABLE();
};

#endif // _TRANSFERSWINDOW_H
