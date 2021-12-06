using System;

namespace Cryptography
{
    internal class Example
    {
        static void AESExample()
        {
            Console.WriteLine("AES Example");
            Console.Write("----------------------------------\n");
            string Text = "Hello World";
            string CipherKey = "MbQeThWmZq3t6w9z$C&F)J@NcRfUjXn2";
            string IvKey = "w9z$C&F)J@NcRfUjXnZr4u7x!A%D*G-K";
            string EncryptOutput = AES.Encrypt(Text, CipherKey, IvKey);
            string DecrypttOutput = AES.Decrypt(EncryptOutput, CipherKey, IvKey);
            Console.WriteLine("Encrypt: " + EncryptOutput);
            Console.WriteLine("Decrypt: " + DecrypttOutput);
            Console.Write("----------------------------------\n\n");
        }

        static void RC6Example()
        {
            Console.WriteLine("RC6 Example");
            Console.Write("----------------------------------\n");
            string Text = "Hello World";
            string CipherKey = "MbQeThWmZq3t6w9z$C&F)J@NcRfUjXn2";
            string IvKey = "w9z$C&F)J@NcRfUjXnZr4u7x!A%D*G-K";
            string EncryptOutput = RC6.Encrypt(Text, CipherKey, IvKey);
            string DecrypttOutput = RC6.Decrypt(EncryptOutput, CipherKey, IvKey);
            Console.WriteLine("Encrypt: " + EncryptOutput);
            Console.WriteLine("Decrypt: " + DecrypttOutput);
            Console.Write("----------------------------------\n\n");
        }

        static void MARSExample()
        {
            Console.WriteLine("MARS Example");
            Console.Write("----------------------------------\n");
            string Text = "Hello World";
            string CipherKey = "MbQeThWmZq3t6w9z$C&F)J@NcRfUjXn2";
            string IvKey = "w9z$C&F)J@NcRfUjXnZr4u7x!A%D*G-K";
            string EncryptOutput = MARS.Encrypt(Text, CipherKey, IvKey);
            string DecrypttOutput = MARS.Decrypt(EncryptOutput, CipherKey, IvKey);
            Console.WriteLine("Encrypt: " + EncryptOutput);
            Console.WriteLine("Decrypt: " + DecrypttOutput);
            Console.Write("----------------------------------\n\n");
        }

        static void TWOFISHExample()
        {
            Console.WriteLine("TWOFISH Example");
            Console.Write("----------------------------------\n");
            string Text = "Hello World";
            string CipherKey = "MbQeThWmZq3t6w9z$C&F)J@NcRfUjXn2";
            string IvKey = "w9z$C&F)J@NcRfUjXnZr4u7x!A%D*G-K";
            string EncryptOutput = TWOFISH.Encrypt(Text, CipherKey, IvKey);
            string DecrypttOutput = TWOFISH.Decrypt(EncryptOutput, CipherKey, IvKey);
            Console.WriteLine("Encrypt: " + EncryptOutput);
            Console.WriteLine("Decrypt: " + DecrypttOutput);
            Console.Write("----------------------------------\n\n");
        }

        static void SERPENTExample()
        {
            Console.WriteLine("SERPENT Example");
            Console.Write("----------------------------------\n");
            string Text = "Hello World";
            string CipherKey = "MbQeThWmZq3t6w9z$C&F)J@NcRfUjXn2";
            string IvKey = "w9z$C&F)J@NcRfUjXnZr4u7x!A%D*G-K";
            string EncryptOutput = SERPENT.Encrypt(Text, CipherKey, IvKey);
            string DecrypttOutput = SERPENT.Decrypt(EncryptOutput, CipherKey, IvKey);
            Console.WriteLine("Encrypt: " + EncryptOutput);
            Console.WriteLine("Decrypt: " + DecrypttOutput);
            Console.Write("----------------------------------\n\n");
        }

        static void CAST256Example()
        {
            Console.WriteLine("CAST256 Example");
            Console.Write("----------------------------------\n");
            string Text = "Hello World";
            string CipherKey = "MbQeThWmZq3t6w9z$C&F)J@NcRfUjXn2";
            string IvKey = "w9z$C&F)J@NcRfUjXnZr4u7x!A%D*G-K";
            string EncryptOutput = CAST256.Encrypt(Text, CipherKey, IvKey);
            string DecrypttOutput = CAST256.Decrypt(EncryptOutput, CipherKey, IvKey);
            Console.WriteLine("Encrypt: " + EncryptOutput);
            Console.WriteLine("Decrypt: " + DecrypttOutput);
            Console.Write("----------------------------------\n\n");
        }

        static void Main(string[] args)
        {
            AESExample();
            RC6Example();
            MARSExample();
            TWOFISHExample();
            SERPENTExample();
            CAST256Example();
            Console.ReadKey();
        }
    }
}
