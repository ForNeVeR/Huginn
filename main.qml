import QtQuick 2.3
import QtQuick.Controls 1.2
import QtQuick.Layouts 1.1
import Huginn 1.0

ApplicationWindow {
    MainWindowModel {
        id: model
    }

    visible: true
    width: 640
    height: 480
    title: model.text

    menuBar: MenuBar {
        Menu {
            title: qsTr("File")
            MenuItem {
                text: qsTr("&Open")
                onTriggered: console.log("Open action triggered");
            }
            MenuItem {
                text: qsTr("Exit")
                onTriggered: Qt.quit();
            }
        }
    }

    RowLayout {
        anchors.fill: parent

        ListView {
            Layout.preferredWidth: 250
            Layout.fillHeight: true
        }

        TextArea {
            Layout.fillWidth: true
            Layout.fillHeight: true
        }
    }
}
