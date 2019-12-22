Version 1.2
===========
What's New
----------
- Chatline has been entirely rewritten from scratch in C++, offering more speed and stability
- Client GUI now uses wxWidgets
- Cross-platform support (Windows, Linux...)
- Mac Intel/64-bit support
- 64-bit file transfer support (theoretically)
- Server and tracker storage now uses SQLite 3
- Server and tracker are now CLI
- New setup wizard for client
- Native file icon support in file lists
- Client can now export version 1.1 legacy bookmarks
- Server can now export version 1.1 legacy user data and news
- Tracker can noe export version 1.1 legacy passwords
Changes
-------
- PICT support dropped, as it was outdated, proprietary and Mac-centric
- Help button on client toolbar dropped, as it could easily have been a text file instead
- Server banners discontinued, as I feel they're pointless. Server ignores 1.0/1.1 client requests for banners.
- User profiles now automatically use host device info, instead of being filled in by user
- Version info now uses Git revision instead of old Mac OS X-style build numbers (for prereleases)
