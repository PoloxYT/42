def input_temperature(temp_str: str) -> int:
    return (int(temp_str))


def test_temperature() -> None:
    error = "invalid literal for int() with base 10:"
    print("=== Garden Temperature ===")
    print("")
    print("Input data is '25'")
    try:
        print("Temperature is now", input_temperature('25'), "°C")
    except ValueError:
        print("Caught input_temperature error:", error, "'25'")
    print("")
    print("Input data is 'abc'")
    try:
        print("Temperature is now", input_temperature('abc'), "°C")
    except ValueError:
        print("Caught input_temperature error:", error, "'abc'")
    print("")
    print("All tests completed - program didn't crash!")


if __name__ == "__main__":
    test_temperature()
