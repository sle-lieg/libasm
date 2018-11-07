import os, sys
dir = os.listdir(os.listdir(os.getcwd())[0])
os.rename("build/"+dir[0], "build/lib")

import tests.bzero

# if __name__ == "__main__":

