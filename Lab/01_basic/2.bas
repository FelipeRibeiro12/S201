10 RANDOMIZE TIMER
20 num = INT(RND(1) * 10) + 1
30 PRINT "Aleatório: "; num
40 factorial = 1
50 FOR i = 1 TO num
60 factorial = factorial * i
70 NEXT i
80 PRINT "Fatorial de "; num; ": "; factorial
90 END