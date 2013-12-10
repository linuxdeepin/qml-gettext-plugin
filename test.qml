import Deepin.Locale 1.0
import QtQuick 2.0
import QtQuick.Controls 1.0

Item {
    DLocale {
        id:t
        domain:"DDE"
        localeALL: "zh_CN.UTF-8"
    }
    function dsTr(s) { return t.dsTr(s) }

    Text {
        id: x
        text: dsTr("guest")
    }
    SubItem { anchors.top: x.bottom}
}
