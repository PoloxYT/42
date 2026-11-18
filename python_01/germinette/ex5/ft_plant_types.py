class Plant:
    def __init__(self, name: str, height: float, age: int) -> None:
        self._name = name
        self._height = height
        self._ages = age

    def show(self) -> None:
        heightf = self._height
        print(self._name, ":", f"{heightf:.1f}", "cm,", self._ages, "days old")

    def grow(self) -> None:
        if self._name == "Rose":
            self._height += 0.8
        if self._name == "Cactus":
            self._height += 0.7
        if self._name == "Fern":
            self._height += 0.1
        if self._name == "Oak":
            self._height += 1.2
        if self._name == "Hay":
            self._height += 0.4
        else:
            self._height += 0.3

    def age(self) -> None:
        self._ages += 1

    def set_height(self, value: int) -> None:
        if value > 0:
            self._height = value
            print("Height updated:", value, "cm")
        else:
            print(self._name, ": Error, height can't be negative")
            print("Height update rejected")

    def set_age(self, value: int) -> None:
        if value > 0:
            self._ages = value
            print("Age updated:", value, "days")
        else:
            print(self._name, ": Error, age can't be negative")
            print("Age update rejected")

    def get_height(self) -> float:
        return (self._height)

    def get_age(self) -> int:
        return (self._ages)

    @staticmethod
    def is_age_year(age: int) -> int:
        if (age > 365):
            return (1)
        else:
            return (0)

    def anonymous(self) -> None:
        self._name



def construction(name: str, height: float, age: int) -> Plant:
    plant = Plant(name, height, age)
    return (plant)