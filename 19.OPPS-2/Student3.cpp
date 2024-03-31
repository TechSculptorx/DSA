class Student {
    static int totalStudents; // Total number of students present in the classs

    public :
        int rollNumber;
        int age;


        Student(int r, int a) {
            this -> rollNumber = r;
            this -> age = a;

            totalStudents++;
        }

        static int getTotalStudents () {
            return totalStudents;
        }

        void print () {
            cout << age << " " << rollNumber << endl;
        }
};

int Student :: totalStudents = 0; // Initialization of static data member
