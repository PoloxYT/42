import sys
import typing


io = typing.IO
try:
    file = sys.argv[1]
    print("=== Cyber Archives Recovery & Preservation ===")
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
        print("")
        f = open(file, "r")
        filetext = f.read()
        f.close()
        newtext = ""
        for c in filetext:
            if c == '\n':
                newtext += '#\n'
            else:
                newtext += c
        newtext += '#'
        print("Transform data:")
        print("---")
        print("")
        print(newtext)
        print("")
        print("---")
        new_file = input("Enter new file name (or empy): ")
        if new_file == "":
            print("Not saving data")
        else:
            print("Saving data to", f"'{new_file}'")
            new = open(new_file, "w")
            new.write(newtext)
            new.close()
            print("Data saved in file", f"'{new_file}'.")
    except FileNotFoundError as e:
        print("Error opening file", f"'{file}':", e)
    except PermissionError as e:
        print("Error opening file", f"'{file}':", e)
except IndexError:
    print("Usage: ft_ancient_text.py <file>")
