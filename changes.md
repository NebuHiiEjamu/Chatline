Version 1.2
===========
What's New
----------
- Chatline has been entirely rewritten from scratch in C++, offering more speed and stability
- Cross-platform support (Windows, Linux...)
- Mac: Intel and 64-bit support
- 64-bit file transfer support (theoretically)
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
- PICT support dropped, as it was outdated, proprietary and Mac-centric. PNG is now preferred
- Server banners discontinued, as I feel they're pointless. Server ignores 1.0/1.1 client requests for banners.
- Client: help button on toolbar dropped, as it could easily have been a text file instead
- Client: user profile now automatically use host device info, instead of being filled in by user
- Prereleases: version info now uses Git revision instead of old Mac OS X-style build numbers
