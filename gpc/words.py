words = ['anna', 'chetan', 'bou', 'bizzare',  'mike', 'boris', 'lomonsov', 'gagarin', 'maozedong', 'china', 'beijing', 'chandigarh', 'patiala', 'достоевский', 'кот', 'maam']
# words rearranged and stored in arranged
arranged = sorted (words)

# new_list has all the words starting in b
new_list = []
for слово in arranged:
  if слово[0] == 'm':
    new_list.append(слово)

# arranged_minus_b is without all the words starting in 'm'
second_list = []
for б in arranged:
  if б[0] == 'm':
    arranged.pop (arranged.index(б))
  else:
    second_list.append(б)

# combine both lists
новый_лист = sorted(new_list) + sorted(second_list)
for в in новый_лист:
  print (в)
