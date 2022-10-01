from  tkinter import *
win = Tk()
# Label(win, text="Paragraph 1", font="Times 20", bg="red").pack()
# Label(win, text="Paragraph 2", font="Times 25", bg="blue").pack()
# Label(win, text="Paragraph 3", font="Times 30", bg="brown").pack()
# Label(win, text="Paragraph 4", font="Times 35", bg="yellow").pack()
# Label(win, text="Paragraph 5", font="Times 40", bg="pink").pack()

Label(win, text="Paragraph 1", font="Times 20", bg="red").grid(row=0, column=0, sticky = E)
Label(win, text="Paragraph 2", font="Times 25", bg="blue").grid(row=1, column=0)
Label(win, text="Paragraph 3", font="Times 30", bg="brown").grid(row=0, column=1, sticky = W)
Label(win, text="Paragraph 4", font="Times 35", bg="yellow").grid(row=1, column=1)
Label(win, text="Paragraph 5", font="Times 40", bg="pink").grid(row=2, columnspan=2)

win.mainloop()