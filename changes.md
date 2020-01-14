Version 1.2
===========
What's New
----------
- Chatline has been entirely rewritten from scratch in C++, offering more speed and stability
- Cross-platform support (Windows, Linux...)
- Mac: Intel and 64-bit support
- File support for greater than 4 GB, but is backwards-incompatible. As a result, 32-bit file sizes will be used as a fallback for 1.1 or older.
- GIF, IFF, JPEG, PCX, PNG, PNM, TGA, TIFF, and XPM support as a result of using wxWidgets in the client. This is likely to be expanded or revised if a Qt-based client is developed.
- Client: GUI now uses wxWidgets, ensuring a native look-and-feel
- Client - Windows and GTK: chat window now highlights URLs
- Client: new setup wizard
- Client: native file icon support in file lists
- Server/Tracker: storage now uses SQLite 3
- Server/Tracker: now CLI only
- Server: can now export version 1.1 legacy user data and news
- Tracker: can now export version 1.1 legacy passwords

Changes
-------
- PICT support dropped, as it is outdated, proprietary and Mac-centric.
- Server banners discontinued, as I feel they're pointless. Server ignores 1.0/1.1 client requests for banners.
- Client: help button on toolbar dropped, as the tips window could easily have been a text file instead
- Client: user profile now automatically use host device info, instead of being filled in by user
- Client: file browser now has a tree structure
- Prereleases: version info now uses Git revision instead of old Mac OS X-style build numbers
