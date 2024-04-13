template <typename T, typename K>

class Pair {
    T x;
    K y;

    public :

        void setX (T x) {
            this -> x = x;
        }

        T getX () {
            return x;
        }

        void setY (K y) {
            this -> y = y;
        }

        K getY () {
            return y;
        }
};
