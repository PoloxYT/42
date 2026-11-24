def secure_archive(f: str, p: str, c: str = "") -> tuple[bool, str]:
    try:
        if (p == 'r'):
            with open(f, p) as file_opened:
                content = file_opened.read()
                return (True, content)
        elif (p == 'w'):
            with open(f, p) as file_opened:
                file_opened.write(c)
                return (True, 'Content successfully written to file')
        return (False, "Bad Action Letter")
    except FileExistsError as e:
        strerror = ""
        strerror = f"{e}"
        return (False, strerror)
    except FileNotFoundError as e:
        strerror = ""
        strerror = f"{e}"
        return (False, strerror)
    except PermissionError as e:
        strerror = ""
        strerror = f"{e}"
        return (False, strerror)


print("=== Cyber Archives Security ===")
print("")
print("Using 'secure_archive' to read from a nonexistent file:")
print(secure_archive('/not/existing/file', 'r'))
print("")
print("Using 'secure_archive' to read from an inaccessible file:")
print(secure_archive('password.txt', 'r'))
print("")
print("Using 'secure_archive' to read from a regular file:")
content = secure_archive('ancient_fragment.txt', 'r')
print(content)
print("")
print("Using 'secure_archive' to write previous content to a new file:")
print(secure_archive('test.txt', 'w', content[1]))
