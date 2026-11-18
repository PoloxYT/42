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
        elif self._name == "Cactus":
            self._height += 0.7
        elif self._name == "Fern":
            self._height += 0.1
        elif self._name == "Oak":
            self._height += 1.2
        elif self._name == "Hay":
            self._height += 0.4
        else:
            self._height += 2.1

    def age(self) -> None:
        self._ages += 1

    def set_height(self, value: float) -> None:
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
    def is_age_year(age: int) -> bool:
        if (age > 365):
            return (True)
        else:
            return (False)

    @classmethod
    def anonymous(cls) -> "Plant":
        return (cls("", 0, 0))

    def construction(self, name: str, height: float, age: int) -> None:
        self._name = name
        self.set_height(height)
        self.set_age(age)


class Flower(Plant):
    def __init__(self, name: str, height: float, age: int, color: str) -> None:
        super().__init__(name, height, age)
        self._color = color
        self._bloom = 0

    def bloom(self) -> None:
        self._bloom = 1
        self.show()

    def show(self) -> None:
        super().show()
        print(" Color:", self._color)
        if self._bloom == 0:
            print("", self._name, "has not bloomed yet")
        elif self._bloom == 1:
            print("", self._name, "is blooming beautifully!")


class Tree(Plant):
    def __init__(self, nam: str, hght: float, age: int, t_diam: float) -> None:
        super().__init__(nam, hght, age)
        self._trunk_diameter = t_diam

    def produce_shade(self) -> None:
        heightf = round(self._height, 1)
        diamf = round(self._trunk_diameter, 1)
        n = self._name
        first_part = "Tree" + n + "now produces a shade of" + str(heightf)
        second_part = "cm long and" + str(diamf) + "cm wide."
        print(first_part, second_part)

    def show(self) -> None:
        super().show()
        diamf = self._trunk_diameter
        print(" Trunk diameter:", f"{diamf:.1f}", "cm")


class Vegetable(Plant):
    def __init__(self, nam: str, hght: float, age: int, season: str) -> None:
        super().__init__(nam, hght, age)
        self._harvest_season = season
        self._nutritional_value = 0

    def show(self) -> None:
        super().show()
        print(" Harvest season:", self._harvest_season)
        print(" Nutritional value:", self._nutritional_value)

    def grow(self) -> None:
        super().grow()
        self._nutritional_value += 1
        self._ages += 1

    def age(self) -> None:
        super().grow()
        self._nutritional_value += 1


class Seed(Flower):
    def __init__(self, nam: str, hght: float, age: int, sson: str) -> None:
        super().__init__(nam, hght, age, sson)
        self._seeds = 0

    def bloom(self):
        super().bloom()
        self._seeds += 42

    def show(self):
        super().show()
        print(" Seeds:", self._seeds)

