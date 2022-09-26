import time,random,winsound


while True:
    tem = random.randint(1,100)
    if(tem>60):
        print("Temperature is high ...... ",tem)
        winsound.PlaySound("beep.wav", winsound.SND_FILENAME)
    else:
        print("Temperature is normal ...... ",tem)


    time.sleep(1)
