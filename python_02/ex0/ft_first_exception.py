def input_temperature(temp_str: str) -> int:
    return (int(temp_str))


def test_temperature() -> None:
    print("=== Garden Temperature ===")
    print("")
    print("Input data is '25'")
    try:
        print("Temperature is now", input_temperature('25'), "°C")
    except ValueError as e:
        print("Caught input_temperature error:", e)
    print("")
    print("Input data is 'abc'")
    try:
        print("Temperature is now", input_temperature('abc'), "°C")
    except ValueError as e:
        print("Caught input_temperature error:", e)
    print("")
    print("All tests completed - program didn't crash!")


if __name__ == "__main__":
    test_temperature()
