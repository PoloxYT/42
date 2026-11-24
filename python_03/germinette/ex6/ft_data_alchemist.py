import random


print("=== Game Data Alchemist ===")
print("")
player_names = ['Alice', 'bob', 'Charlie', 'dylan']
player_names += ['Emma', 'Gregory', 'john', 'kevin', 'Liam']
print("Initial list of players:", player_names)
capitalized_names = [str.capitalize(player) for player in player_names]
print("New list with all names capitalized:", capitalized_names)
capitalized_only = [nme for nme in player_names if nme == str.capitalize(nme)]
print("New list of capitalized names only:", capitalized_only)
print("")
scores = {player: random.randint(0, 999) for player in capitalized_names}
print("Score dict:", scores)
average = round(int(sum(scores.values())) / len(scores), 2)
print("Score average is", average)
high_scores = {player: scr for player, scr in scores.items() if scr > average}
print("High scores:", high_scores)
