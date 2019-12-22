#include "chatwindow.hpp"
#include "../id.hpp"

wxBEGIN_EVENT_TABLE(ChatWindow, wxFrame)
	EVT_TEXT_ENTER(wxID_ADD, ChatWindow::onChatInput)
wxEND_EVENT_TABLE()

ChatWindow::ChatWindow(): wxFrame(nullptr, wxID_ANY, wxT("Public Chat"))
{
	chatHistoryBox = new wxTextCtrl(this, idChatHistory, wxEmptyString, wxDefaultPosition,
		wxDefaultSize, wxTE_MULTILINE | wxTE_READONLY | wxTE_RICH | wxTE_AUTO_URL | wxTE_BESTWRAP);
	wxTextCtrl *chatInputField = new wxTextCtrl(this, wxID_ADD, wxEmptyString, wxDefaultPosition,
		wxDefaultSize, wxTE_PROCESS_ENTER);
	
	wxToolBar *toolbar = CreateToolBar();
	toolbar->AddTool(wxID_SAVE, wxT("Save chat log"), cicn164Bmp);
	toolbar->AddTool(wxID_PREFERENCES, wxT("Preferences"), optionsBmp);
	toolbar->AddStretchableSpace();
	toolbar->AddTool(wxID_DELETE, wxT("Clear chat log"), trashBmp);

	wxBoxSizer *sizer = new wxBoxSizer(wxVERTICAL);
	sizer->Add(chatHistoryBox, 3);
	sizer->Add(chatInputField, 1);

	SetSizerAndFit(sizer);
	SetSizeHints(this);
}
