n = int(input())
l = list(map(int, input().split()))

l.sort()
flag = 0
for i in range(len(l)):
	if l[i] != i+1:
		print(i+1)
		flag = 1
		break
		
if flag == 0:
	print(n)
