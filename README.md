# prime-numbers

Feladatunk, hogy megírjunk egy prímkereső algoritmust háromféleképpen:
  1. nyers backtracking
  2. backtracking + MVR + forward checking
  3. backtracking + MVR + AC-3

Adott 3 természetes szám: egy S (összeg), P (prím), N
Feladat lényege, hogy találjunk N db. prímszámot, ami nagyobb mint P és összegük S

pl: S = 54, N = 2, P = 3
Eredmény:
Simple backtrack:
7 47
11 43
13 41
17 37
23 31
Time taken SIMPLE BACKTRACKING: 0.011
Number of calculations: 5762

Forward checking:
7 47
11 43
13 41
17 37
23 31
Time taken FORWARD CHECK BACKTRACKING: 0.011
Number of calculations: 5103