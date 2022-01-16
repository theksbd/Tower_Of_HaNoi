def towerOfHaNoi(n, src='A', auxi='B', des='C'):
    if n == 1:
        print(f'From {src} to {des}')
    else:
        towerOfHaNoi(n - 1, src, des, auxi)
        print(f'From {src} to {des}')
        towerOfHaNoi(n - 1, auxi, src, des)


remake = True
while remake:
    n = int(input('How many disks do you want to have in your tower? '))
    print("\n=======================================================\nThen, here is your solution:\n")
    towerOfHaNoi(n)
    remake= input("Do you want to remake? (Type 0 for NO, 1 for YES) ")
    if remake == "0":
        remake = False