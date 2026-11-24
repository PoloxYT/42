import sys
import typing


io = typing.IO
errprefix = "[STDERR] Error opening file"
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
        print("Enter new file name (or empy): ", end="")
        sys.stdout.flush()
        new_file = sys.stdin.readline()
        new_file = new_file[:-1]
        if new_file == "":
            print("Not saving data")
        else:
            print("Saving data to", f"'{new_file}'")
            try:
                new = open(new_file, "w")
                new.write(newtext)
                new.close()
                print("Data saved in file", f"'{new_file}'.")
            except PermissionError as e:
                print(errprefix, f"'{new_file}':", e, file=sys.stderr)
    except FileNotFoundError as e:
        print(errprefix, f"'{file}':", e, file=sys.stderr)
    except PermissionError as e:
        print(errprefix, f"'{file}':", e, file=sys.stderr)
except IndexError:
    print("Usage: ft_ancient_text.py <file>")
