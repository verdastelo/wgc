import urllib.request

вебсайт = urllib.request.urlopen("https://rg.ru/2016/12/15/minoborony-boeviki-vybity-iz-vseh-kvartalov-aleppo.html")
текст = вебсайт.read().decode("utf")

print (текст)
