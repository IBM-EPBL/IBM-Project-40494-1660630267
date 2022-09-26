import random,time,winsound


while True:
    Temperature=random.randint(1,100)
    if Temperature > 60:
        print("Alert Temperature is High...!",Temperature)
        winsound.PlaySound("sound.wav",winsound.SND_FILENAME)
    else:
        print("Temperature is Normal...",Temperature)


    time.sleep(1)
