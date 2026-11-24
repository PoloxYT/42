import sys
import typing


io = typing.IO
try:
    file = sys.argv[1]
    print("=== Cyber Archives Recovery ===")
    print("Accessing file", f"'{file}'")
    try:
        f = open(file, "r")
        print("---")
        print("")
        print(f.read())
        print("")
        print("---")
        f.close()
        print("File", f"'{file}'", "closed.")
    except FileNotFoundError as e:
        print("Error opening file", f"'{file}':", e)
    except PermissionError as e:
        print("Error opening file", f"'{file}':", e)
except IndexError:
    print("Usage: ft_ancient_text.py <file>")
