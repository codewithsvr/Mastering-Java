class BankAccount {

    // Private variables
    private String accountHolder;
    private long accountNumber;
    private double balance;

    // Setter methods
    public void setAccountHolder(String accountHolder) {
        this.accountHolder = accountHolder;
    }

    public void setAccountNumber(long accountNumber) {
        this.accountNumber = accountNumber;
    }

    public void setBalance(double balance) {
        this.balance = balance;
    }

    // Getter methods
    public String getAccountHolder() {
        return accountHolder;
    }

    public long getAccountNumber() {
        return accountNumber;
    }

    public double getBalance() {
        return balance;
    }
}

public class account {

    public static void main(String[] args) {

        // Create first account
        BankAccount acc1 = new BankAccount();
        acc1.setAccountHolder("Rahul");
        acc1.setAccountNumber(1234567890);
        acc1.setBalance(45000);

        // Create second account
        BankAccount acc2 = new BankAccount();
        acc2.setAccountHolder("Anjali");
        acc2.setAccountNumber(9876543210L);
        acc2.setBalance(65000);

        // Compare balances
        if (acc1.getBalance() > acc2.getBalance()) {

            System.out.println("Account with Higher Balance");
            System.out.println("----------------------------");
            System.out.println("Account Holder : " + acc1.getAccountHolder());
            System.out.println("Account Number : " + acc1.getAccountNumber());
            System.out.println("Balance        : ₹" + acc1.getBalance());

        } else {

            System.out.println("Account with Higher Balance");
            System.out.println("----------------------------");
            System.out.println("Account Holder : " + acc2.getAccountHolder());
            System.out.println("Account Number : " + acc2.getAccountNumber());
            System.out.println("Balance        : ₹" + acc2.getBalance());

        }
    }
}