def parallelogram():
	n = int(input("Please input a number: "))
	symble = '+'
	blank = ' '

	for i in range(0,n):
		print (i*symble)

	for i in range(n):
		print (i)*blank,(n-i-1)*symble


parallelogram()