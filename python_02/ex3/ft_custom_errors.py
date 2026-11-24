class GardenError(Exception):
    def __init__(self, message: str = "Unknown plant error") -> None:
        super().__init__(message)


class PlantError(GardenError):
    def __init__(self, message: str = "Unknown plant error") -> None:
        super().__init__(message)


class WaterError(GardenError):
    def __init__(self, message: str = "Unknown plant error") -> None:
        super().__init__(message)


def ft_custom_errors() -> None:
    print("=== Custom Garden Errors Demo ===")
    print("")
    print("Testing PlantError...")
    age = 3712
    if age < 365:
        print("Plant gave fruits")
        return
    try:
        raise PlantError("The tomato plant is wilting!")
    except PlantError as e:
        print("Caught PlantError:", e)
    print("")
    print("Testing WaterError...")
    water = 0
    if water > 0:
        print("I put water on plant")
        return
    try:
        raise WaterError("Not enough water in the tank!")
    except WaterError as e:
        print("Caught WaterError:", e)
    print("")
    print("Testing catching all garden errors...")
    try:
        water = 0
        age = 3712
        if water > 0 and age < 365:
            ("I put water on tomato")
        else:
            raise (PlantError("The tomato plant is wilting!"))
    except GardenError as e:
        print("Caught GardenError:", e)
    print("")
    print("All custom error types work correctly!")


if __name__ == "__main__":
    ft_custom_errors()
