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
    valueerror = "invalid literal for int() with base 10: 'abc'"
    filenotfounderror = "such file or directory: '/non/existent/file'"
    typeerror = "can only concatenate str (not \"int\") to str"
    print("=== Garden Error Types Demo ===")
    i = 0
    while (i <= 4):
        try:
            print("Testing operation", i, "...")
            garden_operations(i)
            print("Operation completed successfully")
            i += 1
        except ValueError:
            print("Caught ValueError:", valueerror)
            i += 1
        except ZeroDivisionError:
            print("Caught ZeroDivisionError: division by zero")
            i += 1
        except FileNotFoundError:
            print("Caught FileNotFoundError: [Errno 2] No", filenotfounderror)
            i += 1
        except TypeError:
            print("Caught TypeError:", typeerror)
            i += 1
    print("")
    print("All error types tested successfully!")


if __name__ == "__main__":
    test_error_types()
