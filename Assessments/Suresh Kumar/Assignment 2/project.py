import random,winsound,time

while True:
    t=random.randint(1,100)
    if t>60:
       print("Temperature is high.....",t)
       winsound.PlaySound("beep", winsound.SND_FILENAME)
    else:
        print("Temperature is normal.....",t)


    time.sleep(1)
