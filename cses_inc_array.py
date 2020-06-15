n = int(input())
l = list(map(int, input().split()))

c = 0
for i in range(len(l)-1):
	if l[i+1] < l[i]:
		c += l[i] - l[i+1]
		l[i+1] = l[i]
		
print(c)
