/*
    Class Member Access Modifiers

    publid, private, and protected

    --------------------------------------------------------------
    - public
      - accessible averywhere

      class Class_Name {
      public:
          // declaretion(s);
      };
    --------------------------------------------------------------
    - private
      - accessible only by member or friends of the class
    
      class Class_Name {
      private:
          // declaretion(s);
      };
    --------------------------------------------------------------
    - protected
      - used wiht inheritance - we'll talk about it in the 
        next section

      class Class_Name {
      protected:
          // declaretion(s);
      };
    --------------------------------------------------------------
    --------------------------------------------------------------
    Declaring a Class

    class Player {
    private:
        std::string name;
        int health;
        int exp;

    public:
        void talk(std::string text_to_say);
        bool is_dead();
    };

    Crating Object

    Player frank;
    frank.name = "Frank";                   // Compiler Error
    frank.health = 1000;                    // Compiler Error
    frank.talk("Ready to battle");          // OK

    Player *enemy = new Player;
    enemy->exp = 100;
    enemy->talk("I will hunt you down");    // OK

    delete enemy;
    --------------------------------------------------------------
    Declaring a Class

    class Account {
    private:
        std::string name;
        double balance;
    
    public:
        bool withdraw(double amount);
        bool deposit(double amount);
    };

    Creating Object

    Account frank_account;
    frank_account.balance = 1000000000.00;     // Compiler Error
    frank_account.deposit(1000000000.0);       // OK
    frank_account.name = "Frank's Account";    // Compiler Error

    Account *thor_account = new Account();     // Compiler Error

    thor_account->balance = 10000.0;           // Compiler Error
    thor_account->withdraw(10000.0);           // OK

    delete thor_account;
*/