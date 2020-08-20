day = int(input("Minute before due: "))
temp = float(input("Temperature: "))
weather = input("Is it raining (y/n)? ")

day = day / 1440
day = int("%.0f" % day)

if day < 2 :
	print(day, "days before due.")
	print("I will do the assignment.")
elif day > 5 :
	print(day, "days before due.")
	print("I will not do the assignment.")
elif day >= 2 and day < 5 :
	if (temp > 40) or (temp < 25 and weather == "y") :
		print(day, "days before due.")
		print("I will not do the assignment.")
	else :
		print(day, "days before due.")
		print("I will do the assignment.")