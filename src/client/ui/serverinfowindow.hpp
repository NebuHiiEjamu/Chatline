#ifndef _SERVERINFOWINDOW_H
#define _SERVERINFOWINDOW_H

#include <wx/wx.h>

class ServerInfoWindow : public wxFrame
{
public:
	ServerInfoWindow(const wxString&, const wxString&, const wxString&, const wxString&,
		const wxString&, const wxString&);
};

#endif // _SERVERINFOWINDOW_H
