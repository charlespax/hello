#!/usr/bin/python3

import sys

print("Hello, world!")

def example(text):
    print(text)
    return

def main(argv):
    example("print this statement.")
    print("This function name is", __name__)
    print("sys.argv:", sys.argv)

if __name__ == "__main__":
    main(sys.argv)


