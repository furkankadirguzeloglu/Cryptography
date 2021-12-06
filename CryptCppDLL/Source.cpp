#include <iostream>
#include <windows.h>
#include "Library.h"

extern "C" __declspec(dllexport) char* __stdcall AESEncrypt(const char* Text, const char* CipherKey, const char* IvKey)
{
	std::string Encryption = AES::Encrypt(Text, CipherKey, IvKey);
	char* Output = NULL;
	Output = (char*)::CoTaskMemAlloc(strlen(Encryption.c_str()) + sizeof(char));
	strcpy(Output, Encryption.c_str());
	return Output;
}

extern "C" __declspec(dllexport) char* __stdcall AESDecrypt(const char* Text, const char* CipherKey, const char* IvKey)
{
	std::string Encryption = AES::Decrypt(Text, CipherKey, IvKey);
	char* Output = NULL;
	Output = (char*)::CoTaskMemAlloc(strlen(Encryption.c_str()) + sizeof(char));
	strcpy(Output, Encryption.c_str());
	return Output;
}

extern "C" __declspec(dllexport) char* __stdcall RC6Encrypt(const char* Text, const char* CipherKey, const char* IvKey)
{
	std::string Encryption = RC6::Encrypt(Text, CipherKey, IvKey);
	char* Output = NULL;
	Output = (char*)::CoTaskMemAlloc(strlen(Encryption.c_str()) + sizeof(char));
	strcpy(Output, Encryption.c_str());
	return Output;
}

extern "C" __declspec(dllexport) char* __stdcall RC6Decrypt(const char* Text, const char* CipherKey, const char* IvKey)
{
	std::string Encryption = RC6::Decrypt(Text, CipherKey, IvKey);
	char* Output = NULL;
	Output = (char*)::CoTaskMemAlloc(strlen(Encryption.c_str()) + sizeof(char));
	strcpy(Output, Encryption.c_str());
	return Output;
}

extern "C" __declspec(dllexport) char* __stdcall MARSEncrypt(const char* Text, const char* CipherKey, const char* IvKey)
{
	std::string Encryption = MARS::Encrypt(Text, CipherKey, IvKey);
	char* Output = NULL;
	Output = (char*)::CoTaskMemAlloc(strlen(Encryption.c_str()) + sizeof(char));
	strcpy(Output, Encryption.c_str());
	return Output;
}

extern "C" __declspec(dllexport) char* __stdcall MARSDecrypt(const char* Text, const char* CipherKey, const char* IvKey)
{
	std::string Encryption = MARS::Decrypt(Text, CipherKey, IvKey);
	char* Output = NULL;
	Output = (char*)::CoTaskMemAlloc(strlen(Encryption.c_str()) + sizeof(char));
	strcpy(Output, Encryption.c_str());
	return Output;
}

extern "C" __declspec(dllexport) char* __stdcall TWOFISHEncrypt(const char* Text, const char* CipherKey, const char* IvKey)
{
	std::string Encryption = TWOFISH::Encrypt(Text, CipherKey, IvKey);
	char* Output = NULL;
	Output = (char*)::CoTaskMemAlloc(strlen(Encryption.c_str()) + sizeof(char));
	strcpy(Output, Encryption.c_str());
	return Output;
}

extern "C" __declspec(dllexport) char* __stdcall TWOFISHDecrypt(const char* Text, const char* CipherKey, const char* IvKey)
{
	std::string Encryption = TWOFISH::Decrypt(Text, CipherKey, IvKey);
	char* Output = NULL;
	Output = (char*)::CoTaskMemAlloc(strlen(Encryption.c_str()) + sizeof(char));
	strcpy(Output, Encryption.c_str());
	return Output;
}

extern "C" __declspec(dllexport) char* __stdcall SERPENTEncrypt(const char* Text, const char* CipherKey, const char* IvKey)
{
	std::string Encryption = SERPENT::Encrypt(Text, CipherKey, IvKey);
	char* Output = NULL;
	Output = (char*)::CoTaskMemAlloc(strlen(Encryption.c_str()) + sizeof(char));
	strcpy(Output, Encryption.c_str());
	return Output;
}

extern "C" __declspec(dllexport) char* __stdcall SERPENTDecrypt(const char* Text, const char* CipherKey, const char* IvKey)
{
	std::string Encryption = SERPENT::Decrypt(Text, CipherKey, IvKey);
	char* Output = NULL;
	Output = (char*)::CoTaskMemAlloc(strlen(Encryption.c_str()) + sizeof(char));
	strcpy(Output, Encryption.c_str());
	return Output;
}

extern "C" __declspec(dllexport) char* __stdcall CAST256Encrypt(const char* Text, const char* CipherKey, const char* IvKey)
{
	std::string Encryption = CAST256::Encrypt(Text, CipherKey, IvKey);
	char* Output = NULL;
	Output = (char*)::CoTaskMemAlloc(strlen(Encryption.c_str()) + sizeof(char));
	strcpy(Output, Encryption.c_str());
	return Output;
}

extern "C" __declspec(dllexport) char* __stdcall CAST256Decrypt(const char* Text, const char* CipherKey, const char* IvKey)
{
	std::string Encryption = CAST256::Decrypt(Text, CipherKey, IvKey);
	char* Output = NULL;
	Output = (char*)::CoTaskMemAlloc(strlen(Encryption.c_str()) + sizeof(char));
	strcpy(Output, Encryption.c_str());
	return Output;
}