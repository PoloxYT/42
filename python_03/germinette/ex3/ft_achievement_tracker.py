import random


def gen_player_achievements() -> set:
    tab = ['Crafting Genius', 'Strategist', 'World Savior']
    tab1 = ['Speed Runner', 'Survivor', 'Master Explorer']
    tab2 = ['Treasure Hunter', 'Unstoppable', 'First Steps']
    tab3 = ['Collector Supreme', 'Untouchable', 'Sharp Mind']
    tab4 = ['Boss Slayer']
    tab += tab1
    tab += tab2
    tab += tab3
    tab += tab4
    player = set(random.sample(tab, k=(random.randint(1, 13))))
    return (player)


def ft_achievement_tracker() -> None:
    print("=== Achievement Tracker System ===")
    print("")
    alice = gen_player_achievements()
    print("Player Alice:", alice)
    bob = gen_player_achievements()
    print("Player Bob:", bob)
    charlie = gen_player_achievements()
    print("Player Charlie:", charlie)
    dylan = gen_player_achievements()
    print("Player Dylan:", dylan)
    print("")
    print("All distinct achievements:", alice.union(bob, charlie, dylan))
    print("")
    print("Common achievements:", alice.intersection(bob, charlie, dylan))
    print("")
    print("Only Alice has:", alice.difference(bob, charlie, dylan))
    print("Only Bob has:", bob.difference(alice, charlie, dylan))
    print("Only Charlie has:", charlie.difference(alice, bob, dylan))
    print("Only Dylan has:", dylan.difference(alice, bob, charlie))
    print("")
    print("Alice is missing:", bob.union(charlie, dylan).difference(alice))
    print("Bob is missing:", alice.union(charlie, dylan).difference(bob))
    print("Charlie is missing:", bob.union(alice, dylan).difference(charlie))
    print("Dylan is missing:", bob.union(alice, charlie).difference(dylan))


ft_achievement_tracker()
