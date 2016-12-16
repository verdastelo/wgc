import urllib.request

page = urllib.request.urlopen("https://rg.ru/2016/12/15/minoborony-boeviki-vybity-iz-vseh-kvartalov-aleppo.html")
text = page.read().decode("utf")

print (text)
