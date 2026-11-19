class GardenError(Exception):
    def __init__(self) -> None:
        self.m = "Caught PlantError: The tomato plant is wilting!"
        self.m += "\nCaught WaterError: "
        self.m += "Not enough water in the tank!"

    def __str__(self):
        return self.m


class PlantError(GardenError):
    def __init__(self, message: str) -> None:
        if message == 0:
            self.message = "Unknown plant error"
        else:
            self.message = message

    def __str__(self):
        return self.message


class WaterError(GardenError):
    def __init__(self, message: str) -> None:
        if message == 0:
            self.message = "Unknown water error"
        else:
            self.message = message

    def __str__(self):
        return self.message


def water_plant(plant_name: str) -> None:
    if (str.capitalize(plant_name) == plant_name):
        print(plant_name, "[OK]")
    else:
        error = "Caught PlantError: Invalid plant name to water: '"
        raise (PlantError(error + plant_name + "'"))


def test_watering_system() -> None:
    print("=== Garden Watering System ===")
    print("Testing valid plants...")
    try:
        print("Opening watering system")
        water_plant("Tomato")
        water_plant("Lettuce")
        water_plant("Carrots")
        print("Closing watering system")
        print("Testing invalid plants...")
        print("Opening watering system")
        water_plant("Tomato")
        water_plant("lettuce")
        print("Closing watering system")
    except PlantError as e:
        print(e)
        print(".. ending tests and returning to main")
        return
    finally:
        print("Closing watering system")
        print("")
        print("Cleanup always happens, even with errors!")


if __name__ == "__main__":
    test_watering_system()
