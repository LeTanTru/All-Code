from tkinter import *
win = Tk()
def up():
    print("Up")
    if(up_btn['bg'] == "purple"):
        up_btn["bg"] = "violet"
    else: 
        up_btn["bg"] = "purple"
    
def left():
    print("Left")
    if(left_btn['bg'] == "yellow"):
        left_btn["bg"] = "pink"
    else: 
        left_btn["bg"] = "yellow"
    
def right():
    print("Right")
    if(right_btn['bg'] == "brown"):
        right_btn["bg"] = "grey"
    else: 
        right_btn["bg"] = "brown"
    
def down():
    print("Down")
    if(down_btn['bg'] == "green"):
        down_btn["bg"] = "blue"
    else: 
        down_btn["bg"] = "green"

frame_1 = Frame(win)
frame_1.pack()

frame_2 = Frame(win)
frame_2.pack()

frame_3 = Frame(win)
frame_3.pack()

up_btn = Button(frame_1, text = "Up", bg = "purple", command = up)
up_btn.pack()

left_btn = Button(frame_2, text = "Left", bg = "yellow", command = left)
left_btn.pack(side = LEFT)

right_btn = Button(frame_2, text = "Right", bg = "brown", command = right)
right_btn.pack(side = RIGHT)

down_btn = Button(frame_3, text = "Down", bg = "green", command = down)
down_btn.pack()

win.mainloop()