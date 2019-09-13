import QtQuick 2.0
import QtQuick.Window 2.0
import QtLocation 5.6
import QtPositioning 5.6
import QtQuick.Controls 2.4
import QtQuick.Window 2.3

ApplicationWindow {
    id: main
    width: 800
    height: 800
    visible: true
    modality: Qt.WindowModal
    title: "Mapa de ubicaciones"

    Plugin {
        id: mapPlugin
        name: "osm"
        }

    Map {
        id: map
        anchors.fill: parent
        plugin: mapPlugin
        zoomLevel: 9
        property MapCircle circle

        MapPolyline {
            id: polyline
            line.width: 2
            line.color: 'black'
            path: []
            }
        }

    function addPin(lat, lon, color, radius) {
        map.circle = Qt.createQmlObject('import QtLocation 5.3; MapCircle {}', main)
        map.circle.center = QtPositioning.coordinate(lat, lon)
        map.circle.radius = radius
        map.circle.color = color
        map.circle.border.width = 1.5
        map.addMapItem(map.circle)
        map.update()
        }

    function addLine(lat1, lon1, lat2, lon2) {
        polyline.addCoordinate(QtPositioning.coordinate(lat1, lon1))
        polyline.addCoordinate(QtPositioning.coordinate(lat2, lon2))
        polyline.update()
        map.update()
        }

    function setCenter(lat, lon) {
        map.center = QtPositioning.coordinate(lat, lon)
        map.update()
        }

    function exit() {
        Qt.quit();
        }

    Column {
        id: buttonRow
        spacing: 2
        anchors.topMargin: 20

        RoundButton {
            id: plusButton
            text: '+'
            width: 35
            height: 35
            onClicked: {
                TextArea.readOnly = true
                }
            }

        RoundButton {
            id: subButton
            text: '-'
            width: 35
            height: 35
            }
        }
    }
