def is_valid_UCN(ucn, bypass_checksum=False):
    if len(ucn) != 10:
        return False
    month = int(ucn[2:4])
    if 1 <= month <= 12 or 41 <= month <= 52:
        if bypass_checksum:
            return True
        else:
            return checksum(ucn)
    return False

def checksum(ucn):
    total = int(ucn[0]) * 2 + int(ucn[1]) * 4 + int(ucn[2]) * 8 + int(ucn[3]) * 5 + \
            int(ucn[4]) * 10 + int(ucn[5] ) * 9 + int(ucn[6]) * 7 + int(ucn[7]) * 3 + int(ucn[8]) * 6
    remainder = total % 11
    if remainder == int(ucn[9]):
        return True
    return False

print(is_valid_UCN("6101057509") == True)
print(is_valid_UCN("6101057500", bypass_checksum=True) == True)
print(is_valid_UCN("6101057500") == False)
print(is_valid_UCN("6913136669") == False)