/*********************************************************************************************************************************************************************************
//Name    : Zanif Sandy
//Creation: 20.05.18
//Version : v1
//Description: 4:
The Vigenere cipher implements the shift cipher with an additional feature. Its function is
E(p; i) =

p + k1 mod 26 if i  1 mod n
...
p + kn mod 26 if i  0 mod n

where (k1; : : : ; kn) is an n-tuple key, p is a plaintext character and i is the position of the character in
the message. The key decrytion key is (􀀀k1; : : : ;􀀀kn). Write a program that opens a le and creates
an encrypted copy using the Vigenere cipher. The rst line of the le will be the encryption key and the
remainder of the le is the actual message. After creating the encrypted copy, display the decryption
key on the screen.
Note: The plaintext is the alphabet (A through Z). The encrypted copy should not contain the
rst line of the original le.

**********************************************************************************************************************************************************************************************/


#include <iostream>
#include "vigenere.h"

int main() {


  std::cout <<"︱︱︱︱︱┏┓┏━┓︱︱︱︱︱︱︱︱︱︱︱︱︱︱︱︱     ︱︱︱┏┓┏━┓┏┓︱︱︱︱︱︱︱\n";
  std::cout <<"┏━┳━┓┣┫┃╋┃┏━┓┏┳┓┏━┓┏━┳┓┏━┓     ┏━┓┣┫┃╋┃┃┗┓┏━┓┏┳┓\n";
  std::cout <<"┗┓┃┏┛┃┃┣┓┃┃┻┫┃┏┛┃┻┫┃┃┃┃┃┻┫     ┃━┫┃┃┃┏┛┃┃┃┃┻┫┃┏┛\n";
  std::cout <<"︱┗━┛︱┗┛┗━┛┗━┛┗┛︱┗━┛┗┻━┛┗━┛     ┗━┛┗┛┗┛︱┗┻┛┗━┛┗┛︱";

  std::cout << "\nby Zanif Sandy\n\n";


    std::cout << "Deciphered Text:\n\n";
    encryptFile("info.txt");

  std::cout   << "\n";

    return 0;
}
