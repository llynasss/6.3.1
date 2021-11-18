#include <iostream> 

#include <iomanip> 

#include <time.h> 



using namespace std;



template <typename T, typename d>

void create_t(T* a, d size, T Low, T High)

{

    for (int i = 0; i < size; i++)

        a[i] = Low + rand() % (High - Low + 1);

}



void create(int* a, const int size, const int Low, const int High)

{

    for (int i = 0; i < size; i++)

        a[i] = Low + rand() % (High - Low + 1);

}





template <typename T, typename d>

void print_t(T* a, d n) {

    cout << "----------------------------------------------\n" <<

        "| a |";

    for (int i = 0; i < n; i++) {

        cout << " " << setw(3) << a[i];

    }

    cout << "|\n";

}



void print(int* a, const int n) {

    cout << "----------------------------------------------\n" <<

        "| a |";

    for (int i = 0; i < n; i++) {

        cout << " " << setw(3) << a[i];

    }

    cout << "|\n";

}



template<typename T, typename D>

bool check_t(D a, T n) {

    int k = 0;

    for (int i = 0; i < n; i++) {

        if (!(a[i] < a[i + 1])) {

            k++;

        }

    }



    if (k == n + 1) {

        return 1;

    }

    else return 0;

}



bool check(int* a, const int n) {

    int k = 0;

    for (int i = 0; i < n; i++) {

        if (!(a[i] < a[i + 1])) {

            k++;

        }

    }



    if (k == n - 1) {

        return 1;

    }

    else return 0;

}



int main() {

    srand((unsigned)time(NULL));



    const int n = 10;

    int low = -10;

    int hight = 10;



    int a[2 * n];



    bool ch;

    bool ch_t;





    create(a, n, low, hight);

    create_t<int>(a, n, low, hight);





    print(a, n);

    print_t<int>(a, n);



    cout << "----------------------------------------------\n";



    ch = check(a, n);

    ch_t = check_t<bool>(a, n);





    cout << ch << endl;

    cout << ch_t;

}



