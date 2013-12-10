import Deepin.Locale 1.0
import QtQuick 2.0
import QtQuick.Controls 1.0

Item {
    DLocale {
        id:t
        domain:"DDE" //mo file path set man 3 dgettext
        //localeALL: "zh_CN.UTF-8"
        localeMESSAGES: "zh_CN.UTF-8"
    }
    function dsTr(s) { return t.dsTr(s) }

    Column {
        width: 200
        height: 200
        Text {
            text: "Current locale TIME :" + t.localeTIME
        }
        Text {
            id: x
            text: dsTr("guest")
        }
        SubItem { } //test submodule use dsTr
    }
}
