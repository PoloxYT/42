def ft_count_harvest_recursive(days=0):
    if (days == 0):
        days = input("Days until harvest: ")
        if (int(days) == 0):
            print("Harvest time!")
            return
    if int(days) == 1:
        print("Day 1")
        print("Harvest time!")
        return
    else:
        print("Day", days)
    return (ft_count_harvest_recursive(int(days) - 1))
