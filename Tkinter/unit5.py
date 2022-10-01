from tkinter import *
win = Tk()
win.title("Learning....")
win.configure(width=500, height=600)
scrW = win.winfo_screenwidth()
scrH = win.winfo_screenheight()
win.geometry("500x600+%d+%d" %(scrW/2-250,scrH/2-300))
win.configure(bg = "#333")
# win.configure(width=True, height=True)#False: Can not be changed size
win.mainloop()
