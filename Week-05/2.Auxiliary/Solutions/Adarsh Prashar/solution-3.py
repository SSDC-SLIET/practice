def Count_of_Matchstick_need_to_Pick():
    Matchstick = int(input())
    if Matchstick % 5 == 0:
        return -1
    return Matchstick%5


if __name__ == '__main__':
    for i in range(int(input())):
        print(Count_of_Matchstick_need_to_Pick())
