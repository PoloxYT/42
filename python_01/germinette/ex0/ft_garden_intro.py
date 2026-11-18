class Plant:
    def __init__(self, name: str, height: int, age: int) -> None:
        self.name = name
        self.height = height
        self.age = age


def ft_garden_intro(plant: Plant) -> None:
    print("=== Welcome to My Garden ===")
    print("Plant:", plant.name)
    print("Height:", plant.height, "cm")
    print("Age:", plant.age, "days")
    print("=== End of Program ===")


if __name__ == "__main__":
    plant = Plant("Rose", 25, 30)
    ft_garden_intro(plant)
