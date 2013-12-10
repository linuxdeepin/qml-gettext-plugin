TEMPLATE = lib
CONFIC += plugin
QT += qml dbus

TARGET = dlocale
DESTDIR = Deepin/Locale

QMAKE_CXX = clang++

OBJECTS_DIRS = tmp
MOC_DIR = tmp

HEADERS += plugin.h deepinlocale.h
