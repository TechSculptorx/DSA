class Student {
    public :
        int age;
        const int rollNumber;
        int &x;

        Student (int age, int rollNumber) : rollNumber(rollNumber), age(age), x(this -> age) {
        }
};
