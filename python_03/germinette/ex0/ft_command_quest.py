import sys

len = len(sys.argv)
i = 1
print("=== Command Quest ===")
print("Program name:", sys.argv[0])
print("Arguments received:", len - 1)
if len == 1:
    print("No arguments provided!")
else:
    while (i < len):
        print("Argument", f"{i}:", sys.argv[i])
        i += 1
print("Total arguments:", i)
