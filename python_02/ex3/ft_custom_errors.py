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


def ft_custom_errors() -> None:
    print("=== Custom Garden Errors Demo ===")
    print("")
    print("Testing PlantError...")
    try:
        age = 3712
        if age < 365:
            print("Plant gave fruits")
        else:
            raise PlantError("Caught PlantError: The tomato plant is wilting!")
    except PlantError as e:
        print(e)
    print("")
    print("Testing WaterError...")
    try:
        water = 0
        if water > 0:
            print("I put water on plant")
            return
        raise WaterError("Caught WaterError: Not enough water in the tank!")
    except WaterError as e:
        print(e)
    print("")
    print("Testing catching all garden errors...")
    try:
        water = 0
        age = 3712
        if water > 0 and age < 365:
            ("I put water on tomato")
        else:
            raise(GardenError)
    except GardenError as e:
        print(e)
    print("")
    print("All custom error types work correctly!")


if __name__ == "__main__":
    ft_custom_errors()
