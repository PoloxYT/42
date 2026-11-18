class Plant:
    def __init__(self, name: str, height: float, age: int) -> None:
        self._name = name
        self._height = height
        self._ages = age
        self._s = self.Stats()

    def show(self) -> None:
        self._s._show += 1
        heightf = self._height
        print(self._name, ":", f"{heightf:.1f}", "cm,", self._ages, "days old")

    def grow(self) -> None:
        self._s._grow += 1
        if self._name == "Rose":
            self._height += 8.0
        elif self._name == "Cactus":
            self._height += 0.7
        elif self._name == "Fern":
            self._height += 0.1
        elif self._name == "Oak":
            self._height += 1.2
        elif self._name == "Hay":
            self._height += 0.4
        elif self._name == "Sunflower":
            self._height += 30.0
        else:
            self._height += 2.1

    def age(self) -> None:
        self._s._age += 1
        if self._name == "Sunflower":
            self._ages += 20
        else:
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
        return (cls("Unknown plant", 0.0, 0))

    class Stats:
        def __init__(self) -> None:
            self._grow = 0
            self._age = 0
            self._show = 0
            self._shade = 0


class Flower(Plant):
    def __init__(self, name: str, height: float, age: int, color: str) -> None:
        super().__init__(name, height, age)
        self._color = color
        self._bloom = 0

    def bloom(self) -> None:
        self._bloom = 1

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
        self._s._shade += 1
        heightf = round(self._height, 1)
        diamf = round(self._trunk_diameter, 1)
        n = self._name
        first_part = "Tree " + n + " now produces a shade of " + str(heightf)
        second_part = "cm long and " + str(diamf) + "cm wide."
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

    def bloom(self) -> None:
        super().bloom()
        self._seeds += 42

    def show(self) -> None:
        super().show()
        print(" Seeds:", round(self._seeds))


def ft_garden_analytics() -> None:
    print("=== Garden statistics ===")
    print("=== Check year-old")
    age = Plant("test", 0.0, 30)
    print("Is 30 days more than a year? ->", age.is_age_year(age._ages))
    age._ages = 400
    print("Is 400 days more than a year? ->", age.is_age_year(age._ages))
    print("")
    print("=== Flower")
    r = Flower("Rose", 15.0, 10, "red")
    r.show()
    print("[statistics for Rose]")
    print("Stats:", r._s._grow, "grow,", r._s._age, "age", r._s._show, "show")
    print("[asking the rose to grow and bloom]")
    r.grow()
    r.bloom()
    r.show()
    print("[statistics for Rose]")
    print("Stats:", r._s._grow, "grow,", r._s._age, "age", r._s._show, "show")
    print("")
    print("=== Tree")
    o = Tree("Oak", 200.0, 365, 5.0)
    o.show()
    print("[statistics for Oak]")
    print("Stats:", o._s._grow, "grow,", o._s._age, "age", o._s._show, "show")
    print(o._s._shade, "shade")
    print("[asking the oak to produce shade]")
    o.produce_shade()
    print("[statistics for Oak]")
    print("Stats:", o._s._grow, "grow,", o._s._age, "age", o._s._show, "show")
    print(o._s._shade, "shade")
    print("")
    print("=== Seed")
    s = Seed("Sunflower", 80.0, 45, "yellow")
    s.show()
    print("[make sunflower grow, age and bloom]")
    s.grow()
    s.age()
    s.bloom()
    s.show()
    print("[statistics for Sunflower]")
    print("Stats:", s._s._grow, "grow,", s._s._age, "age", s._s._show, "show")
    print("")
    print("=== Anonymous")
    u = Plant.anonymous()
    u.show()
    print("[statistics for Unknown plant]")
    print("Stats:", u._s._grow, "grow,", u._s._age, "age", u._s._show, "show")


if __name__ == "__main__":
    ft_garden_analytics()
