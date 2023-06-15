import random

def generate_key(username):
    key = ""
    for _ in range(len(username)):
        key += chr(random.randint(33, 126))
    return key

username = input("Enter the username: ")
key = generate_key(username)

print(f"Generated key for {username}: {key}")

