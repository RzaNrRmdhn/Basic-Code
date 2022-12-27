from tkinter import *
from tkinter import messagebox

def Message():
    messagebox.showinfo('Response', 'You Clicked The Oke Button')

def Cancel():
    messagebox.showinfo('Response', 'You Clicked The Cancel')

root = Tk()
button = Button(root, text="OKE", command="youclik")
button2 = Button(root, text="Cancel", command=Cancel)
button.pack()
button2.pack()


root.mainloop()
