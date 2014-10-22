import QtQuick 2.3
import QtQuick.Window 2.2
import MyTest 1.0

Window {
    visible: true
    width: 360
    height: 360

    TestObject {
        Component.onCompleted: {
            setVariant([])
            setVariant([1])
            setVariant({})
            setVariant({"test": 1})
            setVariant(1)
            setVariant(1.2)
            setVariant("")
        }
    }
}
