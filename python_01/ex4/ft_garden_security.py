class Plant:
    def __init__(self, name: str, height: float, age: int) -> None:
        self._name = name
        if height >= 0:
            self._height = height
        else:
            self._height = 0
            print(self._name, ": Error, height can't be negative")
        if age >= 0:
            self._ages = age
        else:
            self._ages = 0
            print(self._name, ": Error, age can't be negative")

    def show(self) -> None:
        heightf = self._height
        print(self._name, ":", f"{heightf:.1f}", "cm,", self._ages, "days old")

    def grow(self) -> None:
        if self._name == "Rose":
            self._height += 0.8
        elif self._name == "Cactus":
            self._height += 0.7
        elif self._name == "Fern":
            self._height += 0.1
        elif self._name == "Oak":
            self._height += 1.2
        elif self._name == "Hay":
            self._height += 0.4
        else:
            self._height += 0.3

    def age(self) -> None:
        self._ages += 1

    def set_height(self, value: float) -> None:
        if value >= 0:
            self._height = value
            print("Height updated:", value, "cm")
        else:
            print(self._name, ": Error, height can't be negative")
            print("Height update rejected")

    def set_age(self, value: int) -> None:
        if value >= 0:
            self._ages = value
            print("Age updated:", value, "days")
        else:
            print(self._name, ": Error, age can't be negative")
            print("Age update rejected")

    def get_height(self) -> float:
        return (self._height)

    def get_age(self) -> int:
        return (self._ages)


def ft_garden_security() -> None:
    print("=== Garden Security System ===")
    plant1 = Plant("Rose", 15.0, 10)
    print("Plant created:")
    plant1.show()
    print("\n")
    plant1.set_height(25)
    plant1.set_age(30)
    print("\n")
    plant1.set_height(-25)
    plant1.set_age(-30)
    print("\n")
    print("Current state:")
    plant1.show()


if __name__ == "__main__":
    ft_garden_security()
