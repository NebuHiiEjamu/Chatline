#include "app.hpp"
#include "ui/toolbar.hpp"

wxIMPLEMENT_APP(CLApp)

CLConnectionRef CLApp::getConnection()
{
	return connection;
}

bool CLApp::OnInit()
{
	CLToolbar *toolbar = new CLToolbar();
	toolbar->Show(true);

	return true;
}
