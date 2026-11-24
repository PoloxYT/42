import random
import typing


def gen_event() -> typing.Generator:
    actions = ["climb", "run", "eat", "sleep", "grab", "move", "swim"]
    players = ["alice", "bob", "dylan", "charlie"]
    i = 0
    while i < 1000:
        player = players[random.randint(0, 3)]
        action = actions[random.randint(1, 7) - 1]
        tupleyield = (player, action)
        yield tupleyield
        i += 1


def consume_event(liste: list) -> typing.Generator:
    for i in liste:
        randnum = random.randint(0, len(liste) - 1)
        element = liste[randnum]
        liste.pop(randnum)
        yield element


print("=== Game Data Stream Processor ===")
i = 0
while i < 1000:
    event = next(gen_event())
    print("Event", f"{i}: Player", event[0], "did action", event[1])
    i += 1
liste = []
i = 0
while i < 10:
    liste += [next(gen_event())]
    i += 1
print("Built list of 10 events:", liste)
for i in range(0, 10):
    listelement = next(consume_event(liste))
    print("Got event from list:", listelement)
    print("Remains in list:", liste)
