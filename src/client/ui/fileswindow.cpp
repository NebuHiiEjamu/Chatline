#include "fileswindow.hpp"
#include "../id.hpp"

wxBEGIN_EVENT_TABLE(FilesWindow, wxFrame)
wxEND_EVENT_TABLE()

FilesWindow::FilesWindow(): wxFrame(nullptr, wxID_ANY, wxT("Files"))
{
	wxDataViewTextRenderer *renderer = new wxDataViewTextRenderer();
	fileBrowser = new wxDataViewTreeCtrl(this, wxID_ANY, wxDefaultPosition, wxDefaultSize,
		wxDV_MULTIPLE | wxDV_HORIZ_RULES | wxDV_VERT_RULES);
	fileBrowser->AppendColumn(new wxDataViewColumn(wxT("Name"), renderer, wxDVC_DEFAULT_WIDTH,
		wxALIGN_LEFT, wxDATAVIEW_COL_RESIZABLE | wxDATAVIEW_COL_SORTABLE |
		wxDATAVIEW_COL_REORDERABLE));
	fileBrowser->AppendColumn(new wxDataViewColumn(wxT("Size"), renderer, wxDVC_DEFAULT_WIDTH,
		wxALIGN_LEFT, wxDATAVIEW_COL_RESIZABLE | wxDATAVIEW_COL_SORTABLE |
		wxDATAVIEW_COL_REORDERABLE));
	
	wxToolBar *toolbar = CreateToolBar();
	toolbar->AddTool(wxID_BACKWARD, wxEmptyString, cicn205Bmp);
	toolbar->AddTool(wxID_REFRESH, wxEmptyString, reloadBmp);
	toolbar->AddTool(idDownload, wxEmptyString, downloadBmp);
	toolbar->AddTool(idUpload, wxEmptyString, uploadBmp);
	toolbar->AddTool(wxID_PREVIEW, wxEmptyString, cicn219Bmp);
	toolbar->AddTool(wxID_NEW, wxEmptyString, cicn240Bmp);
	toolbar->AddTool(idInfo, wxEmptyString, infoBmp);
	toolbar->AddStretchableSpace();
	toolbar->AddTool(wxID_DELETE, wxEmptyString, trashBmp);

	wxBoxSizer *sizer = new wxBoxSizer(wxVERTICAL);
	sider->Add(fileBrowser, 0, wxEXPAND);

	SetSizerAndFit(sizer);
	SetSizeHints(this);
}
