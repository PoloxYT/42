def ft_seed_inventory(seed_type: str, num: int, unit: str) -> None:
    if (unit == "packets"):
        print(seed_type.capitalize(), "seeds:", num, "packets available")
    elif (unit == "grams"):
        print(seed_type.capitalize(), "seeds:", num, "grams total")
    elif (unit == "area"):
        print(seed_type.capitalize(), "seeds: covers", num, "square meters")
    else:
        print("Unknown unit type")
