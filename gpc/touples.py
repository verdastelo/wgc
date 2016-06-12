a = [(1, 7), (1, 3), (3, 4, 5), (2, 2)]

b = []
for i in a:
  c = i[len(i)-1]
  b.append (c)

for j in b:
  print (j)

for t in sorted(a):
  print (t)
