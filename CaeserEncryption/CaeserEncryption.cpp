#include <iostream>
using namespace std;


class CaesarEncryptionAlgorithm {
public:
    char* ToEncrypt(char* massage, int key) {
        int i = 0;
        while (massage[i] != '\0') {
            massage[i] = massage[i] + key;
            i++;
        }
        return massage;
    }

    char* ToDecrypt(char* massage, int key) {
        int i = 0;
        while (massage[i]!= '\0') {
            massage[i] = massage[i] - key;
            i++;
        }
        return massage;
    }
};


int main()
{
    CaesarEncryptionAlgorithm algorithm;
    char massage[] = "Hello World!";
    int key = 2;

    cout << "Original message: " << massage << endl;

    char* encrypted = algorithm.ToEncrypt(massage, key);
    cout << "Encrypted message: " << encrypted << endl;

    char* decrypted = algorithm.ToDecrypt(encrypted, key);
    cout << "Decrypted message: " << decrypted << endl;

    return 0;
}