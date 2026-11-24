import math


def get_player_pos() -> list:
    player_pos_str = [""] * 3
    player_pos = [0.0] * 3
    isgood = 0
    j = 0
    k = 0
    pos = ""
    while isgood != 1:
        pos = input("Enter new coordinates as floats in format 'x,y,z': ")
        for i in pos:
            if i == ',' or i == '0' or i == '9':
                k += 1
        if k == 0:
            print("Invalid syntax")
            k = 0
        else:
            k = 0
            for i in pos:
                if i != ',':
                    player_pos_str[j] += i
                    k += 1
                    isgood = 1
                elif i == ',':
                    j += 1
                    k = 0
            k = 0
            for i in player_pos_str:
                try:
                    player_pos[k] = float(i)
                    k += 1
                except ValueError as e:
                    print("Error on parameter", f"'{i}':", e)
                    isgood = 0
                    player_pos_str = [""] * 3
                    j = 0
                    break
    return(player_pos)


def ft_coordinate_system() -> None:
    print("=== Game Coordinate System ===")
    print("")
    print("Get a first set of coordinates")
    first = get_player_pos()
    print("Got a first tuple:", f"({first[0]}, {first[1]}, {first[2]})")
    print("It includes:", f"X={first[0]}, Y={first[1]}, Z={first[2]}")
    distance = ((0 - first[0]) * (0 - first[0]))
    distance += ((0 - first[1]) * (0 - first[1]))
    distance += ((0 - first[2]) * (0 - first[2]))
    distance = math.sqrt(distance)
    print("Distance to center:", round(distance, 4))
    print("")
    print("Get a second set of coordinates")
    second = get_player_pos()
    distance = ((second[0] - first[0]) * (second[0] - first[0]))
    distance += ((second[1] - first[1]) * (second[1] - first[1]))
    distance += ((second[2] - first[2]) * (second[2] - first[2]))
    distance = math.sqrt(distance)
    print("Distance between the 2 sets of coordinates:", round(distance, 4))


ft_coordinate_system()
