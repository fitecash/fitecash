
Debian
====================
This directory contains files used to package fitecashd/fitecash-qt
for Debian-based Linux systems. If you compile fitecashd/fitecash-qt yourself, there are some useful files here.

## fitecash: URI support ##


fitecash-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install fitecash-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your fitecash-qt binary to `/usr/bin`
and the `../../share/pixmaps/fitecash128.png` to `/usr/share/pixmaps`

fitecash-qt.protocol (KDE)

