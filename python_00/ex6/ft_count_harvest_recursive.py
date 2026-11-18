def ft_count_harvest_recursive(i=0, days=0):
    if (days == 0):
        days = input("Days until harvest: ")
        i = 1
        if (int(days) == 0):
            print("Harvest time!")
            return
    if i == int(days):
        print("Day", i)
        print("Harvest time!")
        return
    else:
        print("Day", i)
    return (ft_count_harvest_recursive(i + 1, int(days)))
