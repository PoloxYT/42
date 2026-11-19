import sys

print("=== Player Score Analytics ===")
scores = [0] * (len(sys.argv) - 1)
i = 0
iarg = 1
errors = 0
digits = "0123456789"
length = len(sys.argv) - 1
while i < length:
    res = 0
    j = 0
    while j < len(sys.argv[iarg]):
        val = 0
        d = 0
        while d < 10:
            if digits[d] == sys.argv[iarg][j]:
                val = d
                break
            d += 1
        if d == 10:
            print("Invalid parameter:", f"'{sys.argv[iarg]}'")
            length -= 1
            errors += 1
            break
        else:
            res = res * 10 + val
            j += 1
    if d != 10:
        scores[i] = res
        i += 1
    iarg += 1
if scores[0] == 0:
    errorstr = "python3 ft_score_analytics.py <score1> <score2> ..."
    print("No scores provided. Usage:", errorstr)
else:
    if errors != 0:
        i = 0
        truescores = [0] * length
        while scores[i] != 0:
            truescores[i] = scores[i]
            i += 1
        print("Score processed:", truescores)
        print("Total players:", length)
        print("Total score:", sum(truescores))
        print("Average score:", sum(truescores) / length)
        print("High score:", max(truescores))
        print("Low score:", min(truescores))
        print("Score range:", max(truescores) - min(truescores))
    else:
        print("Score processed:", scores)
        print("Total players:", length)
        print("Total score:", sum(scores))
        print("Average score:", sum(scores) / length)
        print("High score:", max(scores))
        print("Low score:", min(scores))
        print("Score range:", max(scores) - min(scores))
