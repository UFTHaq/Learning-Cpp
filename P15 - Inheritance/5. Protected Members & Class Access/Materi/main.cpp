/*
    PROTECTED MEMBERS AND CLASS ACCESS
    =========================================================================================
    The protected class member modifier

        class Base {
        protected:
            // protected Base class members . . .
        };

    - Accessible from the Base class itself
    - Accessible from classes Derived from Base
    - Not accessible by object of Base or Derived
    =========================================================================================
    The protected class member modifier

        classe Base {
        public:
            int a;      // public Base class members . . .

        protected:      
            int b;      // protected Base class members . . .

        private:
            int c;      // private Base class members . . .
        };

    =========================================================================================
    Access with PUBLIC inheritance

        Base Class                  Access in Derived Class
    public: a                           public: a
    protected: b                        protected: b
    private: c                          c: no access

    =========================================================================================
    Access with PROTECTED inheritance

        Base Class                  Access in Derived Class
    public: a                           protected: a
    protected: b                        protected: b
    private: c                          c: no access
    
    =========================================================================================
    Access with PRIVATE inheritance

        Base Class                  Access in Derived Class
    public: a                           private: a
    protected: b                        private: b
    private: c                          c: no access

    =========================================================================================
*/