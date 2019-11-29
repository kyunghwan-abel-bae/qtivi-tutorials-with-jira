

import QtQuick 2.10
import Example.IVI.InstrumentCluster.simulation 1.0


QtObject {
    property var settings : IviSimulator.findData(IviSimulator.simulationData, "InstrumentCluster")
    property bool defaultInitialized: false
    property LoggingCategory qLcInstrumentCluster: LoggingCategory {
        name: "example.ivi.instrumentcluster.simulation.instrumentclusterbackend"
    }
    property var backend : InstrumentClusterBackend {

        function initialize() {
            console.log(qLcInstrumentCluster, "INITIALIZE")
            if (!defaultInitialized) {
                IviSimulator.initializeDefault(settings, backend)
                defaultInitialized = true
            }
            Base.initialize()
        }


        function setSpeed(speed) {
            if (IviSimulator.checkSettings(settings["speed"], speed)) {
                console.log(qLcInstrumentCluster, "SIMULATION speed changed to: " + speed);
                backend.speed = speed
            } else {
                console.error(qLcInstrumentCluster, "SIMULATION changing speed is not possible: provided: " + speed + " constraint: " + IviSimulator.constraint(settings["speed"]));
            }
        }

        function setRpm(rpm) {
            if (IviSimulator.checkSettings(settings["rpm"], rpm)) {
                console.log(qLcInstrumentCluster, "SIMULATION rpm changed to: " + rpm);
                backend.rpm = rpm
            } else {
                console.error(qLcInstrumentCluster, "SIMULATION changing rpm is not possible: provided: " + rpm + " constraint: " + IviSimulator.constraint(settings["rpm"]));
            }
        }

        function setFuel(fuel) {
            if (IviSimulator.checkSettings(settings["fuel"], fuel)) {
                console.log(qLcInstrumentCluster, "SIMULATION fuel changed to: " + fuel);
                backend.fuel = fuel
            } else {
                console.error(qLcInstrumentCluster, "SIMULATION changing fuel is not possible: provided: " + fuel + " constraint: " + IviSimulator.constraint(settings["fuel"]));
            }
        }

        function setTemperature(temperature) {
            if (IviSimulator.checkSettings(settings["temperature"], temperature)) {
                console.log(qLcInstrumentCluster, "SIMULATION temperature changed to: " + temperature);
                backend.temperature = temperature
            } else {
                console.error(qLcInstrumentCluster, "SIMULATION changing temperature is not possible: provided: " + temperature + " constraint: " + IviSimulator.constraint(settings["temperature"]));
            }
        }

        function setSystemType(systemType) {
            if (IviSimulator.checkSettings(settings["systemType"], systemType)) {
                console.log(qLcInstrumentCluster, "SIMULATION systemType changed to: " + systemType);
                backend.systemType = systemType
            } else {
                console.error(qLcInstrumentCluster, "SIMULATION changing systemType is not possible: provided: " + systemType + " constraint: " + IviSimulator.constraint(settings["systemType"]));
            }
        }

        function setCurrentWarning(currentWarning) {
            if (IviSimulator.checkSettings(settings["currentWarning"], currentWarning)) {
                console.log(qLcInstrumentCluster, "SIMULATION currentWarning changed to: " + currentWarning);
                backend.currentWarning = currentWarning
            } else {
                console.error(qLcInstrumentCluster, "SIMULATION changing currentWarning is not possible: provided: " + currentWarning + " constraint: " + IviSimulator.constraint(settings["currentWarning"]));
            }
        }
    }
}
