from random import randint, choice

def main():
    allowed = "+-()/*1234567890"
    expresi = ""
    for _ in range(100000):
        for _ in range(50):
            expresi+=choice(allowed)
        expresi+='\n'

    with open("formule.txt", "w") as file:
        file.write(expresi)


if __name__=="__main__":
    main()
