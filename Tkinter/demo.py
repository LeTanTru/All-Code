from random import randint
 
def random_rgb_color():
    r = randint(0, 255)
    g = randint(0, 255)
    b = randint(0, 255)
    
    return tuple([r, g, b])
print(random_rgb_color)