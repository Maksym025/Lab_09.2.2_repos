#include <iostream>

using namespace std;

int main() {
#ifdef _DEBUG
    cout << "Compilation option: Debug mode is enabled (_DEBUG)." << endl;
#else
    cout << "Compilation option: Debug mode is disabled (_DEBUG not defined)." << endl;
#endif
#if defined(__GNUC__)
    cout << "Using GCC compiler, version: " << __GNUC__ << "." << __GNUC_MINOR__ << endl;
#elif defined(_MSC_VER)
    cout << "Using MSVC compiler, version: " << _MSC_VER << endl;
#else
    cout << "Unknown compiler." << endl;
#endif

    return 0;
}
