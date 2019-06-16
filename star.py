# to ask user to input an int
# first line 1 *
# 2nd line 2 *s 

def arrayStar():
	print ('array way: [ ]')
	num = int(input("Please input a number: "))
	star=[]

	for i in range(1,num+1):
		star.append("*")
		print ("".join(star))

def pythonStar():

	print('python way')
	num = int(input("Please input a number: "))

	for i in range(num+1):
		print(i*'*')



arrayStar()
pythonStar()