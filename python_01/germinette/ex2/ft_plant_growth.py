class Plant:
    def __init__(self, name: str, height: float, age: int) -> None:
        self.name = name
        self.height = height
        self.ages = age

    def show(self) -> None:
        heightf = self.height
        print(self.name, ":", f"{heightf:.1f}", "cm,", self.ages, "days old")

    def grow(self) -> None:
        if self.name == "Rose":
            self.height += 0.8
        if self.name == "Cactus":
            self.height += 0.7
        else:
            self.height += 0.3

    def age(self) -> None:
        self.ages += 1


def ft_plant_growth(plant1: Plant) -> None:
    startheight = plant1.height
    print("=== Garden Plant Growth ===")
    plant1.show()
    print("=== Day 1 ===")
    plant1.grow()
    plant1.age()
    plant1.show()
    print("=== Day 2 ===")
    plant1.grow()
    plant1.age()
    plant1.show()
    print("=== Day 3 ===")
    plant1.grow()
    plant1.age()
    plant1.show()
    print("=== Day 4 ===")
    plant1.grow()
    plant1.age()
    plant1.show()
    print("=== Day 5 ===")
    plant1.grow()
    plant1.age()
    plant1.show()
    print("=== Day 6 ===")
    plant1.grow()
    plant1.age()
    plant1.show()
    print("=== Day 7 ===")
    plant1.grow()
    plant1.age()
    plant1.show()
    print("Growth this week:", f"{plant1.height - startheight:.1f}", "cm")


if __name__ == "__main__":
    plant1 = Plant("Rose", 25.0, 30)
    plant2 = Plant("Cactus", 25.0, 30)
    ft_plant_growth(plant2)
