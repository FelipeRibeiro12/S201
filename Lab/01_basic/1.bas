10 PRINT "Digite o valor A: "
20 INPUT a
30 PRINT "Digite o valor B: "
40 INPUT b
50 PRINT "Digite o valor C : "
60 INPUT c
70 d = b^2 - 4*a*c
80 IF d < 0 THEN
90 PRINT "A equação nao tem solucoes reais"
100 ELSE
110 x1 = (-b + SQR(d)) / (2*a)
120 x2 = (-b - SQR(d)) / (2*a)
130 PRINT "x1 = ", x1, " e x2 = ", x2
140 END IF
150 END