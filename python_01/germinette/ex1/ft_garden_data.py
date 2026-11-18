class Plant:
    def __init__(self, name: str, height: int, age: int) -> None:
        self.name = name
        self.height = height
        self.age = age

    def show(self) -> None:
        print(self.name, ":", self.height, "cm,", self.age, "days old")


def ft_garden_data(plant1: Plant, plant2: Plant, plant3: Plant) -> None:
    print("=== Garden Plant Registry ===")
    plant1.show()
    plant2.show()
    plant3.show()


if __name__ == "__main__":
    plant1 = Plant("Rose", 25, 30)
    plant2 = Plant("Sunflower", 80, 45)
    plant3 = Plant("Cactus", 15, 120)
    ft_garden_data(plant1, plant2, plant3)
