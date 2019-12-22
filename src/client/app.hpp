#ifndef _APP_H
#define _APP_H

#include <wx/wx.h>

#include "clconnection.hpp"

class CLApp : public wxApp
{
public:
	static CLConnectionRef getConnection();
	
	bool OnInit() override;
private:
	static CLConnectionPtr connection;
};

#endif // _APP_H
