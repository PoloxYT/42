def input_temperature(temp_str: str) -> int:
    if int(temp_str) >= 0 and int(temp_str) <= 40:
        return (int(temp_str))
    else:
        raise (ValueError)


def test_temperature() -> None:
    error = "Caught input_temperature error:"
    print("=== Garden Temperature Checker ===")
    print("")
    print("Input data is '25'")
    try:
        print("Temperature is now", input_temperature('25'), "°C")
    except ValueError:
        print(error, "invalid literal for int() with base 10: '25'")
    print("")
    print("Input data is 'abc'")
    try:
        print("Temperature is now", input_temperature('abc'), "°C")
    except ValueError:
        print(error, "invalid literal for int() with base 10: 'abc'")
    print("")
    print("Input data is '100'")
    try:
        print("Temperature is now", input_temperature('100'), "°C")
    except ValueError:
        print(error, "100°C is too hot for plants (max 40°C)")
    print("")
    print("Input data is '-50'")
    try:
        print("Temperature is now", input_temperature('-50'), "°C")
    except ValueError:
        print(error, "-50°C is too cold for plants (min 0°C)")
    print("")
    print("All tests completed - program didn't crash!")


if __name__ == "__main__":
    test_temperature()
