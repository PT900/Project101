import pyautogui as pag
import random
import time

while True:
    x = random.randint(600, 700)
    y = random.randint(200, 600)
    pag.moveTo(x, y, 1)
    print(f"Move to ({x}, {y})")
    time.sleep(2)
