"""Give the user three chances to enter the correct password."""

correct_password = "python123"
attempts_allowed = 3

for attempt in range(1, attempts_allowed + 1):
    password = input(f"Password (attempt {attempt}/{attempts_allowed}): ")

    if password == correct_password:
        print("Access granted.")
        break
    else:
        print("Incorrect password.")
else:
    print("Too many attempts. Access denied.")
