TEMPLATE = lib
CONFIC += plugin
QT += qml dbus

TARGET = dlocale
DESTDIR = Deepin/Locale

QMAKE_CXX = clang++

OBJECTS_DIRS = tmp
MOC_DIR = tmp

HEADERS += plugin.h deepinlocale.h



target.path = $$[QT_INSTALL_QML]/Deepin/Locale

qmldir.path = $$[QT_INSTALL_QML]/Deepin/Locale
qmldir.files += Deepin/Locale/qmldir
INSTALLS += target qmldir
