def findMatches(string, sub):
  beg = 0
  while 1:
    x = string.find(sub, beg)
    if x is -1: break
    else: 
      yield x
      beg = x + 1

t = int(input())
while t:
  length = int(input())
  sub = input()
  string = input()
  results = [r for r in findMatches(string, sub)]
  for r in results:
    print(r)
  t-=1
    
