# Simple Banking System README

## Introduction

The Simple Banking System is a basic command-line program written in C that simulates a simple banking system. It allows users to perform fundamental banking operations such as creating accounts, displaying account details, depositing funds, and withdrawing funds.

## Features

1. **Create Account**: Users can create new bank accounts by providing an account number, account holder's name, and initial balance.

2. **Display Accounts**: Users can view the details of all existing bank accounts, including account number, account holder's name, and balance.

3. **Deposit**: Users can deposit funds into a specific account by providing the account number and the amount to deposit.

4. **Withdraw**: Users can withdraw funds from a specific account by providing the account number and the amount to withdraw. The program checks for sufficient balance before allowing a withdrawal.

## Getting Started

To run the Simple Banking System program, follow these steps:

1. **Clone the Repository**: Clone this repository to your local machine using the following command:

   ```
   git clone [repository_url]
   ```

2. **Compile the Code**: Navigate to the repository's directory and compile the code using a C compiler (e.g., GCC). Use the following command:

   ```
   gcc banking_system.c -o banking_system
   ```

3. **Run the Program**: Run the compiled executable to start the program:

   ```
   ./banking_system
   ```

4. **Interact with the Program**: Once the program is running, follow the on-screen menu to perform various banking operations.

## Usage

The program provides a simple text-based interface to interact with the banking system. The main menu presents the following options:

1. **Create Account**: Enter the required information to create a new bank account.

2. **Display Accounts**: View details of all existing bank accounts.

3. **Deposit**: Deposit funds into a specific account by providing the account number and amount.

4. **Withdraw**: Withdraw funds from a specific account, ensuring the account has sufficient balance.

5. **Exit**: Terminate the program.

## Contributions

Contributions to the Simple Banking System are welcome! If you find any issues or have ideas for improvements, feel free to submit pull requests or report issues in the repository.

## Future Enhancements

While the current version of the Simple Banking System provides basic functionality, there are several possible enhancements for future versions:

- Implement password-based authentication for account access.
- Add error handling and input validation to ensure robustness.
- Include the option to transfer funds between accounts.
- Save account information to a file for persistence.

## License

The Simple Banking System is open-source software licensed under the [MIT License](LICENSE).

---

This README provides an overview of the Simple Banking System program. For more details, refer to the source code and comments within the `banking_system.c` file. If you have any questions or need further assistance, feel free to contact the author, Mr. Santosh Dhakal, at santoshdhakal.inbox@gmail.com..