
Debian
====================
This directory contains files used to package lmcoind/lmcoin-qt
for Debian-based Linux systems. If you compile lmcoind/lmcoin-qt yourself, there are some useful files here.

## lmcoin: URI support ##


lmcoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install lmcoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your lmcoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/lmcoin128.png` to `/usr/share/pixmaps`

lmcoin-qt.protocol (KDE)

