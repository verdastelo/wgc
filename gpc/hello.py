import sys 

def Hello (name):
  if name == 'Alice' or name == 'Leonardo':
    name = name + '???'
  else:
    print ('Vive le revolution!')

  name = name + '!!!!'
  print ('Hello,', name)

# Name of the command line argument.
def main():
  Hello (sys.argv[1])

# This is the standard boilerplate that calsl the main() function.
if __name__ == '__main__':
  main()
