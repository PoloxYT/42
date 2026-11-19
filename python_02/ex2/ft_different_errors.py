def garden_operations(operation_number: int) -> None:
    if operation_number == 0:
        int("abc")
    elif operation_number == 1:
        1 / 0
    elif operation_number == 2:
        open('/non/existent/file')
    elif operation_number == 3:
        str = "971"
        return (str + 9)
    else:
        return


def test_error_types() -> None:
    print("=== Garden Error Types Demo ===")
    i = 0
    while (i <= 4):
        try:
            print("Testing operation", i, "...")
            garden_operations(i)
            print("Operation completed successfully")
            i += 1
        except ValueError as e:
            print("Caught ValueError:", e)
            i += 1
        except ZeroDivisionError as e:
            print("Caught ZeroDivisionError:", e)
            i += 1
        except FileNotFoundError as e:
            print("Caught FileNotFoundError:", e)
            i += 1
        except TypeError as e:
            print("Caught TypeError:", e)
            i += 1
    print("")
    print("All error types tested successfully!")


if __name__ == "__main__":
    test_error_types()
