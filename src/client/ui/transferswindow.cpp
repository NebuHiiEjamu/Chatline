#include "transferswindow.hpp"
#include "../id.hpp"

wxBEGIN_EVENT_TABLE(TransfersWindow, wxFrame)
wxEND_EVENT_TABLE()

TransfersWindow::TransfersWindow(): wxFrame(nullptr, wxID_ANY, wxT("Transfer Manager"))
{
	scrollPane = new wxScrolledWindow(this);
	
	wxToolBar *toolbar = CreateToolBar();
	toolbar->AddTool(wxID_ABORT, wxEmptyString, antiBmp);
	toolbar->AddTool(idGo, wxEmptyString, greenlightBmp);
	toolbar->AddTool(wxID_OPEN, wxEmptyString, cicn240Bmp);

	wxBoxSizer *sizer = new wxBoxSizer(wxVERTICAL);
	sider->Add(scrollPane, 0, wxEXPAND);

	SetSizerAndFit(sizer);
	SetSizeHints(this);
}
