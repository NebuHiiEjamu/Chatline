#ifndef _FILESWINDOW_H
#define _FILESWINDOW_H

#include <wx/wx.h>

#include "bitmaps.hpp"

class FilesWindow : public wxFrame
{
public:
	FilesWindow();

	void onBackButton(wxCommandEvent&);
	void onRefreshButton(wxCommandEvent&);
	void onDownloadButton(wxCommandEvent&);
	void onUploadButton(wxCommandEvent&);
	void onPreviewButton(wxCommandEvent&);
	void onFolderButton(wxCommandEvent&);
	void onInfoButton(wxCommandEvent&);
	void onTrashButton(wxCommandEvent&);
private:
	wxDataViewTreeCtrl *fileBrowser;
	
	wxDECLARE_EVENT_TABLE();
};

#endif // _FILESWINDOW_H
