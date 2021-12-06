#include <iostream>
#include <windows.h>
#include "Library.h"

void AESExample() {
	std::cout << "AES Example" << std::endl;
	std::cout << "----------------------------------\n";
	std::string Text = "Hello World";
	std::string CipherKey = "MbQeThWmZq3t6w9z$C&F)J@NcRfUjXn2";
	std::string IvKey = "w9z$C&F)J@NcRfUjXnZr4u7x!A%D*G-K";
	std::string EncryptOutput = AES::Encrypt(Text, CipherKey, IvKey);
	std::string DecrypttOutput = AES::Decrypt(EncryptOutput, CipherKey, IvKey);
	std::cout << "Encrypt: " << EncryptOutput << std::endl;
	std::cout << "Decrypt: " << DecrypttOutput << std::endl;
	std::cout << "----------------------------------\n\n";
}

void RC6Example() {
	std::cout << "RC6 Example" << std::endl;
	std::cout << "----------------------------------\n";
	std::string Text = "Hello World";
	std::string CipherKey = "MbQeThWmZq3t6w9z$C&F)J@NcRfUjXn2";
	std::string IvKey = "w9z$C&F)J@NcRfUjXnZr4u7x!A%D*G-K";
	std::string EncryptOutput = RC6::Encrypt(Text, CipherKey, IvKey);
	std::string DecrypttOutput = RC6::Decrypt(EncryptOutput, CipherKey, IvKey);
	std::cout << "Encrypt: " << EncryptOutput << std::endl;
	std::cout << "Decrypt: " << DecrypttOutput << std::endl;
	std::cout << "----------------------------------\n\n";
}

void MARSExample() {
	std::cout << "MARS Example" << std::endl;
	std::cout << "----------------------------------\n";
	std::string Text = "Hello World";
	std::string CipherKey = "MbQeThWmZq3t6w9z$C&F)J@NcRfUjXn2";
	std::string IvKey = "w9z$C&F)J@NcRfUjXnZr4u7x!A%D*G-K";
	std::string EncryptOutput = MARS::Encrypt(Text, CipherKey, IvKey);
	std::string DecrypttOutput = MARS::Decrypt(EncryptOutput, CipherKey, IvKey);
	std::cout << "Encrypt: " << EncryptOutput << std::endl;
	std::cout << "Decrypt: " << DecrypttOutput << std::endl;
	std::cout << "----------------------------------\n\n";
}

void TWOFISHExample() {
	std::cout << "TWOFISH Example" << std::endl;
	std::cout << "----------------------------------\n";
	std::string Text = "Hello World";
	std::string CipherKey = "MbQeThWmZq3t6w9z$C&F)J@NcRfUjXn2";
	std::string IvKey = "w9z$C&F)J@NcRfUjXnZr4u7x!A%D*G-K";
	std::string EncryptOutput = TWOFISH::Encrypt(Text, CipherKey, IvKey);
	std::string DecrypttOutput = TWOFISH::Decrypt(EncryptOutput, CipherKey, IvKey);
	std::cout << "Encrypt: " << EncryptOutput << std::endl;
	std::cout << "Decrypt: " << DecrypttOutput << std::endl;
	std::cout << "----------------------------------\n\n";
}

void SERPENTExample() {
	std::cout << "SERPENT Example" << std::endl;
	std::cout << "----------------------------------\n";
	std::string Text = "Hello World";
	std::string CipherKey = "MbQeThWmZq3t6w9z$C&F)J@NcRfUjXn2";
	std::string IvKey = "w9z$C&F)J@NcRfUjXnZr4u7x!A%D*G-K";
	std::string EncryptOutput = SERPENT::Encrypt(Text, CipherKey, IvKey);
	std::string DecrypttOutput = SERPENT::Decrypt(EncryptOutput, CipherKey, IvKey);
	std::cout << "Encrypt: " << EncryptOutput << std::endl;
	std::cout << "Decrypt: " << DecrypttOutput << std::endl;
	std::cout << "----------------------------------\n\n";
}

void CAST256Example() {
	std::cout << "CAST256 Example" << std::endl;
	std::cout << "----------------------------------\n";
	std::string Text = "Hello World";
	std::string CipherKey = "MbQeThWmZq3t6w9z$C&F)J@NcRfUjXn2";
	std::string IvKey = "w9z$C&F)J@NcRfUjXnZr4u7x!A%D*G-K";
	std::string EncryptOutput = CAST256::Encrypt(Text, CipherKey, IvKey);
	std::string DecrypttOutput = CAST256::Decrypt(EncryptOutput, CipherKey, IvKey);
	std::cout << "Encrypt: " << EncryptOutput << std::endl;
	std::cout << "Decrypt: " << DecrypttOutput << std::endl;
	std::cout << "----------------------------------\n\n";
}

int main() {
	AESExample();
	RC6Example();
	MARSExample();
	TWOFISHExample();
	SERPENTExample();
	CAST256Example();
	system("pause");
}