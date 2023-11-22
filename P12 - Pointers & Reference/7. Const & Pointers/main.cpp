/*
    Const and Pointers

    There are several ways to qualify pointers uising const:

    - Pointers to constants:
      - The data pointed to by the pointers is constant and can't be changed.
      - The pointer itself can change and point somewhere else.

        int high_score {100};
        int low_score {65};
        const int *score_ptr {&high_score};

        *score_ptr = 86;            // ERROR
        score_ptr = &low_score;     // OK

    - Constant Pointers:
      - The data pointed to by the pointers can be changed.
      - The pointer itself cannot change and point somewhere else.

        int high_score {100};
        int low_score {65};
        int *const score_ptr {&high_score};

        *score_ptr = 86;           // OK
        score_ptr = &low_score;    // ERROR

    - Constant Pointers to constants:
      - The data pointed to by the pointer is constant and can't be changed.
      - The pointer itself cannot change and point somewhere else.
      
        int high_score {100};
        int low_score {65};
        const int *const score_ptr {&high_score};

        *score_ptr = 86;          // ERROR
        score_ptr = &low_score;   // ERROR
*/