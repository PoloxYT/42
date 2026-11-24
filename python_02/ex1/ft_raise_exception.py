def input_temperature(temp_str: str) -> int:
    if int(temp_str) < 0:
        raise (ValueError(
            f"{temp_str}°C is too hot for plants (max 40°C)"
        ))
    elif int(temp_str) > 40:
        raise (ValueError(
            f"{temp_str}°C is too cold for plants (min 0°C)"
        ))
    else:
        return (int(temp_str))


def test_temperature() -> None:
    error = "Caught input_temperature error:"
    print("=== Garden Temperature Checker ===")
    print("")
    print("Input data is '25'")
    try:
        print("Temperature is now", input_temperature('25'), "°C")
    except ValueError as e:
        print(error, e)
    print("")
    print("Input data is 'abc'")
    try:
        print("Temperature is now", input_temperature('abc'), "°C")
    except ValueError as e:
        print(error, e)
    print("")
    print("Input data is '100'")
    try:
        print("Temperature is now", input_temperature('100'), "°C")
    except ValueError as e:
        print(error, e)
    print("")
    print("Input data is '-50'")
    try:
        print("Temperature is now", input_temperature('-50'), "°C")
    except ValueError as e:
        print(error, e)
    print("")
    print("All tests completed - program didn't crash!")


if __name__ == "__main__":
    test_temperature()
