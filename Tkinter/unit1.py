from concurrent.futures import thread
import threading
from tkinter import *
win = Tk()
win.title = "Tkinter"
win.geometry("300x200")
label_1 = Label(win, text = "Hello")
label_1.pack(side = LEFT)
label_2 = Label(win, text = "World")
label_2.pack(side = RIGHT)

def set_text():
    while(True):
        content = input()
        label_1.config(text = content)
setTextThr = threading.Thread(target = set_text)
setTextThr.start()
win.mainloop()