from tkinter import *
win = Tk()

lbl_3 = Label(win, text='Paragraph 2\nParagraph3', bg="#7fff00", fg="black", font="Times 30 bold italic",
              width=50, relief="ridge", borderwidth=22,
              height=5, anchor=CENTER, padx=30, pady=30,
              justify=LEFT)
# lbl_1 = Label(win, text='Paragraph 1')
# flat, raised, sunken, ridge, solid, groove

# lbl_1.pack()
lbl_3.pack()
win.mainloop()
