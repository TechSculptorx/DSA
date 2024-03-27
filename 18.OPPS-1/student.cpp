class Student {
    public:

    int rollNo;

    // Student () {
    //     cout << "Constructor called" << endl;
    // }

    // Student (int r) {
    //     cout << "Constructor 2 called" << endl;

    //     rollNo = r;
    // }

    Student (int a, int r) {
        this -> age = a;
        this -> rollNo = r;
    }

    private :

    int age;

    public :

    void display () {
        cout << age << " " << rollNo << endl;
    }

    int getAge () {
        return age;
    }

    void setAge (int a) {
        age = a;
    }
};
