class BankAccount:
    def __init__(self, owner, balance=0.0):
        self.owner = owner
        self.balance = balance

    def deposit(self, amount):
        self.balance += amount
        print(f"{self.owner} deposited {amount}. New balance: {self.balance}")

    def withdraw(self, amount):
        if amount > self.balance:
            print(f"Insufficient funds for {self.owner}.")
        else:
            self.balance -= amount
            print(f"{self.owner} withdrew {amount}. New balance: {self.balance}")

account1 = BankAccount("Alice", 100.0)
account2 = BankAccount("Bob", 50.0)

account1.deposit(50)
account1.withdraw(30)
account2.withdraw(70)
