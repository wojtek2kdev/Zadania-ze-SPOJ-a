def generate_gray_code(x):
  liczby = '01'
  for i in range(1, x+1):
      y = 0
      l = len(liczby)
      while y < l:
        liczby += liczby[l-(y+i):l-y]
        y+=i
      l = len(liczby)
      for n in range(0, l//i):
        e = (l//i)/2
        f = '1' if n+1 > e else '0'
        liczby = liczby[:n*(i+1)] + f + liczby[n*(i+1):]
  for a in range(0, len(liczby)):
    if not a%(x+1):
      print(liczby[a:a+(x+1)])
 
t = input()
t = int(t)
 
while t:
  n = input()
  generate_gray_code(int(n)-1)
  t-=1
