from tkinter import *
def create_button():
    Button(win,
           text='This is button: %d'%create_button.count,
           bg='green',
           fg='white',
           font="Times 50 bold",
           command=create_button).grid(row=create_button.count, column=0)
    Label(win,
        text='This is label: %d'%create_button.count,
        bg='green',
        fg='black',
        font='Times 50 bold').grid(row=create_button.count, column=1)
    create_button.count=create_button.count+1
create_button.count=0
win = Tk()
create_button()
win.mainloop()