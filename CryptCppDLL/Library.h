#include <aes.h>
#include <rc6.h>
#include <mars.h>
#include <twofish.h>
#include <serpent.h>
#include <cast.h>
#include <base64.h>
#include <modes.h>

namespace AES {
	std::string Encrypt(std::string Text, std::string CipherKey, std::string IvKey) {
		std::string Output;
		CryptoPP::CFB_Mode<CryptoPP::AES>::Encryption Encryption((BYTE*)CipherKey.c_str(), CipherKey.length(), (BYTE*)IvKey.c_str());
		CryptoPP::StringSource Encryptor(Text, true, new CryptoPP::StreamTransformationFilter(Encryption, new CryptoPP::Base64Encoder(new CryptoPP::StringSink(Output), false)));
		return Output;
	}

	std::string Decrypt(std::string Text, std::string CipherKey, std::string IvKey) {
		std::string Output;
		CryptoPP::CFB_Mode<CryptoPP::AES>::Decryption Decryption((BYTE*)CipherKey.c_str(), CipherKey.length(), (BYTE*)IvKey.c_str());
		CryptoPP::StringSource Decryptor(Text, true, new CryptoPP::Base64Decoder(new CryptoPP::StreamTransformationFilter(Decryption, new CryptoPP::StringSink(Output))));
		return Output;
	}
}

namespace RC6 {
	std::string Encrypt(std::string Text, std::string CipherKey, std::string IvKey) {
		std::string Output;
		CryptoPP::CFB_Mode<CryptoPP::RC6>::Encryption Encryption((BYTE*)CipherKey.c_str(), CipherKey.length(), (BYTE*)IvKey.c_str());
		CryptoPP::StringSource Encryptor(Text, true, new CryptoPP::StreamTransformationFilter(Encryption, new CryptoPP::Base64Encoder(new CryptoPP::StringSink(Output), false)));
		return Output;
	}

	std::string Decrypt(std::string Text, std::string CipherKey, std::string IvKey) {
		std::string Output;
		CryptoPP::CFB_Mode<CryptoPP::RC6>::Decryption Decryption((BYTE*)CipherKey.c_str(), CipherKey.length(), (BYTE*)IvKey.c_str());
		CryptoPP::StringSource Decryptor(Text, true, new CryptoPP::Base64Decoder(new CryptoPP::StreamTransformationFilter(Decryption, new CryptoPP::StringSink(Output))));
		return Output;
	}
}

namespace MARS {
	std::string Encrypt(std::string Text, std::string CipherKey, std::string IvKey) {
		std::string Output;
		CryptoPP::CFB_Mode<CryptoPP::MARS>::Encryption Encryption((BYTE*)CipherKey.c_str(), CipherKey.length(), (BYTE*)IvKey.c_str());
		CryptoPP::StringSource Encryptor(Text, true, new CryptoPP::StreamTransformationFilter(Encryption, new CryptoPP::Base64Encoder(new CryptoPP::StringSink(Output), false)));
		return Output;
	}

	std::string Decrypt(std::string Text, std::string CipherKey, std::string IvKey) {
		std::string Output;
		CryptoPP::CFB_Mode<CryptoPP::MARS>::Decryption Decryption((BYTE*)CipherKey.c_str(), CipherKey.length(), (BYTE*)IvKey.c_str());
		CryptoPP::StringSource Decryptor(Text, true, new CryptoPP::Base64Decoder(new CryptoPP::StreamTransformationFilter(Decryption, new CryptoPP::StringSink(Output))));
		return Output;
	}
}

namespace TWOFISH {
	std::string Encrypt(std::string Text, std::string CipherKey, std::string IvKey) {
		std::string Output;
		CryptoPP::CFB_Mode<CryptoPP::Twofish>::Encryption Encryption((BYTE*)CipherKey.c_str(), CipherKey.length(), (BYTE*)IvKey.c_str());
		CryptoPP::StringSource Encryptor(Text, true, new CryptoPP::StreamTransformationFilter(Encryption, new CryptoPP::Base64Encoder(new CryptoPP::StringSink(Output), false)));
		return Output;
	}

	std::string Decrypt(std::string Text, std::string CipherKey, std::string IvKey) {
		std::string Output;
		CryptoPP::CFB_Mode<CryptoPP::Twofish>::Decryption Decryption((BYTE*)CipherKey.c_str(), CipherKey.length(), (BYTE*)IvKey.c_str());
		CryptoPP::StringSource Decryptor(Text, true, new CryptoPP::Base64Decoder(new CryptoPP::StreamTransformationFilter(Decryption, new CryptoPP::StringSink(Output))));
		return Output;
	}
}

namespace SERPENT {
	std::string Encrypt(std::string Text, std::string CipherKey, std::string IvKey) {
		std::string Output;
		CryptoPP::CFB_Mode<CryptoPP::Serpent>::Encryption Encryption((BYTE*)CipherKey.c_str(), CipherKey.length(), (BYTE*)IvKey.c_str());
		CryptoPP::StringSource Encryptor(Text, true, new CryptoPP::StreamTransformationFilter(Encryption, new CryptoPP::Base64Encoder(new CryptoPP::StringSink(Output), false)));
		return Output;
	}

	std::string Decrypt(std::string Text, std::string CipherKey, std::string IvKey) {
		std::string Output;
		CryptoPP::CFB_Mode<CryptoPP::Serpent>::Decryption Decryption((BYTE*)CipherKey.c_str(), CipherKey.length(), (BYTE*)IvKey.c_str());
		CryptoPP::StringSource Decryptor(Text, true, new CryptoPP::Base64Decoder(new CryptoPP::StreamTransformationFilter(Decryption, new CryptoPP::StringSink(Output))));
		return Output;
	}
}

namespace CAST256 {
	std::string Encrypt(std::string Text, std::string CipherKey, std::string IvKey) {
		std::string Output;
		CryptoPP::CFB_Mode<CryptoPP::CAST256>::Encryption Encryption((BYTE*)CipherKey.c_str(), CipherKey.length(), (BYTE*)IvKey.c_str());
		CryptoPP::StringSource Encryptor(Text, true, new CryptoPP::StreamTransformationFilter(Encryption, new CryptoPP::Base64Encoder(new CryptoPP::StringSink(Output), false)));
		return Output;
	}

	std::string Decrypt(std::string Text, std::string CipherKey, std::string IvKey) {
		std::string Output;
		CryptoPP::CFB_Mode < CryptoPP::CAST256 > ::Decryption Decryption((BYTE*)CipherKey.c_str(), CipherKey.length(), (BYTE*)IvKey.c_str());
		CryptoPP::StringSource Decryptor(Text, true, new CryptoPP::Base64Decoder(new CryptoPP::StreamTransformationFilter(Decryption, new CryptoPP::StringSink(Output))));
		return Output;
	}
}