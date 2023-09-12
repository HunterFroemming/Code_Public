p1_name = ''
p2_name = ''

p1_health = 0
p2_health = 0

p1_attack = 0
p2_attack = 0


def the_rules():
    print("This is essentially a dice game. \nYou will decide both you and your enemies stats at the beginning. "
          "\nOnce that is done, you will then roll the dice. \nIf you happen to roll a pair you will attack the enemy. "
          "\nIf you do not roll a pair it is the other players turn. "
          "\nIf the pair ends up being a pair of ones you heal"
          " yourself based on your damage value. \nThis process will repeat until either you or"
          " your enemy's health reaches zero. \nWho's ever health reaches zero first loses.")


def create_player_1():
    global p1_name
    global p1_health
    global p1_attack
    p1_name = input("Please enter the name of Player 1")
    print(f"Welcome {p1_name}.")
    while True:
        try:
            p1_health = int(input("Please enter Player 1's health."))
            if p1_health > 0:
                print("Thank you, value recorded.")

            else:
                print("Health must be greater than 0.")
                continue
            break
        except ValueError:
            print("That is not a valid number.")
            continue

    while True:
        try:
            p1_attack = int(input("Please enter Player 1's attack damage."))
            if p1_attack > 0:
                print("Thank you, value recorded.")

            else:
                print("Attack must be greater than 0.")
                continue
            break
        except ValueError:
            print("That is not a valid number.")
            continue


def create_player_2():
    global p2_name
    global p2_health
    global p2_attack
    p2_name = input("Please enter the name of Player 2.")
    print(f"{p2_name} has entered the battlefield.")
    while True:
        try:
            p2_health = int(input("Please enter player 2's health."))
            if p2_health > 0:
                print("Thank you, value recorded.")

            else:
                print("Health must be greater than 0.")
                continue
            break
        except ValueError:
            print("That is not a valid number.")
            continue

    while True:
        try:
            p2_attack = int(input("Please enter Player 2's attack damage."))
            if p2_attack > 0:
                print("Thank you, value recorded.")

            else:
                print("Attack must be greater than 0.")
                continue
            break
        except ValueError:
            print("That is not a valid number.")
            continue


def create_encounter():
    import random
    global p1_name
    global p1_health
    global p1_attack
    global p2_name
    global p2_health
    global p2_attack

    p1_data = [p1_name, p1_health, p1_attack]
    for x in p1_data:
        print(x)
    p2_data = [p2_name, p2_health, p2_attack]
    for y in p2_data:
        print(y)
    print("Welcome to the battle.")
    while True:
        print(f"It's your turn to attack {p2_name}.")
        while p2_health > 0:
            print(f"Please press '1' then <enter> to roll the dice.")
            response = input()
            try:
                if response == '1':
                    dice_1 = random.randint(1, 6)
                    dice_2 = random.randint(1, 6)
                    print(f"{dice_1}\n{dice_2}")
                    if dice_1 + dice_2 == 2:
                        print(f"Congratulations you stole {p1_attack} health points from {p2_name}")
                        p2_health = p2_health - p1_attack
                        p1_health = p1_health + p1_attack
                        print(f"Player 2 has {p2_health} health remaining.")
                        print(f"Player 1 now has {p1_health} health remaining.")
                    if dice_1 == dice_2:
                        print("Congratulations, your attack has landed.")
                        p2_health = p2_health - p1_attack
                        print(f"Player 2 has {p2_health} health remaining.")
                    if dice_1 != dice_2:
                        print("You missed.")
                else:
                    print("Press '1' then <enter>.")
                    continue
                break
            except ValueError:
                print("Please press '1' then <enter>.")
                continue
        if p2_health <= 0:
            print(f"{p1_name} Wins!!")
            break
        print(f"{p2_name} is up next.")
        while p1_health > 0:
            print(f"Please press '2' then <enter> to roll the dice.")
            response = input()
            try:
                if response == '2':
                    dice_1 = random.randint(1, 6)
                    dice_2 = random.randint(1, 6)
                    print(f"{dice_1}\n{dice_2}")
                    if dice_1 + dice_2 == 2:
                        print(f"Congratulations you stole {p2_attack} health points from {p1_name}")
                        p1_health = p1_health - p2_attack
                        p2_health = p2_health + p2_attack
                        print(f"Player 1 has {p1_health} health remaining.")
                        print(f"Player 2 now has {p2_health} health remaining.")
                    if dice_1 == dice_2:
                        print("Congratulations, your attack has landed.")
                        p1_health = p1_health - p2_attack
                        print(f"Player 1 has {p1_health} remaining.")
                    if dice_1 != dice_2:
                        print("You missed.")
                else:
                    print("Press '2' then <enter>.")
                    continue
                break
            except ValueError:
                print("Please press '2' then <enter> to be attacked.")
                continue
        if p1_health <= 0:
            print(f"{p2_name} Wins!!")
            break


if __name__ == '__main__':
    the_rules()
    create_player_1()
    create_player_2()
    create_encounter()
