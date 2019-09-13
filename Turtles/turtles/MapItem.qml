import QtQuick 2.0
import QtQuick.Window 2.0
import QtLocation 5.6
import QtPositioning 5.6
import QtQuick.Controls 2.4
import QtQuick.Window 2.3

ApplicationWindow {
    id: main
    width: 512
    height: 512
    visible: true

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
        }

    function addPin(lat, lon, color) {
        map.circle = Qt.createQmlObject('import QtLocation 5.3; MapCircle {}', main)
        map.circle.center = QtPositioning.coordinate(lat, lon)
        map.circle.radius = 1000.0
        map.circle.color = color
        map.circle.border.width = 1.5
        map.addMapItem(map.circle)
        map.update()
        }

    function setCenter(lat, lon) {
        map.center = QtPositioning.coordinate(lat, lon)
        map.update()
        }
    }
