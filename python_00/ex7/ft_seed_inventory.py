def ft_seed_inventory(seed_type: str, quantity: int, unit: str) -> None:
    num = quantity
    if (unit == "packets"):
        print(seed_type.capitalize(), "seeds:", num, "packets available")
    elif (unit == "grams"):
        print(seed_type.capitalize(), "seeds:", num, "grams total")
    elif (unit == "area"):
        print(seed_type.capitalize(), "seeds: covers", num, "square meters")
    else:
        print("Unknown unit type")
