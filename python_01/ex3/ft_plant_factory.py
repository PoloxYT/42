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
        elif self.name == "Cactus":
            self.height += 0.7
        elif self.name == "Fern":
            self.height += 0.1
        elif self.name == "Oak":
            self.height += 1.2
        elif self.name == "Hay":
            self.height += 0.4
        else:
            self.height += 0.3

    def age(self) -> None:
        self.ages += 1


def ft_plant_factory() -> None:
    print("=== Plant Factory Output ===")
    plant1 = Plant("Rose", 25.0, 30)
    plant2 = Plant("Cactus", 21.7, 12)
    plant3 = Plant("Fern", 12.3, 140)
    plant4 = Plant("Oak", 37.1, 71)
    plant5 = Plant("Hay", 3.1, 2)
    print("Created:")
    plant1.show()
    print("Created:")
    plant2.show()
    print("Created:")
    plant3.show()
    print("Created:")
    plant4.show()
    print("Created:")
    plant5.show()


if __name__ == "__main__":
    ft_plant_factory()
