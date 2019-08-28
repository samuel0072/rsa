def mdc(a, b, i):
	global table
	if b == 0:
		return a
	table[i] = a//b
	return mdc(b, a%b, i+1)

def coefDet(u, v, table):
	for i in range(1, len(table)-1):
		a1 = [
				u[0] - (table[i]*v[0]),
			  	u[1] - (table[i]*v[1])
			 ]
		u = v
		v = a1
	return v

	



a = 233
b = 144
u = [1,0]
v = [0,1]
aux = [a, b]
table = {0:0}

mdc(a,b, 1)
print(table)
k = coefDet(u, v, table)
print(k)
