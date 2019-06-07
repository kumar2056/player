#
d=int(input())
a=input()
b=a[::-1]
for i in b:
  if((i!='a')and(i!='e')and(i!='i')and(i!='o')and(i!='u')and(i!='A')and(i!='E')and(i!='I')and(i!='O')and(i!='U')):
    print(i,end="")
